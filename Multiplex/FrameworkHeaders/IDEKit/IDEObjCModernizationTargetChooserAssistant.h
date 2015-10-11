//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEAssistant.h>

#import "IDEFilterControlBarTarget-Protocol.h"

@class DVTBorderedView, DVTOutlineView, IDEFilterControlBar, IDEMigrationTargetChooserStatePersistence, NSArray, NSImageView, NSMutableIndexSet, NSString, NSTextField, NSTreeController;

@interface IDEObjCModernizationTargetChooserAssistant : IDEAssistant <NSOutlineViewDataSource, NSOutlineViewDelegate, IDEFilterControlBarTarget>
{
    NSArray *_targetItems;
    NSString *_searchString;
    NSMutableIndexSet *_expandedRowIndexes;
    NSArray *_selectedTargetChooserItems;
    IDEMigrationTargetChooserStatePersistence *_statePersistence;
    IDEFilterControlBar *_filterControlBar;
    DVTBorderedView *_scopeBarBorderedView;
    DVTOutlineView *_outlineView;
    DVTBorderedView *_borderedView;
    NSImageView *_warningIconImageView;
    NSTextField *_warningTextField;
    NSTreeController *_targetChooserItemsController;
}

+ (BOOL)automaticallyNotifiesObserversOfSearchString;
+ (id)keyPathsForValuesAffectingArrangedTargetItems;
+ (id)keyPathsForValuesAffectingCanGoForward;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy) NSArray *targetItems; // @synthesize targetItems=_targetItems;
- (id)currentUIState;
- (void)loadUIState:(id)arg1;
- (id)stateRepositoryFilePath;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)_attributedStringByHighlightingFindResults:(id)arg1;
- (id)_findResultAttributes;
- (BOOL)validateMenuItem:(id)arg1;
- (void)uncheckSelection:(id)arg1;
- (void)checkSelection:(id)arg1;
- (BOOL)canUncheckSelection;
- (BOOL)canCheckSelection;
- (unsigned long long)_numberOfCheckedItemsAtIndexes:(id)arg1;
- (void)_setChecked:(BOOL)arg1 forTargetChooserItemAtIndexes:(id)arg2;
- (id)_effectiveSelectedRowIndexes;
- (id)filterButtonMenu;
- (id)filterDefinitionIdentifier;
- (void)_restoreSelectedTargetChooserItemsAndExpandedRows;
- (void)_saveSelectedTargetChooserItemsAndExpandedRows;
@property(readonly, copy) NSArray *arrangedTargetItems;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)filterControlBar;
- (id)nextAssistantIdentifier;
- (BOOL)canGoForward;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

