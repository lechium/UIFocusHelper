//
//  UIView+Focus.m
//  UIFocusHelper
//
//  Created by Kevin Bradley on 12/1/23.
//

#import "UIView+Focus.h"
#import "UIFocusGuide+Visualize.h"

@implementation UIView (Focus)

- (NSArray <UIFocusGuide *>*)_helperFocusGuides {
    NSArray <UIFocusGuide*>*layoutGuides = [self layoutGuides];
    NSPredicate *filterPred = [NSPredicate predicateWithBlock:^BOOL(id  _Nullable evaluatedObject, NSDictionary<NSString *,id> * _Nullable bindings) {
        return [evaluatedObject isKindOfClass:UIFocusGuide.class];
    }];
    return [layoutGuides filteredArrayUsingPredicate:filterPred];
}

- (void)logFocusGuides {
    NSLog(@"focusGuides: %@", [self _helperFocusGuides]);
}

- (void)drawFocusGuides {
    [self drawFocusGuidesWithColor:[UIColor redColor]];
}

- (void)removeDrawnFocusGuides {
    NSInteger focusGuideCount = [[self _helperFocusGuides] count];
    NSInteger startingIndex = 420;
    for (NSInteger i = 0; i < focusGuideCount; i++) {
        UIView *view = [self viewWithTag:i + startingIndex];
        [view removeFromSuperview];
    }
}

- (void)drawFocusGuidesWithColor:(UIColor *)color {
    NSArray <UIFocusGuide *>*focusGuides = [self _helperFocusGuides];
    __block NSInteger startingTag = 420;
    [focusGuides enumerateObjectsUsingBlock:^(UIFocusGuide * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        UIView *view = [obj visualizeWithColor:color];
        view.tag = startingTag;
        startingTag++;
    }];
}

@end
