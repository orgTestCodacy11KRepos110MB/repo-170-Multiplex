//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEFoundation/IDELocalizationWorkContext.h>

#import "IDELocalizationWorkProvider-Protocol.h"

@class DVTFilePath, NSDictionary;

@interface IDELocalizationWorkReadStrings : IDELocalizationWorkContext <IDELocalizationWorkProvider>
{
    DVTFilePath *_path;
    NSDictionary *_strings;
    NSDictionary *_comments;
}

@property(retain) NSDictionary *comments; // @synthesize comments=_comments;
@property(retain) NSDictionary *strings; // @synthesize strings=_strings;
@property(retain) DVTFilePath *path; // @synthesize path=_path;
- (id)work;

@end

