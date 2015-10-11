//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDEBatchFindQuery, IDENavigableItemAsyncFilteringCoordinator, NSString;

@interface IDEBatchFindResultUIState : NSObject <DVTInvalidation>
{
    IDENavigableItemAsyncFilteringCoordinator *_navigableItemCoordinator;
    IDEBatchFindQuery *_query;
    long long _resultGroupIndex;
    long long _resultIndex;
}

+ (void)initialize;
@property long long resultIndex; // @synthesize resultIndex=_resultIndex;
@property long long resultGroupIndex; // @synthesize resultGroupIndex=_resultGroupIndex;
@property(retain) IDEBatchFindQuery *query; // @synthesize query=_query;
@property(readonly) IDENavigableItemAsyncFilteringCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
- (void)primitiveInvalidate;
- (id)initWithQuery:(id)arg1 navigableItemCoordinator:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

