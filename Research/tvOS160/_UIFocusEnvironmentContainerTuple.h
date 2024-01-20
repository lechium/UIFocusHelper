//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusEnvironmentContainerTuple : NSObject
{
    _Bool _isScrollableContainer;	// 8 = 0x8
    id <UIFocusEnvironment> _owningEnvironment;	// 16 = 0x10
    id <UIFocusItemContainer> _itemContainer;	// 24 = 0x18
}

+ (id)tupleWithRequiredContainerFromEnvironment:(id)arg1;	// IMP=0x00600000005f2ff2
+ (id)tupleWithOwningEnvironment:(id)arg1 itemContainer:(id)arg2;	// IMP=0x00600000005f2f86
- (void).cxx_destruct;	// IMP=0x00000000005f361d
@property(readonly, nonatomic) _Bool isScrollableContainer; // @synthesize isScrollableContainer=_isScrollableContainer;
@property(readonly, nonatomic) id <UIFocusItemContainer> itemContainer; // @synthesize itemContainer=_itemContainer;
@property(readonly, nonatomic) id <UIFocusEnvironment> owningEnvironment; // @synthesize owningEnvironment=_owningEnvironment;
- (id)description;	// IMP=0x00000000005f3583
- (unsigned long long)hash;	// IMP=0x00000000005f34f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005f306f
- (id)initWithOwningEnvironment:(id)arg1 itemContainer:(id)arg2;	// IMP=0x00000000005f2d55

@end

