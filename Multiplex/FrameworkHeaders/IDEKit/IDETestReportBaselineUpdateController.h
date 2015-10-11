//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class IDEWorkspace, IDEWorkspaceTabController, NSMutableArray;

@interface IDETestReportBaselineUpdateController : NSObject
{
    dispatch_block_t _completionBlock;
    NSMutableArray *_testRunsUpdateQueue;
    unsigned long long _countOfTestGroups;
    unsigned long long _countOfTestRuns;
    unsigned long long _countOfFinishedTestRuns;
    NSMutableArray *_groupsReadyToRunQueue;
    NSMutableArray *_updateErrors;
    BOOL _needsIndex;
    unsigned long long _baselineRecordBehavior;
    IDEWorkspace *_workspace;
    IDEWorkspaceTabController *_workspaceTabController;
}

@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)_updateBaselineRecordForTestRun:(id)arg1 perfMetric:(id)arg2 userBaselineOverride:(double)arg3 userRSTDOverride:(id)arg4 workspace:(id)arg5 workspaceWindow:(id)arg6 needsIndex:(BOOL)arg7;
- (void)updateBaselineForPerfMetric:(id)arg1 inTestRun:(id)arg2 newBaseline:(double)arg3 newAllowedSTD:(id)arg4 needsIndex:(BOOL)arg5;
- (void)updateBaselinesInTestRuns:(id)arg1;
- (void)applyBaselineFinishedForTestRun:(id)arg1 error:(id)arg2;
- (void)addGroupToQueue:(id)arg1;
- (void)updateBaseLinesForTestGroups:(id)arg1 needsIndex:(BOOL)arg2 baselineRecordBehavior:(unsigned long long)arg3 completionBlock:(dispatch_block_t)arg4;

@end

