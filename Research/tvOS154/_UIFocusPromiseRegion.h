//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIFocusPromiseRegion
{
    id _identifier;	// 8 = 0x8
    unsigned long long _fullfillmentCount;	// 16 = 0x10
    CDUnknownBlockType _contentFulfillmentHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005dced1
@property(copy, nonatomic) CDUnknownBlockType contentFulfillmentHandler; // @synthesize contentFulfillmentHandler=_contentFulfillmentHandler;
- (id)_descriptionBuilder;	// IMP=0x00000000005dce3e
- (id)_debugDrawingConfigurationWithDebugInfo:(id)arg1;	// IMP=0x00000000005dcdf2
- (unsigned long long)_focusableBoundaries;	// IMP=0x00000000005dcdb8
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x00000000005dc9ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005dc926
- (id)_focusRegionWithAdjustedFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x00000000005dc87b
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2 identifier:(id)arg3;	// IMP=0x00000000005dc7f2
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x00000000005dc7de

@end

