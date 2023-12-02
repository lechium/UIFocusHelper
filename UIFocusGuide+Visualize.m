//
//  UIFocusGuide+Visualize.m
//  UIFocusHelper
//
//  Created by Kevin Bradley on 12/1/23.
//

#import "UIFocusGuide+Visualize.h"

@implementation UIFocusGuide (Visualize)

- (UIView *)visualizeWithColor:(UIColor *)color {
    UIView *view = [UIView new];
    view.frame = self.layoutFrame;
    view.backgroundColor = [UIColor redColor];
    [self.owningView addSubview:view];
    if ([self.identifier length] > 0 ){
        UILabel *label = [UILabel new];
        label.textColor = [UIColor whiteColor];
        label.font = [UIFont boldSystemFontOfSize:14];
        label.text = self.identifier;
        label.backgroundColor = [UIColor blackColor];
        [label sizeToFit];
        [view addSubview:label];
    }
    return view;
}

- (UIView *)visualize {
    return [self visualizeWithColor:[UIColor redColor]];
}

@end
