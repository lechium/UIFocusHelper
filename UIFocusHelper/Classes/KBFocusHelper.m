//
//  KBFocusHelper.m
//  UIFocusHelper
//
//  Created by Kevin Bradley on 1/15/24.
//

#import "KBFocusHelper.h"

//TODO: Research _UIFocusMap.h

@implementation KBFocusHelper

+ (UIImage *)createFocusSnapshotFromViewController:(UIViewController *)viewController clipping:(BOOL)clipping {
    return [self createFocusSnapshotFromViewController:viewController withHeading:UIFocusHeadingDown clipping:clipping];
}

+ (UIImage *)createFocusSnapshotFromViewController:(UIViewController *)viewController withHeading:(UIFocusHeading)focusHeading clipping:(BOOL)clipping {
    
    id <UIApplicationDelegate> appDelegate = [[UIApplication sharedApplication] delegate];
    UIWindow *window = [appDelegate window];
    UIFocusSystem *fs = [UIFocusSystem focusSystemForEnvironment:viewController];
    NSArray *uifmr = @[@"_U", @"IFoc", @"usMo", @"veme", @"ntRequest"];
    id focusMovementRequest = [[NSClassFromString([uifmr componentsJoinedByString:@""]) alloc] initWithFocusSystem:fs window:window];
    NSArray *uifmi = @[@"_U",@"IFo", @"cus", @"Mov", @"eme", @"ntInfo"];
    id movementInfo = [[NSClassFromString([uifmi componentsJoinedByString:@""]) alloc] initWithHeading:focusHeading linearHeading:0 isInitial:true shouldLoadScrollableContainer:true looping:false groupFilter:0];
    //NSLog(@"movementInfo: %@", movementInfo);
    [focusMovementRequest setMovementInfo:movementInfo];
    id itemInfo = [focusMovementRequest focusedItemInfo];
    id searchInfo = [focusMovementRequest searchInfo];
    //UIFocusUpdateContext *context = [[UIFocusUpdateContext alloc] _initWithFocusMovementRequest:focusMovementRequest nextFocusedItem:nil];
    id region = [itemInfo focusedRegion];
    
    NSLog(@"region: %@", region);
    /*
     
     //up
     {{80, 223}, {335, 40}}
     {{80, -1}, {335, 224}}
     
     {{80, 180}, {298, 40}}
     {{80, -2}, {298, 182}}
     
     //left
     {{1609, 53.7436}, {235, 73.5128}}
     {{-2, 53.7436}, {1611, 73.5128}}
     
     {{1391, 54.4037}, {258, 72.1927}}
     {{-2, 54.4037}, {1393, 72.1927}}
     
     //right
     {{404, 53.259668508287291}, {221, 74.480662983425418}}
     {{625, 53.2597}, {1297, 74.4807}}
    
     {{404, 53.259668508287291}, {221, 74.480662983425418}}
     {{625, 53.2597}, {1297, 74.4807}}
     
     we are going down so we take the height and add it to origin.y and add ~880 to the height to set the 'snapshot' frame
     
     {{585, 52.988505747126439}, {214, 75.022988505747136}}
     {{585, 128.011}, {214, 953.989}} //878.96601149425286
     */
    NSArray *uifssc = @[@"_U",@"IFo",@"cu",@"sSys",@"temS",@"cen",@"eCom",@"ponent"];
    id sceneComp = [NSClassFromString([uifssc componentsJoinedByString:@""]) sceneComponentForFocusSystem: fs];
    id coordSpace = [sceneComp coordinateSpace];
    NSArray *uifmss = @[@"_U",@"IF",@"oc",@"usM",@"apS",@"nap",@"shotter"];
    Class snapshotterClass = NSClassFromString([uifmss componentsJoinedByString:@""]);
    id snapshotter = nil;
    if ([snapshotterClass instancesRespondToSelector:@selector(initWithFocusSystem:rootContainer:coordinateSpace:searchInfo:)]) {
        snapshotter = [[snapshotterClass alloc] initWithFocusSystem:fs rootContainer:window coordinateSpace:coordSpace searchInfo:searchInfo];
    } else { //16+
        snapshotter = [[snapshotterClass alloc] initWithFocusSystem:fs rootContainer:window coordinateSpace:coordSpace searchInfo:searchInfo ignoresRootContainerClippingRect:true];
    }
    [snapshotter setFocusedRegion: region];
    if (clipping) {
        CGRect frame = CGRectZero;
        CGSize screenSize = [[UIScreen mainScreen] bounds].size;
        if ([region respondsToSelector:@selector(frame)]) { //_UIFocusRegion
            frame = [region frame];
        } else { // in 16 + its a _UIFocusItemRegion instead of _UIFocusRegion
            frame = [itemInfo focusedRectInCoordinateSpace:[UIScreen mainScreen]];
        }
            switch (focusHeading) {
                case UIFocusHeadingDown:
                    frame.origin.y += frame.size.height;
                    frame.size.height = screenSize.height - frame.origin.y;
                    break;
                    
                case UIFocusHeadingRight:
                    frame.origin.x += frame.size.width;
                    frame.size.width = screenSize.width - frame.origin.x;
                    break;
                case UIFocusHeadingLeft:
                    frame.size.width = frame.origin.x;
                    frame.origin.x = -2;
                    break;
                case UIFocusHeadingUp:
                    frame.size.height = frame.origin.y;
                    frame.origin.y = -1;
                    break;
                default:
                    break;
            }
            [snapshotter setSnapshotFrame:frame];
            [snapshotter setClipToSnapshotRect:true];
    }
    id shot = [snapshotter captureSnapshot];
    return [shot debugQuickLookObject];
}

@end
