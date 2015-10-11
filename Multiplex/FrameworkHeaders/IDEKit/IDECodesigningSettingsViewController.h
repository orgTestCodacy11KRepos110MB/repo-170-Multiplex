//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEViewController.h>


@class NSPopUpButton, NSProgressIndicator, NSString, NSTextField;

@interface IDECodesigningSettingsViewController : IDEViewController <NSMenuDelegate>
{
    NSPopUpButton *_developmentTeamPopup;
    NSTextField *_codesigningIdentityName;
    NSTextField *_codesigningProfileName;
    NSProgressIndicator *_developmentTeamRefreshIndicator;
    id  _model;
}

@property(readonly, nonatomic) id  model; // @synthesize model=_model;
- (void)developerPortalRefreshStateChanged:(id)arg1;
- (void)developmentTeamMenuSelectionChanged:(id)arg1;
- (void)updateDevelopmentTeamMenuSelection;
- (void)menuNeedsUpdate:(id)arg1;
- (void)refreshDevelopmentTeams:(id)arg1 forceSync:(BOOL)arg2;
- (void)refreshDevelopmentTeamsIfNeeded;
- (void)setTarget:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

