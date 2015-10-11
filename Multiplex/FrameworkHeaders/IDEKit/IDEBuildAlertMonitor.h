//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTInvalidation-Protocol.h"

@class DVTObservingToken, DVTStackBacktrace, IDEActivityLogSection, IDEBuildOperation, IDEIssue, IDEWorkspaceDocument, NSMapTable, NSString;

@interface IDEBuildAlertMonitor : NSObject <DVTInvalidation>
{
    IDEWorkspaceDocument *_workspaceDocument;
    DVTObservingToken *_executionEnvironmentBuildStateToken;
    DVTObservingToken *_buildOperationToken;
    id  _issueProviderToken;
    id _buildLogObserver;
    IDEBuildOperation *_currentBuildOperation;
    IDEActivityLogSection *_currentBuildLog;
    BOOL _started;
    BOOL _running;
    BOOL _stopped;
    BOOL _alertedIssue;
    BOOL _cleanupWhenDoneRecording;
    NSMapTable *_existingIssues;
    IDEIssue *_firstIssue;
}

+ (void)initialize;
@property(retain) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (void)primitiveInvalidate;
- (void)_buildExistingIssues;
- (void)issueManager:(id)arg1 didAddIssues:(id)arg2 forDocumentURL:(id)arg3;
- (id)currentPrimaryDocumentURL;
- (BOOL)isIssueAnExistingIssue:(id)arg1;
- (id)sharedPlaceholderURLForIssuesWithNoDocument;
- (void)buildDidFinishForExecutionEnvironment:(id)arg1;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
- (void)_cleanup;
- (void)buildIsRunningForExecutionEnvironment:(id)arg1;
- (void)buildDidStartForExecutionEnvironment:(id)arg1;
- (id)verbForBuildOperationPurpose:(id)arg1;
- (id)workspaceTabController;
- (id)initWithWorkspaceTabController:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

