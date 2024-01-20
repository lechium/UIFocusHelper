//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIFocusStateObserver : NSObject
{
    NSMapTable *_observers;	// 8 = 0x8
    struct {
        unsigned int wasActive:1;
    } _flags;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000667c37
- (id)description;	// IMP=0x0000000000667be7
- (id)descriptionBuilder;	// IMP=0x0000000000667b17
- (void)notifyObserversIfNecessary;	// IMP=0x00000000006679cb
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000667907
- (id)addObserver:(CDUnknownBlockType)arg1;	// IMP=0x000000000066780d
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)init;	// IMP=0x000000000066770a

@end

