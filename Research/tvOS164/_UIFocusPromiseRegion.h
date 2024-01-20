//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIFocusRegion.h"

__attribute__((visibility("hidden")))
@interface _UIFocusPromiseRegion : _UIFocusRegion
{
    id _identifier;	// 8 = 0x8
    unsigned long long _fullfillmentCount;	// 16 = 0x10
    CDUnknownBlockType _contentFulfillmentHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000061de0b
@property(copy, nonatomic) CDUnknownBlockType contentFulfillmentHandler; // @synthesize contentFulfillmentHandler=_contentFulfillmentHandler;
- (id)_descriptionBuilder;	// IMP=0x000000000061dd78
- (id)_debugDrawingConfigurationWithDebugInfo:(id)arg1;	// IMP=0x000000000061dd2c
- (unsigned long long)_focusableBoundaries;	// IMP=0x000000000061dcf2
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x000000000061d93b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000061d862
- (id)_focusRegionWithAdjustedFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x000000000061d7b7
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2 identifier:(id)arg3;	// IMP=0x000000000061d72e
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x000000000061d71a

@end
