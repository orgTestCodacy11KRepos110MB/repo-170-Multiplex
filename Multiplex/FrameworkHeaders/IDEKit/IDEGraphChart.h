//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class NSArray, NSColor, NSString;

@interface IDEGraphChart : NSObject
{
    NSString *_label;
    NSColor *_color;
    NSArray *_entries;
}

@property(copy) NSArray *entries; // @synthesize entries=_entries;
@property(retain) NSColor *color; // @synthesize color=_color;
@property(copy) NSString *label; // @synthesize label=_label;
- (void)clearValues;
- (void)flushEntriesToCount:(unsigned long long)arg1;
- (void)addValues:(id)arg1 startingAtIndex:(long long)arg2 userInfos:(id)arg3;
- (void)addValues:(id)arg1 startingAtIndex:(long long)arg2;
- (void)setValue:(id)arg1 forIndexedValue:(id)arg2 userInfo:(id)arg3;
- (void)setValue:(id)arg1 forIndexedValue:(id)arg2;
- (id)initWithLabel:(id)arg1 color:(id)arg2;

@end

