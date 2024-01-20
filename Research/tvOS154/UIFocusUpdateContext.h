//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIFocusGuide, UIImage, UIView, _UIDebugIssueReport, _UIDebugLogReport, _UIDynamicFocusGroupMap, _UIFocusEnvironmentScrollableContainerTuple, _UIFocusItemInfo, _UIFocusMapSearchInfo, _UIFocusMovementInfo;
@protocol UIFocusEnvironment, UIFocusItem, _UIFocusBehavior, _UIFocusUpdateRequesting;

@interface UIFocusUpdateContext : NSObject
{
    struct {
        unsigned int isValid:1;
        unsigned int hasValidated:1;
        unsigned int shouldUpdateDestinationItem:1;
        unsigned int sourceItemMayRemainFocused:1;
        unsigned int didResolveCommonAncestorEnvironment:1;
    } _flags;	// 8 = 0x8
    _Bool _deferredUpdate;	// 12 = 0xc
    _UIFocusItemInfo *_destinationItemInfo;	// 16 = 0x10
    id <UIFocusEnvironment> _commonAncestorEnvironment;	// 24 = 0x18
    NSString *_previouslyFocusedGroupIdentifier;	// 32 = 0x20
    NSString *_nextFocusedGroupIdentifier;	// 40 = 0x28
    UIImage *_regionMapSnapshotsVisualRepresentation;	// 48 = 0x30
    _UIDynamicFocusGroupMap *_focusGroupMap;	// 56 = 0x38
    id <_UIFocusBehavior> _focusBehavior;	// 64 = 0x40
    id <_UIFocusUpdateRequesting> _request;	// 72 = 0x48
    _UIFocusItemInfo *_sourceItemInfo;	// 80 = 0x50
    _UIFocusMovementInfo *_focusMovement;	// 88 = 0x58
    _UIFocusMapSearchInfo *_focusMapSearchInfo;	// 96 = 0x60
    id <UIFocusEnvironment> _initialDestinationEnvironment;	// 104 = 0x68
    _UIFocusEnvironmentScrollableContainerTuple *_commonEnvironmentScrollableContainer;	// 112 = 0x70
    double _destinationViewDistanceOffscreen;	// 120 = 0x78
    NSArray *_regionMapSnapshots;	// 128 = 0x80
    _UIDebugLogReport *_preferredFocusReport;	// 136 = 0x88
    _UIDebugIssueReport *_validationReport;	// 144 = 0x90
    UIFocusGuide *_focusedGuide;	// 152 = 0x98
}

