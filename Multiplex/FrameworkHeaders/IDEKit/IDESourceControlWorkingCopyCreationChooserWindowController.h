//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "IDESourceControlWindowController-Protocol.h"

@class DVTBorderedView, DVTTableView, IDESourceControlCreateLocalGitRepositoriesOperationInfo, IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSButton, NSMutableArray, NSString, NSTextField, NSWindow;

@interface IDESourceControlWorkingCopyCreationChooserWindowController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate, IDESourceControlWindowController>
{
    NSButton *_chooseButton;
    NSTextField *_messageTextField;
    NSTextField *_informationTextField;
    NSWindow *_parentWindow;
    IDESourceControlCreateLocalGitRepositoriesOperationInfo *_operationInfo;
    id  _token;
    BOOL _inProgress;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    IDEWorkspace *_workspace;
    NSMutableArray *_containers;
    NSMutableArray *_checkedFilePaths;
    DVTBorderedView *_borderedView;
    DVTTableView *_tableView;
}

+ (id)keyPathsForValuesAffectingCanContinue;
@property __weak DVTTableView *tableView; // @synthesize tableView=_tableView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) NSMutableArray *checkedFilePaths; // @synthesize checkedFilePaths=_checkedFilePaths;
@property(retain) NSMutableArray *containers; // @synthesize containers=_containers;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)endSheet;
- (void)cancel:(id)arg1;
- (void)cancelSheet;
- (void)choose:(id)arg1;
- (void)workingCopySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
@property(readonly) BOOL canContinue;
- (void)displayError:(id)arg1;
- (void)findProjects;
- (void)beginSheetForWindow:(id)arg1;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

