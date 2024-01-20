//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIFocusEventRecognizer;

__attribute__((visibility("hidden")))
@interface _UIFocusEngineDelayedPressAction : NSObject
{
    _UIFocusEventRecognizer *_sender;	// 8 = 0x8
    long long _pressType;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
}

+ (void)sendDelayedPressWithType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3;	// IMP=0x00000000005d7fc8
- (void).cxx_destruct;	// IMP=0x00000000005d842f
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long pressType; // @synthesize pressType=_pressType;
@property(readonly, nonatomic) __weak _UIFocusEventRecognizer *sender; // @synthesize sender=_sender;
- (void)_sendPressEvent;	// IMP=0x00000000005d80ba
- (id)_initWithPressType:(long long)arg1 timestamp:(double)arg2 sender:(id)arg3;	// IMP=0x00000000005d7ecf

@end

