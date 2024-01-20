//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIFocusItem-Protocol.h>
#import <UIKitCore/_UIFocusGuideRegionDelegate-Protocol.h>
#import <UIKitCore/_UIFocusRegionContainer-Protocol.h>
#import <UIKitCore/_UILegacyFocusRegion-Protocol.h>

@class NSArray, NSString, UIFocusEffect, UIView;
@protocol UIFocusEnvironment, UIFocusItem, UIFocusItemContainer;

@interface UIFocusGuide <UIFocusItem, _UILegacyFocusRegion, _UIFocusRegionContainer, _UIFocusGuideRegionDelegate>
{
    _Bool _didSetPreferredFocusedEnvironments;	// 64 = 0x40
    _Bool _enabled;	// 65 = 0x41
    _Bool _automaticallyPreferOwningView;	// 66 = 0x42
    _Bool _automaticallyDisableWhenIntersectingFocus;	// 67 = 0x43
    NSArray *_preferredFocusEnvironments;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000005db146
@property(nonatomic, getter=_automaticallyDisableWhenIntersectingFocus, setter=_setAutomaticallyDisableWhenIntersectingFocus:) _Bool automaticallyDisableWhenIntersectingFocus; // @synthesize automaticallyDisableWhenIntersectingFocus=_automaticallyDisableWhenIntersectingFocus;
@property(nonatomic, getter=_automaticallyPreferOwningView, setter=_setAutomaticallyPreferOwningView:) _Bool automaticallyPreferOwningView; // @synthesize automaticallyPreferOwningView=_automaticallyPreferOwningView;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (_Bool)_uili_isFocusGuide;	// IMP=0x00000000005db0de
- (void)focusGuideRegion:(id)arg1 willParticipateAsDestinationRegionInFocusUpdate:(id)arg2;	// IMP=0x00000000005db076
- (id)focusGuideRegion:(id)arg1 preferredFocusEnvironmentsForMovementRequest:(id)arg2;	// IMP=0x00000000005db064
@property(readonly, nonatomic) id <UIFocusItem> focusItemForSorting;
- (_Bool)_ignoresSpeedBumpEdges;	// IMP=0x00000000005db053
- (double)_focusPriority;	// IMP=0x00000000005db04a
- (_Bool)_isUnclippable;	// IMP=0x00000000005db042
- (_Bool)_isUnoccludable;	// IMP=0x00000000005db03a
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00000000005db032
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x00000000005daec4
- (id)_preferredFocusRegionCoordinateSpace;	// IMP=0x00000000005dae4a
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000005dae44
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000005dae3c
- (void)updateFocusIfNeeded;	// IMP=0x00000000005dae36
- (void)setNeedsFocusUpdate;	// IMP=0x00000000005dae30
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (id)_focusDebugOverlayParentView;	// IMP=0x00000000005dad79
- (id)_focusRegionGuides;	// IMP=0x00000000005dad71
- (id)_focusRegionView;	// IMP=0x00000000005dad5f
- (_Bool)_isTransparentFocusRegion;	// IMP=0x00000000005dad57
- (id)_fulfillPromisedFocusRegion;	// IMP=0x00000000005dad4f
- (_Bool)_isPromiseFocusRegion;	// IMP=0x00000000005dad47
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x00000000005dad3f
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic) _Bool canBecomeFocused;
@property(readonly, nonatomic) struct CGRect frame;
- (_Bool)_legacy_isEligibleForFocusInteraction;	// IMP=0x00000000005dac88
- (struct CGRect)_focusRegionFrame;	// IMP=0x00000000005dab6c
- (id)_focusRegionFocusSystem;	// IMP=0x00000000005dab1c
- (void)_didUpdateFocusToPreferredFocusedView;	// IMP=0x00000000005dab16
@property(nonatomic) __weak UIView *preferredFocusedView;
@property(copy, nonatomic) NSArray *preferredFocusEnvironments; // @synthesize preferredFocusEnvironments=_preferredFocusEnvironments;
- (id)_encodablePreferredFocusEnvironments;	// IMP=0x00000000005da686
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005da591
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005da1bb
- (id)init;	// IMP=0x00000000005da167

// Remaining properties
@property(nonatomic) _Bool areChildrenFocused;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
@property(readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) long long focusGroupPriority;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransparentFocusItem;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly) Class superclass;

@end

