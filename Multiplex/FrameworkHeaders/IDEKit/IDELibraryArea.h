//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEUtilityArea.h>

@class NSMutableDictionary;

@interface IDELibraryArea : IDEUtilityArea
{
    NSMutableDictionary *_previousLibraries;
    NSMutableDictionary *_libraryExtensions;
}

+ (id)defaultViewNibName;
+ (double)extraHeight;
+ (double)tileHeight;
- (void)chooserView:(id)arg1 userDidSelectChoices:(id)arg2;
- (void)hideLibraryArea;
@property(readonly, getter=isCollapsed) BOOL collapsed;
- (void)showLibraryArea;
- (id)_enclosingSplitView;
- (void)invalidateContentView:(id)arg1;
- (id)_contentViewForSlice:(id)arg1 inCategory:(id)arg2;
- (id)viewControllerForContentView:(id)arg1;
- (void)loadView;
- (id)categoryIdentifiersForEditorExtension:(id)arg1;
- (BOOL)categorySupportsMultipleSlices:(id)arg1;
- (id)slicesForNavigableItems:(id)arg1 inCategory:(id)arg2 withWorkspaceDocument:(id)arg3;
- (id)_libraryExtensionForIdentifier:(id)arg1;
- (BOOL)delegateFirstResponder;
- (dispatch_block_t)willReplaceSliceViewControllers:(id)arg1;
- (void)viewDidInstall;
- (void)activateFilterFieldForFocusFromMenuItem:(id)arg1;
- (void)activateFilterFieldForFocus;
- (id)libraryControllerForExtension:(id)arg1;
- (id)preferredCategoriesPersistenceKey;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

