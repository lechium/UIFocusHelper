//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFocusSystem, UIView, _UIFocusRegionMapSnapshot;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionMap : NSObject
{
    UIView *_rootView;	// 8 = 0x8
    UIFocusSystem *_focusSystem;	// 16 = 0x10
    _UIFocusRegionMapSnapshot *_lastSnapshot;	// 24 = 0x18
    struct CGRect _minimumSearchArea;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007127aa
@property(retain, nonatomic) _UIFocusRegionMapSnapshot *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property(nonatomic) struct CGRect minimumSearchArea; // @synthesize minimumSearchArea=_minimumSearchArea;
@property(retain, nonatomic) UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property(nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
- (_Bool)_containsFocusableRegionForView:(id)arg1;	// IMP=0x000000000071235d
- (id)debugQuickLookObject;	// IMP=0x000000000071230d
- (id)_contextWithSourceView:(id)arg1 focusedContainerGuide:(id)arg2 movement:(id)arg3;	// IMP=0x000000000071215e
- (id)_contextWithSourceView:(id)arg1 focusedRegion:(id)arg2 movement:(id)arg3;	// IMP=0x0000000000711f8c
- (struct CGRect)_viewSearchRectForFocusedFrame:(struct CGRect)arg1 focusCandidateSearchRect:(struct CGRect)arg2 includesFocusedFrame:(_Bool)arg3;	// IMP=0x0000000000711d05
- (struct CGRect)_viewSearchRectForSnapshotRect:(struct CGRect)arg1;	// IMP=0x0000000000711cb8
- (struct CGRect)_rectThatJustBarelyIntersectsRect:(struct CGRect)arg1 startingRect:(struct CGRect)arg2;	// IMP=0x0000000000711754
- (struct CGRect)_focusCandidateSearchRectForFocusedFrame:(struct CGRect)arg1 heading:(unsigned long long)arg2 minimumSearchArea:(struct CGRect)arg3;	// IMP=0x00000000007112cf
- (struct CGPoint)_focusCandidateSearchOriginForFocusedFrame:(struct CGRect)arg1 heading:(unsigned long long)arg2 minimumSearchArea:(struct CGRect)arg3;	// IMP=0x0000000000711222
- (id)_closestFocusableRegionInArray:(id)arg1 toPoint:(struct CGPoint)arg2 usingHeading:(unsigned long long)arg3 withFocusedView:(id)arg4 consideringFavoredRegion:(_Bool)arg5 includingFocusedView:(_Bool)arg6;	// IMP=0x0000000000710d81
- (id)linearlyOrderedFocusRegionMapEntriesForFocusMovement:(id)arg1 fromView:(id)arg2;	// IMP=0x0000000000710a19
- (id)linearlyOrderedCandidatesForFocusMovement:(id)arg1 fromView:(id)arg2 indexForFocusedView:(unsigned long long *)arg3;	// IMP=0x00000000007106c3
- (id)_nearestCandidateForFocusMovement:(id)arg1 fromFocusedView:(id)arg2 withFocusedRect:(struct CGRect)arg3 includingFocusedView:(_Bool)arg4;	// IMP=0x000000000070fa3b
- (id)nearestCandidateFromRect:(struct CGRect)arg1;	// IMP=0x000000000070f955
- (id)initWithRootView:(id)arg1 focusSystem:(id)arg2;	// IMP=0x000000000070f8c2

@end

