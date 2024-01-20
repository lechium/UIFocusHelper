//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView;
@protocol _UIFocusCastingControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusCastingController : NSObject
{
    _Bool _isRememberingEntryPoint;	// 8 = 0x8
    id <_UIFocusCastingControllerDelegate> _delegate;	// 16 = 0x10
    double _entryPointMemorizationTimeout;	// 24 = 0x18
    unsigned long long _entryPointAxis;	// 32 = 0x20
    UIView *_focusMovementIndicator;	// 40 = 0x28
    UIView *_focusEntryIndicator;	// 48 = 0x30
    UIView *_focusCastingIndicator;	// 56 = 0x38
    struct CGPoint _screenEntryPoint;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000ba53e2
@property(retain, nonatomic) UIView *focusCastingIndicator; // @synthesize focusCastingIndicator=_focusCastingIndicator;
@property(retain, nonatomic) UIView *focusEntryIndicator; // @synthesize focusEntryIndicator=_focusEntryIndicator;
@property(retain, nonatomic) UIView *focusMovementIndicator; // @synthesize focusMovementIndicator=_focusMovementIndicator;
@property(nonatomic) _Bool isRememberingEntryPoint; // @synthesize isRememberingEntryPoint=_isRememberingEntryPoint;
@property(nonatomic) unsigned long long entryPointAxis; // @synthesize entryPointAxis=_entryPointAxis;
@property(nonatomic) struct CGPoint screenEntryPoint; // @synthesize screenEntryPoint=_screenEntryPoint;
@property(nonatomic) double entryPointMemorizationTimeout; // @synthesize entryPointMemorizationTimeout=_entryPointMemorizationTimeout;
@property(nonatomic) __weak id <_UIFocusCastingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_destroyFocusMovementIndicator;	// IMP=0x0000000000ba51b7
- (void)_positionFocusMovementIndicators;	// IMP=0x0000000000ba4c60
- (void)_createFocusMovementIndicator;	// IMP=0x0000000000ba4667
- (void)_updateFocusMovementIndicatorDisplay;	// IMP=0x0000000000ba4639
- (void)focusEffectsController:(id)arg1 updateMovementDirection:(struct CGVector)arg2;	// IMP=0x0000000000ba4627
- (id)_focusEffectsControllerForFocusedItem;	// IMP=0x0000000000ba4561
- (struct CGPoint)_movementPointInNormalizedFrame:(struct CGRect)arg1;	// IMP=0x0000000000ba44d2
- (struct CGPoint)_entryPointInNormalizedFrame:(struct CGRect)arg1 forHeading:(unsigned long long)arg2;	// IMP=0x0000000000ba43aa
- (void)forgetEntryPoint;	// IMP=0x0000000000ba42d0
- (void)_startRememberingEntryPoint;	// IMP=0x0000000000ba426a
- (void)_stopRememberingEntryPoint;	// IMP=0x0000000000ba4225
- (struct CGPoint)_castingPointInNormalizedFrame:(struct CGRect)arg1 forHeading:(unsigned long long)arg2;	// IMP=0x0000000000ba41dc
- (unsigned long long)_axisForHeading:(unsigned long long)arg1;	// IMP=0x0000000000ba41c2
- (void)_updateFocusItemFromNormalizedFrame:(struct CGRect)arg1 toNormalizedFrame:(struct CGRect)arg2 withHeading:(unsigned long long)arg3;	// IMP=0x0000000000ba3e05
- (struct CGRect)_castingFrameForFocusedNormalizedFrame:(struct CGRect)arg1 heading:(unsigned long long)arg2;	// IMP=0x0000000000ba3b92
- (struct CGRect)castingFrameForFocusedItem:(id)arg1 heading:(unsigned long long)arg2 inCoordinateSpace:(id)arg3;	// IMP=0x0000000000ba3a5e
- (void)updateFocusCastingWithContext:(id)arg1;	// IMP=0x0000000000ba382b
- (void)teardown;	// IMP=0x0000000000ba3819
- (id)init;	// IMP=0x0000000000ba37c0

@end

