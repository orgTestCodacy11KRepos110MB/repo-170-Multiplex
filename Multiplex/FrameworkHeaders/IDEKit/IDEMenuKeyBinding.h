//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEKeyBinding.h>

@class NSString;

@interface IDEMenuKeyBinding : IDEKeyBinding
{
    NSString *_commandIdentifier;
    NSString *_commandGroupIdentifier;
    NSString *_groupIdentifier;
    unsigned long long _defaultRawModifierMask;
}

+ (id)keyPathsForValuesAffectingCombinedIdentifier;
+ (id)combinedIdentifierWithCommandIdentifier:(id)arg1 group:(id)arg2 groupIdentifier:(id)arg3;
+ (long long)_defaultMaxNumberOfShortcuts;
@property unsigned long long defaultRawModifierMask; // @synthesize defaultRawModifierMask=_defaultRawModifierMask;
@property(copy) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy) NSString *commandGroupIdentifier; // @synthesize commandGroupIdentifier=_commandGroupIdentifier;
@property(copy) NSString *commandIdentifier; // @synthesize commandIdentifier=_commandIdentifier;
@property(readonly, copy) NSString *combinedIdentifier;
- (BOOL)isEqualToKeyBinding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

