//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEViewController.h>

@class IDEAnalyzeSchemeAction, IDEScheme, IDEWorkspace, NSBox;

@interface IDEAnalyzeActionSheetController : IDEViewController
{
    IDEScheme *_runContext;
    IDEWorkspace *_workspace;
    IDEAnalyzeSchemeAction *_runPhase;
    NSBox *_box;
}

+ (void)initialize;
@property(retain) IDEAnalyzeSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
@property(retain) IDEScheme *runContext; // @synthesize runContext=_runContext;
@property(retain) IDEWorkspace *workspace;
- (void)updateBoundContent;
- (void)updateBoundIDEWorkspaceBinding;
- (void)updateBoundIDERunContextBinding;
- (id)dvtExtraBindings;
- (void)primitiveInvalidate;
- (void)loadView;

@end

