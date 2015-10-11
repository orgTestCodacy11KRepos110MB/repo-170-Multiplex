//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEAssistant.h>

#import "IDESourceControlBranchTableDelegate-Protocol.h"

@class DVTReplacementView, NSString;

@interface IDESourceControlLocationAssistant : IDEAssistant <IDESourceControlBranchTableDelegate>
{
    BOOL canGoForward;
    DVTReplacementView *_replacementView;
}

@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property BOOL canGoForward; // @synthesize canGoForward;
- (void)primitiveInvalidate;
- (id)nextAssistantIdentifier;
- (id)previousAssistantIdentifier;
- (BOOL)canGoBack;
- (BOOL)canCancel;
- (void)setSelectedBranch:(id)arg1;
- (void)viewDidLoad;
- (id)branchTableViewController;
- (id)downloadAssistantContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

