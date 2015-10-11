//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class IDEIssueProvider, NSArray, NSMutableArray;

@interface IDEIssueTypeGroup : NSObject
{
    IDEIssueProvider *_issueProvider;
    id _issueTypeIdentifier;
    NSMutableArray *_issues;
    unsigned long long _testFailureCount;
    unsigned long long _errorCount;
    unsigned long long _warningCount;
    unsigned long long _noticeCount;
    unsigned long long _analyzerResultCount;
    int _issueType;
}

@property(readonly) int issueType; // @synthesize issueType=_issueType;
@property(readonly) NSArray *issues; // @synthesize issues=_issues;
@property(readonly) id issueTypeIdentifier; // @synthesize issueTypeIdentifier=_issueTypeIdentifier;
@property(readonly) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
- (void)_removeIssues:(id)arg1;
- (void)_addIssues:(id)arg1;
- (void)_updateIssueType;
- (id)_initWithIssueProvider:(id)arg1 issueTypeIdentifier:(id)arg2;
- (id)init;

@end

