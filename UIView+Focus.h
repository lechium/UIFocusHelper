//
//  UIView+Focus.h
//  UIFocusHelper
//
//  Created by Kevin Bradley on 12/1/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (Focus)
- (NSArray <UIFocusGuide *>*)_helperFocusGuides;
- (void)drawFocusGuidesWithColor:(UIColor *)color;
- (void)drawFocusGuides;
- (void)removeDrawnFocusGuides;
@end

NS_ASSUME_NONNULL_END