+ (id)_defaultValidationReportFormatter;	// IMP=0x0000000000610293
- (void).cxx_destruct;	// IMP=0x0000000000610b00
@property(readonly, nonatomic, getter=_focusedGuide) __weak UIFocusGuide *focusedGuide; // @synthesize focusedGuide=_focusedGuide;
@property(retain, nonatomic, getter=_validationReport, setter=_setValidationReport:) _UIDebugIssueReport *validationReport; // @synthesize validationReport=_validationReport;
@property(retain, nonatomic, getter=_preferredFocusReport, setter=_setPreferredFocusReport:) _UIDebugLogReport *preferredFocusReport; // @synthesize preferredFocusReport=_preferredFocusReport;
@property(retain, nonatomic, getter=_regionMapSnapshots, setter=_setRegionMapSnapshots:) NSArray *regionMapSnapshots; // @synthesize regionMapSnapshots=_regionMapSnapshots;
@property(nonatomic, getter=_isDeferredUpdate, setter=_setDeferredUpdate:) _Bool deferredUpdate; // @synthesize deferredUpdate=_deferredUpdate;
@property(nonatomic, getter=_destinationViewDistanceOffscreen, setter=_setDestinationViewDistanceOffscreen:) double destinationViewDistanceOffscreen; // @synthesize destinationViewDistanceOffscreen=_destinationViewDistanceOffscreen;
@property(retain, nonatomic, getter=_commonEnvironmentScrollableContainer, setter=_setCommonEnvironmentScrollableContainer:) _UIFocusEnvironmentScrollableContainerTuple *commonEnvironmentScrollableContainer; // @synthesize commonEnvironmentScrollableContainer=_commonEnvironmentScrollableContainer;
@property(readonly, nonatomic, getter=_initialDestinationEnvironment) __weak id <UIFocusEnvironment> initialDestinationEnvironment; // @synthesize initialDestinationEnvironment=_initialDestinationEnvironment;
@property(retain, nonatomic, getter=_focusMapSearchInfo, setter=_setFocusMapSearchInfo:) _UIFocusMapSearchInfo *focusMapSearchInfo; // @synthesize focusMapSearchInfo=_focusMapSearchInfo;
@property(readonly, nonatomic, getter=_focusMovement) _UIFocusMovementInfo *focusMovement; // @synthesize focusMovement=_focusMovement;
@property(readonly, copy, nonatomic, getter=_sourceItemInfo) _UIFocusItemInfo *sourceItemInfo; // @synthesize sourceItemInfo=_sourceItemInfo;
@property(readonly, nonatomic, getter=_request) id <_UIFocusUpdateRequesting> request; // @synthesize request=_request;
@property(readonly, nonatomic) id <_UIFocusBehavior> focusBehavior; // @synthesize focusBehavior=_focusBehavior;
@property(retain, nonatomic, getter=_focusGroupMap, setter=_setFocusGroupMap:) _UIDynamicFocusGroupMap *focusGroupMap; // @synthesize focusGroupMap=_focusGroupMap;
- (id)description;	// IMP=0x000000000061085c
- (id)debugQuickLookObject;	// IMP=0x00000000006107dc
@property(readonly, nonatomic, getter=_regionMapSnapshotsVisualRepresentation) UIImage *regionMapSnapshotsVisualRepresentation; // @synthesize regionMapSnapshotsVisualRepresentation=_regionMapSnapshotsVisualRepresentation;
- (id)_focusMapSnapshotDebugInfoArray;	// IMP=0x00000000006103cb
- (id)_publicRegionMapSnapshots;	// IMP=0x000000000061032b
@property(readonly, nonatomic, getter=_groupFilter) long long groupFilter;
@property(readonly, nonatomic, getter=_nextFocusedGroupIdentifier) NSString *nextFocusedGroupIdentifier; // @synthesize nextFocusedGroupIdentifier=_nextFocusedGroupIdentifier;
@property(readonly, nonatomic, getter=_previouslyFocusedGroupIdentifier) NSString *previouslyFocusedGroupIdentifier; // @synthesize previouslyFocusedGroupIdentifier=_previouslyFocusedGroupIdentifier;
- (void)_updateWithFocusGroupMap:(id)arg1;	// IMP=0x000000000060fe93
- (void)_restoreRestrictedFocusMovementWithMovement:(id)arg1;	// IMP=0x000000000060fe82
- (void)_didUpdateFocus;	// IMP=0x000000000060fce6
- (void)_willUpdateFocusFromFocusedItem:(id)arg1;	// IMP=0x000000000060fc53
- (void)_setFocusedGuide:(id)arg1;	// IMP=0x000000000060fa6b
@property(readonly, nonatomic, getter=_focusVelocity) struct CGVector focusVelocity;
@property(readonly, nonatomic) unsigned long long focusHeading;
@property(readonly, nonatomic, getter=_commonAncestorEnvironment) __weak id <UIFocusEnvironment> commonAncestorEnvironment; // @synthesize commonAncestorEnvironment=_commonAncestorEnvironment;
- (void)_updateDestinationItemIfNeeded;	// IMP=0x000000000060f78c
- (void)_setInitialDestinationEnvironment:(id)arg1;	// IMP=0x000000000060f734
@property(readonly, nonatomic) __weak UIView *nextFocusedView;
@property(readonly, nonatomic) __weak UIView *previouslyFocusedView;
@property(readonly, copy, nonatomic, getter=_destinationItemInfo) _UIFocusItemInfo *destinationItemInfo; // @synthesize destinationItemInfo=_destinationItemInfo;
- (void)_setSourceItemInfo:(id)arg1;	// IMP=0x000000000060f5cb
@property(readonly, nonatomic) __weak id <UIFocusItem> nextFocusedItem;
@property(readonly, nonatomic) __weak id <UIFocusItem> previouslyFocusedItem;
- (_Bool)_validate;	// IMP=0x000000000060ecb4
- (_Bool)_isValidInFocusSystem:(id)arg1;	// IMP=0x000000000060ec20
- (void)_cacheFocusBehavior;	// IMP=0x000000000060eb98
- (id)_initWithContext:(id)arg1;	// IMP=0x000000000060e9eb
- (id)_initWithFocusMovementRequest:(id)arg1 nextFocusedItem:(id)arg2;	// IMP=0x000000000060e832
- (id)_initWithFocusUpdateRequest:(id)arg1;	// IMP=0x000000000060e654
- (id)init;	// IMP=0x000000000060e4cf

@end

