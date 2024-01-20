//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIFocusEnvironmentScrollableContainerTuple, _UIFocusItemInfo, _UIFocusMovementInfo;

__attribute__((visibility("hidden")))
@interface _UIFocusScrollRequest : NSObject
{
    unsigned long long _scrollOffsetResolver;	// 8 = 0x8
    _UIFocusItemInfo *_focusItemInfo;	// 16 = 0x10
    _UIFocusMovementInfo *_focusMovement;	// 24 = 0x18
    _UIFocusEnvironmentScrollableContainerTuple *_environmentScrollableContainer;	// 32 = 0x20
    struct CGPoint _originatingContentOffset;	// 40 = 0x28
    struct CGPoint _targetContentOffset;	// 56 = 0x38
    struct CGRect _focusItemFrame;	// 72 = 0x48
    struct CGRect _originatingBounds;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000010619a
@property(readonly, nonatomic) _UIFocusEnvironmentScrollableContainerTuple *environmentScrollableContainer; // @synthesize environmentScrollableContainer=_environmentScrollableContainer;
@property(readonly, nonatomic) _UIFocusMovementInfo *focusMovement; // @synthesize focusMovement=_focusMovement;
@property(readonly, nonatomic) _UIFocusItemInfo *focusItemInfo; // @synthesize focusItemInfo=_focusItemInfo;
@property(readonly, nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(readonly, nonatomic) struct CGPoint originatingContentOffset; // @synthesize originatingContentOffset=_originatingContentOffset;
@property(readonly, nonatomic) struct CGRect originatingBounds; // @synthesize originatingBounds=_originatingBounds;
@property(readonly, nonatomic) unsigned long long scrollOffsetResolver; // @synthesize scrollOffsetResolver=_scrollOffsetResolver;
- (id)description;	// IMP=0x0000000000105ced
- (void)reloadFocusItemInfo;	// IMP=0x0000000000105c38
@property(readonly, nonatomic) struct CGRect focusItemFrame; // @synthesize focusItemFrame=_focusItemFrame;
- (struct CGPoint)resolveTargetContentOffsetUsingScrollOffsetResolverClamped:(_Bool)arg1;	// IMP=0x0000000000105951
- (id)initWithEnvironmentScrollableContainer:(id)arg1 focusItemFrame:(struct CGRect)arg2 targetContentOffsetValue:(id)arg3;	// IMP=0x0000000000105937
- (id)initWithEnvironmentScrollableContainer:(id)arg1 focusItemInfo:(id)arg2 targetContentOffsetValue:(id)arg3;	// IMP=0x00000000001058ff
- (id)initWithEnvironmentScrollableContainer:(id)arg1 focusItemInfo:(id)arg2 focusUpdateContext:(id)arg3;	// IMP=0x000000000010584f
- (id)initWithBaseRequest:(id)arg1 environmentScrollableContainer:(id)arg2;	// IMP=0x000000000010562e
- (id)initWithEnvironmentScrollableContainer:(id)arg1 focusItemInfo:(id)arg2 focusMovement:(id)arg3 focusItemFrame:(struct CGRect)arg4 targetContentOffsetValue:(id)arg5;	// IMP=0x0000000000104f93

@end

