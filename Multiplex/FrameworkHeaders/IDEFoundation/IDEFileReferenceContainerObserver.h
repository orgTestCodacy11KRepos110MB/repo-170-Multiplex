//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTInvalidation-Protocol.h"

@class DVTObservingToken, DVTStackBacktrace, DVTTimeSlicedMainThreadWorkQueue, IDEContainer, IDEContainerQuery, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface IDEFileReferenceContainerObserver : NSObject <DVTInvalidation>
{
    NSMutableDictionary *_observedTypesConformanceByDataType;
    dispatch_block_t _skipReferencePredicateBlock;
    dispatch_block_t _updateHandlerBlock;
    dispatch_block_t _cleanUpBlock;
    NSMutableDictionary *_incrementalResults;
    NSMutableDictionary *_compositeResults;
    DVTObservingToken *_matchesKVOToken;
    IDEContainerQuery *_containerQuery;
    NSMutableSet *_incrementalRemovals;
    IDEContainer *_observedContainer;
    NSMutableSet *_observationBlocks;
    NSDictionary *_currentFilePaths;
    NSMutableSet *_currentFileReferences;
    NSObject *_ioQueue;
    NSString *_identifier;
    NSSet *_observedTypes;
    BOOL _hasProcessedFirstBatchOfContainerQueryMatches;
    DVTTimeSlicedMainThreadWorkQueue *_processWorkQueue;
    DVTTimeSlicedMainThreadWorkQueue *_postWorkQueue;
}

+ (void)initialize;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)unregisterObserver:(id)arg1;
+ (id)observerForContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3 updateHandlerBlock:(dispatch_block_t)arg4;
+ (id)observerForContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3 updateHandlerBlock:(dispatch_block_t)arg4 skipFileReferencePredicate:(dispatch_block_t)arg5;
+ (id)observerForContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3 updateHandlerBlock:(dispatch_block_t)arg4 cleanUpBlock:(dispatch_block_t)arg5 skipFileReferencePredicate:(dispatch_block_t)arg6;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSSet *observedTypes; // @synthesize observedTypes=_observedTypes;
@property(readonly) IDEContainer *observedContainer; // @synthesize observedContainer=_observedContainer;
- (void)processPendingResults;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_unregisterObservationsForFileReference:(id)arg1;
- (void)processResultForPath:(id)arg1 withLastKnownFileType:(id)arg2 updateType:(long long)arg3;
- (void)postResults;
- (void)postResultsRetrospectiveResultsToObserverBlock:(dispatch_block_t)arg1;
- (void)setResult:(id)arg1 forPath:(id)arg2;
- (void)matchedContainerItemsDidChange:(id)arg1;
- (void)invalidateProcessing;
- (void)invalidatePosting;
- (id)addObserver:(dispatch_block_t)arg1;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)initWithContainer:(id)arg1 types:(id)arg2 identifier:(id)arg3 updateHandlerBlock:(dispatch_block_t)arg4 cleanUpBlock:(dispatch_block_t)arg5 skipFileReferencePredicate:(dispatch_block_t)arg6;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

