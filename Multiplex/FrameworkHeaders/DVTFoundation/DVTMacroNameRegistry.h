//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <DVTFoundation/DVTRegistry.h>

@interface DVTMacroNameRegistry : DVTRegistry
{
    BOOL _defaultIsListType;
}

+ (void)initialize;
@property(readonly) BOOL defaultIsListType; // @synthesize defaultIsListType=_defaultIsListType;
- (BOOL)macroIsListType:(id)arg1;
- (void)registerMacroName:(id)arg1 isListType:(BOOL)arg2;
- (id)initWithDebugName:(id)arg1 defaultIsListType:(BOOL)arg2;
- (id)initWithDebugName:(id)arg1;
- (id)init;

@end

