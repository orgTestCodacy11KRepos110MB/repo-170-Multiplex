//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEFoundation/IDEPlaygroundCommon.h>

@class IDEPlaygroundPageSharedContext, IDEPlaygroundSharedContext;

@interface IDEPlaygroundPage : IDEPlaygroundCommon
{
    IDEPlaygroundSharedContext *_playgroundContext;
}

+ (BOOL)isSourcesDirectorySubPath:(id)arg1;
+ (id)containerTypeDisplayName;
+ (id)containerFileDataType;
- (id)auxiliarySourceFrameworkDependencies;
- (id)computedChildItemSubpathsFixed;
- (id)context;
@property(readonly, nonatomic) IDEPlaygroundPageSharedContext *pageContext;
- (id)playgroundContext;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 options:(id)arg4 error:(id *)arg5;

@end

