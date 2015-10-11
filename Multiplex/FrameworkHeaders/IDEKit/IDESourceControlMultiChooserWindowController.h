//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "IDESourceControlBranchChooserItemDelegate-Protocol.h"
#import "IDESourceControlWindowController-Protocol.h"

@class IDESourceControlMultiNewBranchWindowController, IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSArray, NSButton, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSTableView, NSTextField, NSWindow;

@interface IDESourceControlMultiChooserWindowController : NSWindowController <IDESourceControlWindowController, IDESourceControlBranchChooserItemDelegate>
{
    NSTableView *_tableView;
    NSButton *_chooseButton;
    NSTextField *_messageTextField;
    IDEWorkspace *_workspace;
    NSArray *_workingTrees;
    NSArray *_workingCopies;
    NSArray *_workingTreeItems;
    NSArray *_items;
    NSOperationQueue *_operationQueue;
    dispatch_block_t _continuationBlock;
    int _requestType;
    NSMutableDictionary *_tokenDictionary;
    NSMutableDictionary *_dataCellDictionary;
    NSString *_messageText;
    NSString *_buttonText;
    NSWindow *_parentWindow;
    BOOL _inProgress;
    BOOL _canContinue;
    BOOL _willDismiss;
    IDESourceControlMultiNewBranchWindowController *_newBranchWC;
    NSMutableArray *_observingTokens;
    BOOL _disableFastForwards;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    dispatch_block_t _commitAndPushConinuationBlock;
}

+ (id)keyPathsForValuesAffectingCanContinue;
@property BOOL disableFastForwards; // @synthesize disableFastForwards=_disableFastForwards;
@property(copy) dispatch_block_t commitAndPushConinuationBlock; // @synthesize commitAndPushConinuationBlock=_commitAndPushConinuationBlock;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
@property BOOL canContinue; // @synthesize canContinue=_canContinue;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(copy) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy) NSString *messageText; // @synthesize messageText=_messageText;
@property int requestType; // @synthesize requestType=_requestType;
@property(copy) dispatch_block_t continuationBlock; // @synthesize continuationBlock=_continuationBlock;
@property(readonly) NSArray *items; // @synthesize items=_items;
@property(copy) NSArray *workingCopies; // @synthesize workingCopies=_workingCopies;
@property(copy) NSArray *workingTreeItems; // @synthesize workingTreeItems=_workingTreeItems;
@property(copy) NSArray *workingTrees; // @synthesize workingTrees=_workingTrees;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)showNewBranchChooser:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_workingCopyImage;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
- (void)cancel:(id)arg1;
- (void)cancelSheet;
- (void)_choose;
- (void)choose:(id)arg1;
- (void)multiChooserSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)endSheet;
- (id)selectedItems;
- (void)displayError:(id)arg1;
- (void)displayErrorAndCancel:(id)arg1;
- (void)updateCanContinue;
- (id)successImage;
- (void)selectBranch:(id)arg1;
- (void)setupPopUpMenuForItem:(id)arg1;
- (void)_updateStatusForChooserItem:(id)arg1;
- (void)_populateRepositoryChooserItem:(id)arg1;
- (void)setupItems;
- (id)_operationalItemsForWorkingTree:(id)arg1;
- (void)setupText;
- (void)beginSheetForWindow:(id)arg1;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

