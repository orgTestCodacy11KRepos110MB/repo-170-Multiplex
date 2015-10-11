//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class NSMutableDictionary;

@interface IDEOpenQuicklyDataSource : NSObject
{
    NSMutableDictionary *_searchPathsToFlattenedContents;
    NSMutableDictionary *_searchPathsToObservers;
    long long _scanningOperationCount;
    long long contentMode;
}

+ (id)keyPathsForValuesAffectingScanning;
+ (void)THREAD_exploreURL:(id)arg1 mode:(long long)arg2 candidateMatchPath:(id)arg3 exploredURLs:(id)arg4 fileManager:(id)arg5 updateBlock:(dispatch_block_t)arg6;
+ (id)sharedUserAbsolutePathDataSource;
+ (id)sharedSDKHeaderDataSource;
@property long long scanningOperationCount; // @synthesize scanningOperationCount=_scanningOperationCount;
@property(readonly, getter=isScanning) BOOL scanning;
- (id)observeSearchPaths:(id)arg1 observeInitalValue:(BOOL)arg2 withObservationHandler:(dispatch_block_t)arg3;
- (id)matchesForResults:(id)arg1 inContext:(id)arg2;
- (id)flattenedContentsForSearchPath:(id)arg1;
- (void)addSearchPaths:(id)arg1;
- (void)notifyObserversOfSearchPath:(id)arg1 ofResults:(id)arg2;
- (void)explorePath:(id)arg1 updateBlock:(dispatch_block_t)arg2;
- (id)initWithContentMode:(long long)arg1;

@end

