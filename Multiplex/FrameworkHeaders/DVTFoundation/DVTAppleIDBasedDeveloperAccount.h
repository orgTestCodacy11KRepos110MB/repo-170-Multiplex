//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <DVTFoundation/DVTDeveloperAccount.h>

@interface DVTAppleIDBasedDeveloperAccount : DVTDeveloperAccount
{
}

+ (id)accountWithCredentials:(id)arg1;
- (id)_sessionByLoggingIn:(id *)arg1;
- (id)propertyListRepresentation;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

