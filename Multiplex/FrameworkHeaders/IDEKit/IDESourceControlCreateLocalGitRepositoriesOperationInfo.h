//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDESourceControlOperationInfo.h>

@class NSArray;

@interface IDESourceControlCreateLocalGitRepositoriesOperationInfo : IDESourceControlOperationInfo
{
    NSArray *_repositoryRoots;
}

@property(retain) NSArray *repositoryRoots; // @synthesize repositoryRoots=_repositoryRoots;
- (void)primitiveInvalidate;
- (id)processInfoWithProgressBlock:(dispatch_block_t)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(dispatch_block_t)arg3;

@end

