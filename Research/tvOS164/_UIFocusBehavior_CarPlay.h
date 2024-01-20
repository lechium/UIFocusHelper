//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusBehavior_CarPlay : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0010000000f184ce
- (_Bool)supportsLinearMovementDebugOverlay;	// IMP=0x0000000000f187a4
- (_Bool)shouldCallAccessibilityOverrides;	// IMP=0x0000000000f1879c
- (_Bool)tabBasedMovementLoops;	// IMP=0x0000000000f18794
- (long long)skipKeyCommandsForKeyEvents;	// IMP=0x0000000000f1878c
- (long long)deliverKeyEventsToFocusEngine;	// IMP=0x0000000000f18784
- (_Bool)shouldSupressIndirectMovementOnSelect;	// IMP=0x0000000000f1877c
- (_Bool)shouldEnableFocusOnSelect;	// IMP=0x0000000000f18774
- (long long)indirectMovementPriority;	// IMP=0x0000000000f1876c
- (_Bool)supportsTabKey;	// IMP=0x0000000000f18764
- (long long)pageButtonScrollingStyle;	// IMP=0x0000000000f1875c
- (_Bool)supportsArrowKeys;	// IMP=0x0000000000f18754
- (_Bool)supportsGameControllers;	// IMP=0x0000000000f1874c
- (_Bool)shouldConvertIndirectTapsIntoArrowKeys;	// IMP=0x0000000000f18744
- (_Bool)supportsIndirectRotaryMovement;	// IMP=0x0000000000f1873c
- (_Bool)supportsIndirectPanningMovement;	// IMP=0x0000000000f18734
- (_Bool)showsFocusRingForItem:(id)arg1;	// IMP=0x0000000000f1872c
- (_Bool)supportsParentFocusRings;	// IMP=0x0000000000f18724
- (long long)focusRingVisibility;	// IMP=0x0000000000f1871c
- (long long)buttonSelectionMode;	// IMP=0x0000000000f18711
- (_Bool)refinesIndexBarTargetContentOffset;	// IMP=0x0000000000f18709
- (_Bool)isContainerEligibleForFocusUpdateSearchRoot:(id)arg1;	// IMP=0x0000000000f186f4
- (double)stabilizedLinearFocusMovementTimeout;	// IMP=0x0000000000f186e6
- (_Bool)wantsTreeLocking;	// IMP=0x0000000000f186de
- (_Bool)throttlesProgrammaticFocusUpdates;	// IMP=0x0000000000f186d6
- (long long)focusCastingMode;	// IMP=0x0000000000f186ce
- (_Bool)supportsClipToBounds;	// IMP=0x0000000000f186ba
- (_Bool)supportViewTransparencyAndMultipleWindows;	// IMP=0x0000000000f186b2
- (_Bool)treatFirstAndLastHeadingsAsGlobal;	// IMP=0x0000000000f186aa
- (_Bool)defaultValueForSelectionFollowsFocusInTableView:(id)arg1;	// IMP=0x0000000000f186a2
- (_Bool)defaultValueForSelectionFollowsFocusInCollectionView:(id)arg1;	// IMP=0x0000000000f1869a
- (_Bool)preventsCellFocusabilityWhileEditing;	// IMP=0x0000000000f18692
- (long long)cellFocusability;	// IMP=0x0000000000f1868a
- (_Bool)shouldUseAccessibilityCompareForItemGeometry;	// IMP=0x0000000000f18682
- (long long)scrollingMode;	// IMP=0x0000000000f18677
- (_Bool)useDifferentialScrollTrigger;	// IMP=0x0000000000f1866f
- (_Bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;	// IMP=0x0000000000f18667
- (unsigned long long)focusGroupContainmentBehavior;	// IMP=0x0000000000f1865f
- (unsigned long long)focusGroupMovementBehavior;	// IMP=0x0000000000f18657
- (_Bool)includesContentScrollViewInPreferredFocusEnvironments;	// IMP=0x0000000000f1864f
- (_Bool)searchBarTextFieldCanBecomeFocused;	// IMP=0x0000000000f18647
- (_Bool)tabBarButtonCanBecomeFocused;	// IMP=0x0000000000f1863f
- (_Bool)tabBarCanBecomeFocused;	// IMP=0x0000000000f18637
- (_Bool)textViewCanBecomeFocused:(id)arg1;	// IMP=0x0000000000f18622
- (_Bool)controlCanBecomeFocused:(id)arg1;	// IMP=0x0000000000f1861a
- (_Bool)ignoresKeyWindowStatusWhenRestoringFocus;	// IMP=0x0000000000f18612
- (long long)focusDeferral;	// IMP=0x0000000000f1860a
- (_Bool)syncsFocusAndResponder;	// IMP=0x0000000000f18602
- (long long)requiredInputDevices;	// IMP=0x0000000000f185fa
- (_Bool)honorsFocusSystemEnabledInfoPlistKey;	// IMP=0x0000000000f185f2
- (_Bool)wantsFocusSystemForScene:(id)arg1;	// IMP=0x0000000000f184fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
