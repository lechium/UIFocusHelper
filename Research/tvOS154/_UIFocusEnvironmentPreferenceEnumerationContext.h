//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusEnvironmentPreferenceEnumerationContext-Protocol.h>

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSString, UIFocusSystem, _UIDebugLogReport;
@protocol UIFocusEnvironment, _UIFocusEnvironmentPreferenceEnumerationContextDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusEnvironmentPreferenceEnumerationContext : NSObject <_UIFocusEnvironmentPreferenceEnumerationContext>
{
    UIFocusSystem *_focusSystem;	// 8 = 0x8
    id <UIFocusEnvironment> _preferredSubtree;	// 16 = 0x10
    NSMutableArray *_visitedEnvironmentStack;	// 24 = 0x18
    id <UIFocusEnvironment> _lastPrimaryPreferredEnvironment;	// 32 = 0x20
    NSArray *_cachedPreferredEnvironments;	// 40 = 0x28
    NSHashTable *_allVisitedEnvironments;	// 48 = 0x30
    _Bool _hasResolvedPreferredFocusEnvironments;	// 56 = 0x38
    _Bool _hasNeverPoppedInPreferredSubtree;	// 57 = 0x39
    id <UIFocusEnvironment> _preferredSubtreeEntryPoint;	// 64 = 0x40
    NSMapTable *_preferredEnvironmentsMap;	// 72 = 0x48
    _Bool _cachedPrefersNothingFocused;	// 80 = 0x50
    id <UIFocusEnvironment> _environment;	// 88 = 0x58
    id <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> _delegate;	// 96 = 0x60
    _UIDebugLogReport *_debugReport;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000005bf53f
@property(retain, nonatomic) _UIDebugLogReport *debugReport; // @synthesize debugReport=_debugReport;
@property(nonatomic) __weak id <_UIFocusEnvironmentPreferenceEnumerationContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <UIFocusEnvironment> environment; // @synthesize environment=_environment;
- (void)_reportInferredPreferredFocusEnvironment:(id)arg1;	// IMP=0x00000000005bf41b
- (void)popEnvironment;	// IMP=0x00000000005bf34b
- (void)pushEnvironment:(id)arg1;	// IMP=0x00000000005bf1f5
- (_Bool)_isAllowedToPreferEnvironment:(id)arg1;	// IMP=0x00000000005bf1c7
- (id)_inferPreferencesForEnvironment:(id)arg1;	// IMP=0x00000000005bf027
- (void)_resolvePreferredFocusEnvironments;	// IMP=0x00000000005bea3b
- (void)_invalidatePreferredEnvironments;	// IMP=0x00000000005bea11
@property(readonly, nonatomic) _Bool prefersNothingFocused; // @synthesize prefersNothingFocused=_cachedPrefersNothingFocused;
@property(readonly, nonatomic) NSArray *preferredEnvironments;
@property(readonly, nonatomic, getter=isInPreferredSubtree) _Bool inPreferredSubtree;
@property(readonly, nonatomic) id <UIFocusEnvironment> preferringEnvironment;
@property(readonly, nonatomic, getter=isPreferredByItself) _Bool preferredByItself;
@property(readonly, nonatomic) _Bool isLeafPreference;
@property(readonly, nonatomic) _Bool isPrimaryPreference;
- (id)initWithFocusEnvironment:(id)arg1 enumerationMode:(long long)arg2;	// IMP=0x00000000005be3b1
- (id)init;	// IMP=0x00000000005be32a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
