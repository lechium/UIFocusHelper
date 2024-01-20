//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMapTable, NSTimer, UIScreen, _UIFocusEngineScrollableContainerOffsets;

__attribute__((visibility("hidden")))
@interface _UIFocusDisplayLinkScrollAnimator : NSObject
{
    UIScreen *_screen;	// 8 = 0x8
    _UIFocusEngineScrollableContainerOffsets *_singleScrollableContainerEntry;	// 16 = 0x10
    NSMapTable *_scrollableContainers;	// 24 = 0x18
    CADisplayLink *_displayLink;	// 32 = 0x20
    NSTimer *_timer;	// 40 = 0x28
    double _lastTimerFireDate;	// 48 = 0x30
    double _defaultConvergenceRate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000066c30c
- (struct CGPoint)_hyperJumpContentOffsetIfNecessaryForEntry:(id)arg1 currentOffset:(struct CGPoint)arg2;	// IMP=0x000000000066c14d
- (struct CGPoint)_applyAccelerationLimitToAcceleration:(struct CGPoint)arg1 currentOffset:(struct CGPoint)arg2 targetOffset:(struct CGPoint)arg3;	// IMP=0x000000000066c066
- (void)_processEntry:(id)arg1 timeDelta:(long long)arg2 completed:(id)arg3 cancelled:(id)arg4;	// IMP=0x000000000066b9fa
- (void)_removeEntry:(id)arg1;	// IMP=0x000000000066b61c
- (void)_commonHeartbeat:(double)arg1;	// IMP=0x000000000066b03f
- (void)_displayLinkHeartbeat:(id)arg1;	// IMP=0x000000000066af94
- (void)_timerHeartbeat:(id)arg1;	// IMP=0x000000000066af5b
- (_Bool)_shouldPushAndPopRunLoopModes;	// IMP=0x000000000066af47
- (void)_updateHeartbeatConfiguration;	// IMP=0x000000000066ac8c
- (void)_switchToTimerScrolling;	// IMP=0x000000000066abdb
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000066ab57
- (_Bool)_canCreateDisplayLink;	// IMP=0x000000000066aaf5
- (id)_createEntryForEnvironmentScrollableContainer:(id)arg1;	// IMP=0x000000000066a65f
- (id)_entryForEnvironmentScrollableContainer:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x000000000066a3da
- (id)_entryForScrollableContainer:(id)arg1;	// IMP=0x000000000066a317
- (struct CGPoint)velocityToScrollFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2;	// IMP=0x000000000066a29f
- (struct CGPoint)currentVelocityForScrollableContainer:(id)arg1;	// IMP=0x000000000066a1b8
- (struct CGPoint)targetContentOffsetForScrollableContainer:(id)arg1;	// IMP=0x000000000066a14c
- (_Bool)isAnimatingScrollableContainer:(id)arg1;	// IMP=0x000000000066a119
- (void)adjustTargetContentOffsetForScrollableContainer:(id)arg1 byDelta:(struct CGPoint)arg2;	// IMP=0x000000000066a087
- (void)cancelScrollingForScrollableContainer:(id)arg1;	// IMP=0x0000000000669fd5
- (void)setTargetContentOffset:(struct CGPoint)arg1 forEnvironmentScrollableContainer:(id)arg2 convergenceRate:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000669dbc
@property(nonatomic) double defaultConvergenceRate;
- (void)dealloc;	// IMP=0x0000000000669d1c
- (id)initWithScreen:(id)arg1;	// IMP=0x0000000000669c60

@end

