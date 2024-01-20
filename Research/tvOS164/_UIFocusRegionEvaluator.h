//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusRegionEvaluator : NSObject
{
}

+ (id)regionsByOccludingRegions:(id)arg1 beneathRegions:(id)arg2 inSnapshot:(id)arg3;	// IMP=0x0080000000ef74c2
+ (id)regionsByEvaluatingOcclusionsForRegions:(id)arg1 inSnapshot:(id)arg2;	// IMP=0x0080000000ef7331
+ (id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)arg1 occludingRegions:(id)arg2 baseRegionsCanOccludeEachOther:(_Bool)arg3 inSnapshot:(id)arg4;	// IMP=0x0080000000ef6c19
+ (id)_visibleSubregionsWhenRegion:(id)arg1 occludedByRegion:(id)arg2 inSnapshot:(id)arg3;	// IMP=0x0080000000ef611e
+ (struct CGRect)frameForRegion:(id)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0080000000ef5f31
+ (id)subregionFromRegion:(id)arg1 withSnapshotFrame:(struct CGRect)arg2 inSnapshot:(id)arg3;	// IMP=0x0080000000ef5d7a

@end
