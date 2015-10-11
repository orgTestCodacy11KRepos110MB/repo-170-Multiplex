//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTInvalidation-Protocol.h"

@class DVTSourceControlWorkingCopy, DVTStackBacktrace, IDESourceControlWorkingTree, IDEWorkspace, NSArray, NSOperationQueue, NSString, NSWindow;

@interface IDESourceControlOperationInfo : NSObject <DVTInvalidation>
{
    NSOperationQueue *_queue;
    IDESourceControlWorkingTree *_workingTree;
    IDEWorkspace *_workspace;
    NSArray *_itemsToOperateOn;
    NSWindow *_window;
    DVTSourceControlWorkingCopy *_workingCopy;
    id  _currentCancellable;
}

+ (id)containerFileTypesBlacklistedFromOutlineViewCompression;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property(retain) id  currentCancellable; // @synthesize currentCancellable=_currentCancellable;
@property(retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
@property __weak NSWindow *window; // @synthesize window=_window;
@property(retain) NSArray *itemsToOperateOn; // @synthesize itemsToOperateOn=_itemsToOperateOn;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) IDESourceControlWorkingTree *workingTree; // @synthesize workingTree=_workingTree;
- (id)calculateContainersForItem:(id)arg1;
- (id)processInfoWithProgressBlock:(dispatch_block_t)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(dispatch_block_t)arg3;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

