//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEOutlineBasedNavigator.h>

#import "DVTOutlineViewDelegate-Protocol.h"

@class DVTNotificationToken, DVTObservingToken, DVTScopeBarView, DVTScrollView, DVTTimeSlicedMainThreadWorkQueue, NSButton, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface IDEIssueNavigator : IDEOutlineBasedNavigator <DVTOutlineViewDelegate>
{
    DVTScopeBarView *_scopeBarView;
    NSButton *_scopeByFileButton;
    NSButton *_scopeByTypeButton;
    NSSet *_collapsedGroupsBeforeFiltering;
    NSSet *_collapsedFilesBeforeFiltering;
    NSSet *_collapsedTypesBeforeFiltering;
    NSSet *_expandedIssuesBeforeFiltering;
    DVTTimeSlicedMainThreadWorkQueue *_autoExpandingWorkQueue;
    NSMutableArray *_stateChangeObservingTokens;
    unsigned long long _issueDetailLevel;
    DVTObservingToken *_selectedNavigablesObservingToken;
    DVTNotificationToken *_issueDetailLevelObservingToken;
    BOOL _showByType;
    BOOL _restoringState;
    BOOL _clearingFilterPredicate;
    BOOL _errorFilteringEnabled;
    BOOL _recentFilteringEnabled;
    NSString *_filterPatternString;
    NSMutableSet *_collapsedGroups;
    NSMutableSet *_collapsedFiles;
    NSMutableSet *_collapsedTypes;
    NSMutableSet *_expandedIssues;
    DVTScrollView *_issueNavigatorScrollView;
    struct _NSRange _visibleRows;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)initialize;
@property __weak DVTScrollView *issueNavigatorScrollView; // @synthesize issueNavigatorScrollView=_issueNavigatorScrollView;
@property struct _NSRange visibleRows; // @synthesize visibleRows=_visibleRows;
@property(copy, nonatomic) NSMutableSet *expandedIssues; // @synthesize expandedIssues=_expandedIssues;
@property(copy, nonatomic) NSMutableSet *collapsedTypes; // @synthesize collapsedTypes=_collapsedTypes;
@property(copy, nonatomic) NSMutableSet *collapsedFiles; // @synthesize collapsedFiles=_collapsedFiles;
@property(copy, nonatomic) NSMutableSet *collapsedGroups; // @synthesize collapsedGroups=_collapsedGroups;
@property(nonatomic) BOOL recentFilteringEnabled; // @synthesize recentFilteringEnabled=_recentFilteringEnabled;
@property(nonatomic) BOOL errorFilteringEnabled; // @synthesize errorFilteringEnabled=_errorFilteringEnabled;
@property(copy, nonatomic) NSString *filterPatternString; // @synthesize filterPatternString=_filterPatternString;
- (void)_revealNavigableItems:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)configureStateSavingObservers;
- (void)revertStateWithDictionary:(id)arg1;
- (void)clearFilterPredicate;
- (void)setFilterPredicate:(id)arg1;
- (void)_synchronizeFilteringWithOutlineView;
- (id)filterDefinitionIdentifier;
- (void)_updateFilterPredicate;
- (BOOL)_isFiltered;
- (void)_configureStandardTableViewCell:(id)arg1 toNavItemsRepresentedObject:(id)arg2;
- (id)_tableCellViewForSubIssueNavItem:(id)arg1;
- (id)_tableCellViewForIssueNavItem:(id)arg1;
- (id)_tableCellViewForIssueTypeGroupNavItem:(id)arg1;
- (id)_tableCellViewForFileGroupNavItem:(id)arg1;
- (id)_tableCellViewForIssueGroupNavItem:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)_ensureNavigableItem:(id)arg1 expansionStateIsExpanded:(BOOL)arg2;
- (id)_itemsMatchingState:(id)arg1;
- (id)_leafIssueNavigableInIssuePath:(id)arg1 parentNavigable:(id)arg2 idToNavigableDict:(id)arg3;
- (id)_issueNavigableItemForIdentifierDictionary:(id)arg1 parentNavigable:(id)arg2 idToNavigableDict:(id)arg3;
- (id)_fileGroupNavigableItemForIdentifierDictionary:(id)arg1 parentNavigable:(id)arg2 idToNavigableDict:(id)arg3;
- (id)_typeGroupNavigableItemForIdentifierDictionary:(id)arg1 parentNavigable:(id)arg2 idToNavigableDict:(id)arg3;
- (id)_issueGroupNavigableItemForIdentifierDictionary:(id)arg1 idToNavigableDict:(id)arg2;
- (id)_fullIdentifierPathForNavigables:(id)arg1;
- (id)_fullIdentifierPathForNavigable:(id)arg1;
- (id)_stateIdentifierForNavigable:(id)arg1;
- (id)_stateIdentifierForIssue:(id)arg1;
- (id)_stateIdentifierForIssueTypeGroup:(id)arg1 parentNavigable:(id)arg2;
- (id)_stateIdentifierForIssueFileGroup:(id)arg1 parentNavigable:(id)arg2;
- (id)_stateIdentifierForIssueGroup:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)contextMenu_revealInLog:(id)arg1;
- (void)contextMenu_copy:(id)arg1;
- (void)copy:(id)arg1;
- (id)contextMenuSelection;
- (BOOL)_writeItems:(id)arg1 toPasteboard:(id)arg2;
- (void)contextMenu_revealInProjectNavigator:(id)arg1;
- (void)revealInProjectNavigator:(id)arg1;
- (void)_revealInProjectNavigatorUsingContextMenuSelection:(BOOL)arg1;
- (void)_pushSelection;
- (void)openDoubleClickedNavigableItemsAction:(id)arg1;
- (void)openClickedNavigableItemAction:(id)arg1;
- (void)openSelectedNavigableItemsKeyAction:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (BOOL)_canNavigateToNavigableItem:(id)arg1;
- (id)structureEditorOpenSpecifierForIssuesNavigable:(id)arg1 error:(id *)arg2;
- (id)structureEditorOpenSpecifierForLogDocumentForIssue:(id)arg1 error:(id *)arg2;
- (id)structureNavigableItemForIssuesNavigable:(id)arg1 error:(id *)arg2;
- (void)showByFile:(id)arg1;
- (void)showByType:(id)arg1;
- (id)domainIdentifier;
@property BOOL showByType;
- (void)primitiveInvalidate;
- (void)_handleDetailLevelDefaultDidChange;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

