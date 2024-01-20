//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusEnginePanGestureTouchObserver-Protocol.h>

@class NSMapTable, NSString, NSTimer, UIScrollView, _UIFocusEnginePanGestureRecognizer, _UIFocusFastScrollingTouchSequence, _UIRotaryGestureRecognizer;
@protocol _UIFocusFastScrollingRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingRecognizer : NSObject <_UIFocusEnginePanGestureTouchObserver>
{
    _UIFocusEnginePanGestureRecognizer *_panGesture;	// 8 = 0x8
    _UIRotaryGestureRecognizer *_rotaryGesture;	// 16 = 0x10
    _UIFocusFastScrollingTouchSequence *_currentTouch;	// 24 = 0x18
    NSMapTable *_swipeSequences;	// 32 = 0x20
    NSTimer *_swipeIntervalTimer;	// 40 = 0x28
    UIScrollView *_previewingScrollView;	// 48 = 0x30
    NSTimer *_previewingTouchTimer;	// 56 = 0x38
    unsigned long long _spatialFocusUpdateCount;	// 64 = 0x40
    _Bool _persistFastScrollingPreviewThroughReset;	// 72 = 0x48
    _Bool _enabled;	// 73 = 0x49
    id <_UIFocusFastScrollingRecognizerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000006248a6
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <_UIFocusFastScrollingRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)focusEnginePanGesture:(id)arg1 touchCancelledAtDigitizerLocation:(struct CGPoint)arg2;	// IMP=0x0000000000624829
- (void)focusEnginePanGesture:(id)arg1 touchEndedAtDigitizerLocation:(struct CGPoint)arg2;	// IMP=0x00000000006247dc
- (void)focusEnginePanGesture:(id)arg1 touchMovedToDigitizerLocation:(struct CGPoint)arg2;	// IMP=0x0000000000624773
- (void)focusEnginePanGesture:(id)arg1 touchBeganAtDigitizerLocation:(struct CGPoint)arg2;	// IMP=0x000000000062470a
- (void)_deactivatePreviewingScrollViewIfNecessary;	// IMP=0x00000000006246a2
- (void)_activatePreviewingScrollViewForScrollingStyle:(long long)arg1 emphasisAnimation:(_Bool)arg2 overrideIndexDisplayMode:(_Bool)arg3;	// IMP=0x00000000006245e7
- (void)_activatePreviewingScrollViewForEdgeGesture;	// IMP=0x00000000006245cb
- (void)_activatePreviewingScrollViewForEdgeGestureAfterDelay;	// IMP=0x0000000000624569
- (void)_notifyDelegateWithScrollView:(id)arg1 scrollingStyle:(long long)arg2 heading:(unsigned long long)arg3;	// IMP=0x0000000000624455
- (_Bool)_scrollViewIsEligibleForFastScrolling:(id)arg1 alongHeading:(unsigned long long)arg2 withScrollingStyle:(long long)arg3;	// IMP=0x00000000006242a6
- (id)_scrollViewsContainingCurrentlyFocusedItem;	// IMP=0x0000000000623f79
- (_Bool)_attemptToImmediatelyRecognizeEdgeGesture;	// IMP=0x0000000000623dad
- (id)_deepestEligibleScrollViewContainingFocusedItem:(unsigned long long)arg1 withScrollingStyle:(long long)arg2;	// IMP=0x0000000000623c15
- (_Bool)_canFastScrollWithEdgeSwipe;	// IMP=0x0000000000623bad
- (_Bool)_swipeSequenceCanBeginFastScrolling:(id)arg1;	// IMP=0x0000000000623b5d
- (void)_updateActiveSwipeSequencesForScrollViews:(id)arg1;	// IMP=0x0000000000623747
- (unsigned long long)_bestHeadingForAccumulator:(struct CGVector)arg1;	// IMP=0x00000000006235e6
- (void)_swipeIntervalElapsed:(id)arg1;	// IMP=0x00000000006235d4
- (void)_stopSwipeIntervalTimer;	// IMP=0x00000000006235a3
- (void)_startSwipeIntervalTimer;	// IMP=0x00000000006234cd
- (void)_swipeOccuredAlongHeading:(unsigned long long)arg1;	// IMP=0x0000000000622d62
- (void)_touchSequenceDidEnd:(id)arg1;	// IMP=0x0000000000622bab
- (void)reset;	// IMP=0x00000000006229cc
- (void)_handlePanGesture:(id)arg1;	// IMP=0x00000000006225ad
- (_Bool)attemptToImmediatelyRecognizeRotaryGesture;	// IMP=0x0000000000622480
- (_Bool)canImmediatelyRecognizeRotaryGesture;	// IMP=0x0000000000622443
- (void)deactivateRotaryGesturePreviewingScrollViewIfNecessary;	// IMP=0x000000000062242d
- (void)activateRotaryGesturePreviewingScrollViewWithEmphasisAnimation:(_Bool)arg1;	// IMP=0x000000000062240a
- (void)pageButtonPressWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;	// IMP=0x000000000062239a
- (void)joystickMovementWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;	// IMP=0x000000000062231b
- (void)directionalPressWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;	// IMP=0x000000000062229c
- (void)_focusDidUpate:(id)arg1;	// IMP=0x0000000000621f56
- (void)dealloc;	// IMP=0x0000000000621ea6
- (id)initWithPanGesture:(id)arg1 rotaryGesture:(id)arg2;	// IMP=0x0000000000621e47
- (id)initWithPanGesture:(id)arg1;	// IMP=0x0000000000621d4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

