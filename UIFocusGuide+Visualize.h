//
//  UIFocusGuide+Visualize.h
//  UIFocusHelper
//
//  Created by Kevin Bradley on 12/1/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIFocusGuide (Visualize)
- (UIView *)visualizeWithColor:(UIColor *)color;
- (UIView *)visualize;
@end

NS_ASSUME_NONNULL_END
