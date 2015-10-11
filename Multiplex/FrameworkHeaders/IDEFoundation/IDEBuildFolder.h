//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class IDEBuilder, NSString;

@interface IDEBuildFolder : NSObject
{
    NSString *_path;
    IDEBuilder *_currentBuilder;
}

+ (id)sharedBuildFolderWithPath:(id)arg1 error:(id *)arg2;
@property(retain) IDEBuilder *currentBuilder; // @synthesize currentBuilder=_currentBuilder;
@property(readonly) NSString *path; // @synthesize path=_path;
- (id)description;
- (void)unregisterCurrentBuilder:(id)arg1;
- (void)registerCurrentBuilder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1 error:(id *)arg2;

@end

