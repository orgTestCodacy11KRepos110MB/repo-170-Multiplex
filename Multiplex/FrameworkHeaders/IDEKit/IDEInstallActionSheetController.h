//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEViewController.h>

#import "IDEFilePickerViewDelegate-Protocol.h"

@class DVTObservingToken, IDEInstallSchemeAction, IDEScheme, IDEWorkspace, NSString, NSTextField;

@interface IDEInstallActionSheetController : IDEViewController <IDEFilePickerViewDelegate>
{
    IDEScheme *_runContext;
    IDEWorkspace *_workspace;
    IDEInstallSchemeAction *_runPhase;
    DVTObservingToken *_customInstallNameObservingToken;
    DVTObservingToken *_defaultInstallNameObservingToken;
    NSTextField *_installNameTextField;
}

+ (void)initialize;
@property(retain) NSTextField *installNameTextField; // @synthesize installNameTextField=_installNameTextField;
@property(retain) IDEInstallSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
@property(retain) IDEScheme *runContext; // @synthesize runContext=_runContext;
- (void)setCustomInstallName:(id)arg1;
- (id)customInstallName;
@property(retain) IDEWorkspace *workspace;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)updateBoundContent;
- (void)updateBoundIDEWorkspaceBinding;
- (void)updateBoundIDERunContextBinding;
- (id)dvtExtraBindings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

