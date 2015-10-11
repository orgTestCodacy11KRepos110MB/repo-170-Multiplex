//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "DVTLibraryController-Protocol.h"

@class DVTObservingToken, NSArray, NSMapTable, NSSet;

@interface IDECodeSnippetLibrary : DVTLibraryController
{
    DVTObservingToken *_kvoSnippetRepositoryToken;
    NSMapTable *_strongSnippetToAssetMap;
    NSArray *_orderedPlatformFamilies;
    BOOL _isAddingUserCodeSnippet;
    NSSet *_lastSnippets;
}

- (id)codeDetailController:(id)arg1 sourceLanguageServiceContextForAsset:(id)arg2 representedObject:(id)arg3;
- (id)codeDetailController:(id)arg1 contentsForAsset:(id)arg2 representedObject:(id)arg3;
- (id)codeDetailController:(id)arg1 languageForAsset:(id)arg2 representedObject:(id)arg3;
- (id)editorViewControllerForAsset:(id)arg1;
- (BOOL)canRemoveAsset:(id)arg1;
- (BOOL)canEditAsset:(id)arg1;
- (BOOL)removeAssets:(id)arg1 error:(id *)arg2;
- (BOOL)createAsset:(id *)arg1 forLibrarySourceWithIdentifier:(id *)arg2 fromPasteboard:(id)arg3;
- (BOOL)canCreateAssetsFromPasteboard:(id)arg1 targetingLibrarySourceIdentifier:(id *)arg2;
- (id)readableAssetPasteboardTypes;
- (void)dealloc;
- (void)viewWillUninstall;
- (void)primitiveInvalidate;
- (void)libraryDidLoad;
- (struct CGSize)detailAreaSize;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (void)addUserSnippet:(id)arg1 withAsset:(id)arg2;
- (void)codeSnippetsDidUpdate;
- (void)removeAssetForCodeSnippet:(id)arg1;
- (void)addAssetForCodeSnippet:(id)arg1;
- (void)addAsset:(id)arg1 toLibrarySourceIdentifierForPlatformFamily:(id)arg2;
- (void)addLibraryGroupsIfNeeded;
- (void)setLibraryAsset:(id)arg1 forCodeSnippet:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingSnippet:(id)arg1;
- (void)startObservingSnippet:(id)arg1;
- (id)observingKeyPathsForCodeSnippet:(id)arg1;
- (id)libraryAssetForCodeSnippet:(id)arg1;
- (id)createLibraryAssetForCodeSnippet:(id)arg1;
- (id)platformIconForPlatformFamily:(id)arg1;
- (id)defaultPlatformIcon;

@end

