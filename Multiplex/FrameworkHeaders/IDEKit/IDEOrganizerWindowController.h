//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTReplacementViewDelegate-Protocol.h"
#import "DVTStateRepositoryDelegate-Protocol.h"
#import "DVTStatefulObject-Protocol.h"
#import "IDEEditorAreaContainer-Protocol.h"

@class DVTDelayedInvocation, DVTExtension, DVTReplacementView, DVTStateRepository, DVTStateToken, IDEEditorArea, NSArray, NSDictionary, NSString;

@interface IDEOrganizerWindowController : NSWindowController <NSWindowRestoration, NSWindowDelegate, IDEEditorAreaContainer, DVTStatefulObject, DVTStateRepositoryDelegate, DVTReplacementViewDelegate>
{
    DVTReplacementView *_contentReplacementView;
    NSArray *_sources;
    NSArray *_organizerSourceExtensions;
    NSArray *_organizerSourceExtensionIdentifiers;
    NSDictionary *_organizerSourceExtensionsForIdentifier;
    DVTExtension *_currentExtension;
    DVTStateToken *_stateToken;
    DVTStateRepository *_stateRepository;
    DVTDelayedInvocation *_stateSavingInvocation;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(dispatch_block_t)arg3;
+ (id)sharedOrganizerWindowController;
@property(readonly) DVTDelayedInvocation *stateSavingInvocation; // @synthesize stateSavingInvocation=_stateSavingInvocation;
@property(retain) DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
@property(readonly) DVTStateRepository *stateRepository; // @synthesize stateRepository=_stateRepository;
@property(retain, nonatomic) DVTExtension *currentExtension; // @synthesize currentExtension=_currentExtension;
@property(copy) NSArray *sources; // @synthesize sources=_sources;
- (BOOL)_loadStateData:(id *)arg1;
- (BOOL)_saveStateData:(id *)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)_stateRepositoryFilePath;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)stateRepositoryDidChange:(id)arg1;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
@property(readonly) IDEEditorArea *editorArea;
- (void)showWindow:(id)arg1;
- (id)currentOrganizerSource;
- (void)showOrganizerSourceWithIdentifier:(id)arg1;
- (void)windowDidLoad;
- (void)_cacheOrganizerSourceExtensions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

