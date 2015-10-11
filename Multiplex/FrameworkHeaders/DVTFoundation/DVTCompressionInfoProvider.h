//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@interface DVTCompressionInfoProvider : NSObject
{
    dispatch_block_t _debugInfoForIndexQueryBlock;
    dispatch_block_t _swiftGeneratedFunctionForIndexQueryBlock;
    dispatch_block_t _libraryNameForIndexQueryBlock;
}

@property(readonly) dispatch_block_t libraryNameForIndexQueryBlock; // @synthesize libraryNameForIndexQueryBlock=_libraryNameForIndexQueryBlock;
@property(copy) dispatch_block_t swiftGeneratedFunctionForIndexQueryBlock; // @synthesize swiftGeneratedFunctionForIndexQueryBlock=_swiftGeneratedFunctionForIndexQueryBlock;
@property(readonly) dispatch_block_t debugInfoForIndexQueryBlock; // @synthesize debugInfoForIndexQueryBlock=_debugInfoForIndexQueryBlock;
- (id)initWithDebugInfoQueryBlock:(dispatch_block_t)arg1 libraryNameQueryBlock:(dispatch_block_t)arg2;

@end

