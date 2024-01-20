//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSTimer;

__attribute__((visibility("hidden")))
@interface _UIFocusTreeLock : NSObject
{
    NSMapTable *_lockedEnvironments;	// 8 = 0x8
    NSTimer *_validationTimer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000041a14b
@property(readonly, nonatomic) NSTimer *validationTimer; // @synthesize validationTimer=_validationTimer;
@property(readonly, nonatomic) NSMapTable *lockedEnvironments; // @synthesize lockedEnvironments=_lockedEnvironments;
- (id)description;	// IMP=0x000000000041a0b1
- (void)_validateLockedEnvironments;	// IMP=0x0000000000419f5d
- (_Bool)isEnvironmentLocked:(id)arg1;	// IMP=0x0000000000419cac
- (_Bool)unlockEnvironmentTree:(id)arg1;	// IMP=0x000000000041999d
- (void)lockEnvironmentTree:(id)arg1;	// IMP=0x00000000004197b6
- (id)init;	// IMP=0x00000000004195ec

@end
