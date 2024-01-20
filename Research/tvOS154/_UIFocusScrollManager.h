//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, UIScreen, _UIFocusDisplayLinkScrollAnimator;

__attribute__((visibility("hidden")))
@interface _UIFocusScrollManager : NSObject
{
    UIScreen *_screen;	// 8 = 0x8
    _UIFocusDisplayLinkScrollAnimator *_scrollAnimator;	// 16 = 0x10
    NSHashTable *_stackVisitedScrollingContainers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000062c437
@property(readonly, nonatomic) NSHashTable *stackVisitedScrollingContainers; // @synthesize stackVisitedScrollingContainers=_stackVisitedScrollingContainers;
@property(readonly, nonatomic) _UIFocusDisplayLinkScrollAnimator *scrollAnimator; // @synthesize scrollAnimator=_scrollAnimator;
@property(readonly, nonatomic) __weak UIScreen *screen; // @synthesize screen=_screen;
- (struct CGPoint)_contentOffsetForNonPagingContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2 itemFrame:(struct CGRect)arg3 targetOffset:(struct CGPoint)arg4 targetBounds:(struct CGRect)arg5;	// IMP=0x000000000062bbac
- (struct CGPoint)_contentOffsetForPagingContainer:(id)arg1 itemFrame:(struct CGRect)arg2 targetOffset:(struct CGPoint)arg3;	// IMP=0x000000000062b9e5
- (struct CGPoint)_contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2 itemFrame:(struct CGRect)arg3 targetOffset:(struct CGPoint)arg4 targetBounds:(struct CGRect)arg5;	// IMP=0x000000000062b8ad
- (struct CGPoint)_contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2;	// IMP=0x000000000062b451
- (struct CGPoint)contentOffsetForScrollableContainer:(id)arg1 toShowFocusItemWithInfo:(id)arg2;	// IMP=0x000000000062b43f
- (struct CGPoint)contentOffsetForScrollableContainer:(id)arg1 toShowRect:(struct CGRect)arg2 targetOffset:(struct CGPoint)arg3 targetBounds:(struct CGRect)arg4;	// IMP=0x000000000062b42b
- (struct CGPoint)contentOffsetForScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2 targetOffset:(struct CGPoint)arg3 targetBounds:(struct CGRect)arg4;	// IMP=0x000000000062b311
- (struct CGPoint)_contentOffsetConsideredCurrentForScrollableContainer:(id)arg1;	// IMP=0x000000000062b285
- (void)_ensureFocusItemIsOnscreen:(id)arg1 inEnvironmentScrollableContainer:(id)arg2;	// IMP=0x000000000062afb6
- (void)_scrollToFocusItemWithInfo:(id)arg1 offset:(struct CGPoint)arg2 inEnvironmentScrollableContainer:(id)arg3;	// IMP=0x000000000062a73e
- (void)adjustTargetContentOffsetForScrollableContainer:(id)arg1 byDelta:(struct CGPoint)arg2;	// IMP=0x000000000062a728
- (void)animateOffsetOfScrollableContainersInParentEnvironmentContainer:(id)arg1 toShowFocusItem:(id)arg2;	// IMP=0x000000000062a43f
- (void)animateOffsetOfEnvironmentScrollableContainer:(id)arg1 toShowFocusItem:(id)arg2;	// IMP=0x000000000062a2a7
- (struct CGPoint)currentVelocityForScrollableContainer:(id)arg1;	// IMP=0x000000000062a291
- (struct CGPoint)targetContentOffsetForScrollableContainer:(id)arg1;	// IMP=0x000000000062a27b
- (void)cancelScrollingForScrollableContainer:(id)arg1;	// IMP=0x000000000062a265
- (_Bool)isScrollingScrollableContainer:(id)arg1;	// IMP=0x000000000062a24f
- (void)performScrollingIfNeededForFocusUpdateInContext:(id)arg1;	// IMP=0x0000000000629c22
- (id)initWithScreen:(id)arg1;	// IMP=0x0000000000629b3a

@end
