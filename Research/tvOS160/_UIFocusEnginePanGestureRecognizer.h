//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPanGestureRecognizer.h"

@protocol _UIFocusEnginePanGestureRecognizerDelegate, _UIFocusEnginePanGestureTouchObserver;

__attribute__((visibility("hidden")))
@interface _UIFocusEnginePanGestureRecognizer : UIPanGestureRecognizer
{
    id <_UIFocusEnginePanGestureTouchObserver> _touchObserver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000606a94
@property(nonatomic) __weak id <_UIFocusEnginePanGestureTouchObserver> touchObserver; // @synthesize touchObserver=_touchObserver;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006069a8
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006068e9
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000060682a
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000006066db

// Remaining properties
@property(nonatomic) __weak id <_UIFocusEnginePanGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

