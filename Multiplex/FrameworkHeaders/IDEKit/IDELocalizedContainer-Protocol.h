//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "DVTModelObject-Protocol.h"

@class DVTLocale, NSArray, NSString;

@protocol IDELocalizedContainer <DVTModelObject>
- (DVTLocale *)developmentRegion;
- (NSArray *)localizations;
- (NSString *)name;
@end

