//
//  KBFOCUSViewController.m
//  UIFocusHelper
//
//  Created by Kevin Bradley on 12/01/2023.
//  Copyright (c) 2023 Kevin Bradley. All rights reserved.
//

#import "KBFOCUSViewController.h"
#import "KBFocusHelper.h"
#import "UIViewController+FocusHelper.h"

#define MODEL(n,p,i) [[KBModelItem alloc] initWithTitle:n imagePath:p uniqueID:i]

@interface KBFOCUSViewController ()

@end

@implementation KBFOCUSViewController
- (NSArray *)items {
    
        KBSection *section = [KBSection new];
        section.type = @"banner";
        section.size = @"1700x525";
        section.infinite = true;
        section.autoScroll = true;
        section.order = 0;
        section.className = @"KBModelItem";
    
        KBModelItem *modelItem = [KBModelItem new];
        modelItem.details = @"Drake";
        modelItem.title = @"Drake - Worst Behavior";
        modelItem.banner = @"https://i.ytimg.com/vi/CccnAvfLPvE/hq720.jpg?sqp=-oaymwEXCNAFEJQDSFryq4qpAwkIARUAAIhCGAE=&rs=AOn4CLBKduZRk6TRsKi8h4DE_cPajmtOcA";
        modelItem.uniqueID = @"CccnAvfLPvE";
        modelItem.resultType = @1;
        section.items = @[modelItem];
    
        KBSection *sectionTwo = [KBSection new];
        sectionTwo.type = @"standard";
        sectionTwo.sectionName = @"First";
        sectionTwo.size = @"320x240";
        sectionTwo.infinite = false;
        sectionTwo.autoScroll = false;
        sectionTwo.order = 1;
        sectionTwo.className = @"KBModelItem";
        sectionTwo.items = @[
            MODEL(@"God's Plan", @"https://i.ytimg.com/vi/xpVfcZ0ZcFM/hqdefault.jpg", @"xpVfcZ0ZcFM"),
            MODEL(@"Rich Flex", @"https://i.ytimg.com/vi/I4DjHHVHWAE/hqdefault.jpg", @"I4DjHHVHWAE"),
            MODEL(@"Spin Bout U", @"https://i.ytimg.com/vi/T8nbNQpRwNo/hqdefault.jpg", @"T8nbNQpRwNo"),
            MODEL(@"MIA", @"https://i.ytimg.com/vi/NveQffpaOlU/hqdefault.jpg", @"NveQffpaOlU"),
            MODEL(@"Search & Rescue", @"https://i.ytimg.com/vi/tVthyPOWc-E/hqdefault.jpg", @"tVthyPOWc-E"),
    ];
    
        KBSection *sectionThree = [KBSection new];
        sectionThree.type = @"standard";
        sectionThree.sectionName = @"Second";
        sectionThree.size = @"320x240";
        sectionThree.infinite = false;
        sectionThree.autoScroll = false;
        sectionThree.order = 2;
        sectionThree.className = @"KBModelItem";
        sectionThree.items = @[
            MODEL(@"Drake - Worst Behavior", @"https://i.ytimg.com/vi/CccnAvfLPvE/hq720.jpg?sqp=-oaymwEXCNAFEJQDSFryq4qpAwkIARUAAIhCGAE=&rs=AOn4CLBKduZRk6TRsKi8h4DE_cPajmtOcA", @"CccnAvfLPvE"),
            MODEL(@"Drake - Stars (Official Music Video) 2023", @"https://i.ytimg.com/vi/R4DZBZJsoEY/hq720.jpg?sqp=-oaymwEXCNAFEJQDSFryq4qpAwkIARUAAIhCGAE=&rs=AOn4CLAKZUsBLjiB8Ook77VQSqatPhaQ2g", @"R4DZBZJsoEY"),
            MODEL(@"DJ Khaled ft. Drake - POPSTAR (Official Music Video - Starring Justin Bieber)", @"https://i.ytimg.com/vi/3CxtK7-XtE0/hq720.jpg?sqp=-oaymwEXCNAFEJQDSFryq4qpAwkIARUAAIhCGAE=&rs=AOn4CLD9FC8VLEM86eZAY8awL1-3LgmM2g", @"3CxtK7-XtE0"),
            MODEL(@"Meek Mill - Going Bad feat. Drake (Official Video)", @"https://i.ytimg.com/vi/S1gp0m4B5p8/hqdefault.jpg?sqp=-oaymwEjCOADEI4CSFryq4qpAxUIARUAAAAAGAElAADIQj0AgKJDeAE=&rs=AOn4CLD33ZfTKyCvv6OWsoN_imf2kx3vnQ", @"S1gp0m4B5p8"),
            MODEL(@"Teenage Fever", @"https://i.ytimg.com/vi/e8HtwsnuTIw/hq720.jpg?sqp=-oaymwEXCNAFEJQDSFryq4qpAwkIARUAAIhCGAE=&rs=AOn4CLDMtNcOuNNwmb7rVQfQYpmpOeWDbA", @"e8HtwsnuTIw"),
        ];
        return @[section, sectionTwo, sectionThree];
    }
- (void)viewDidLoad
{
    [super viewDidLoad];
    self.title = @"Focus Test";
    self.sections = [self items];
    self.placeholderImage = [UIImage imageNamed:@"YTPlaceholder.png"];
    __weak typeof(self) weakSelf = self;
    self.itemSelectedBlock = ^(KBModelItem * _Nonnull item, BOOL longPress) {
        __strong typeof(self) strongSelf = weakSelf;
        NSLog(@"selected item: %@ long press: %d", item, longPress);
        if (!longPress) {
            [strongSelf showFocusDebugAlertController];
        } else {
            DLog(@"long press on item: %@", item);
        }
    };
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
