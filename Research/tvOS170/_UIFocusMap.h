//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFocusSystem, _UIFocusGroupMap, _UIFocusMapSearchInfo, _UIFocusSearchInfo;
@protocol UICoordinateSpace, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMap : NSObject
{
    _Bool _minimumSearchAreaIsEmpty;	// 8 = 0x8
    _Bool _trackingSearchInfo;	// 9 = 0x9
    _Bool _needsSearchInfo;	// 10 = 0xa
    _Bool _ignoresRootContainerClippingRect;	// 11 = 0xb
    UIFocusSystem *_focusSystem;	// 16 = 0x10
    id <_UIFocusRegionContainer> _rootContainer;	// 24 = 0x18
    id <UICoordinateSpace> _coordinateSpace;	// 32 = 0x20
    _UIFocusGroupMap *_focusGroupMap;	// 40 = 0x28
    _UIFocusSearchInfo *_searchInfo;	// 48 = 0x30
    _UIFocusMapSearchInfo *_defaultItemSearchInfo;	// 56 = 0x38
    _UIFocusMapSearchInfo *_focusMovementSearchInfo;	// 64 = 0x40
    struct CGRect _minimumSearchArea;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000007248ed
@property(readonly, nonatomic, getter=_focusMovementSearchContext) _UIFocusMapSearchInfo *focusMovementSearchInfo; // @synthesize focusMovementSearchInfo=_focusMovementSearchInfo;
@property(readonly, nonatomic, getter=_defaultItemSearchContext) _UIFocusMapSearchInfo *defaultItemSearchInfo; // @synthesize defaultItemSearchInfo=_defaultItemSearchInfo;
@property(nonatomic) struct CGRect minimumSearchArea; // @synthesize minimumSearchArea=_minimumSearchArea;
@property(readonly, nonatomic) _UIFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(readonly, nonatomic) _UIFocusGroupMap *focusGroupMap; // @synthesize focusGroupMap=_focusGroupMap;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(readonly, nonatomic) __weak id <_UIFocusRegionContainer> rootContainer; // @synthesize rootContainer=_rootContainer;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (void)diagnoseFocusabilityForItem:(id)arg1 report:(id)arg2;	// IMP=0x0000000000724050
- (void)_trackExternalSnapshot:(id)arg1;	// IMP=0x0000000000723fb0
- (void)_beginTrackingFocusMovementSearchInfoIfNecessary;	// IMP=0x0000000000723f76
- (void)_beginTrackingDefaultItemSearchInfoIfNecessary;	// IMP=0x0000000000723f3c
- (id)_stopTrackingSearches;	// IMP=0x0000000000723ea4
- (void)_beginTrackingSearches;	// IMP=0x0000000000723e1b
- (_Bool)verifyFocusabilityForItem:(id)arg1;	// IMP=0x00000000007238a5
- (id)_linearlySortedFocusItemsForItems:(id)arg1 groupFilter:(long long)arg2 itemStandInMap:(id)arg3;	// IMP=0x0000000000723565
- (id)_findAllDefaultFocusableRegionsWithSnapshotter:(id)arg1;	// IMP=0x00000000007232a5
- (id)_closestFocusableItemToPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 excludingItems:(id)arg3 distanceMeasuringUnitPoint:(struct CGPoint)arg4;	// IMP=0x0000000000722bd9
- (id)_allDefaultFocusableRegionsInContainer:(id)arg1 intersectingRegion:(id)arg2;	// IMP=0x0000000000722a91
- (id)_nextFocusedItemForLinearFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 withSnapshot:(id)arg4;	// IMP=0x0000000000722033
- (id)_nextFocusedItemForNonLinearFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 withSnapshot:(id)arg4;	// IMP=0x0000000000720646
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 withSnapshot:(id)arg4;	// IMP=0x000000000072054d
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inRegions:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x0000000000720470
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2;	// IMP=0x000000000071fd73
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1;	// IMP=0x000000000071f703
- (id)_inferredDefaultFocusItemInEnvironment:(id)arg1;	// IMP=0x000000000071e6fe
- (id)_allFocusableItemsInEnvironment:(id)arg1;	// IMP=0x000000000071e3e0
- (id)_defaultMapSnapshotter;	// IMP=0x000000000071e31b
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4 ignoresRootContainerClippingRect:(_Bool)arg5;	// IMP=0x000000000071e01b
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2;	// IMP=0x000000000071de97
- (id)init;	// IMP=0x000000000071de10

@end
