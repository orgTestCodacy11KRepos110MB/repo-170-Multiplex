//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "DVTToolbarViewController-Protocol.h"


@class DVTBindingToken, DVTNotificationToken, DVTObservingToken, DVTRolloverTracker, DVTSegmentedControl, NSMenu, NSString;

@interface IDEEditorModeToolbarViewController : DVTToolbarViewController <NSMenuDelegate>
{
    DVTObservingToken *_editorModeObservingToken;
    DVTObservingToken *_editorSubmodeObservingToken;
    DVTBindingToken *_workspaceIsIdleToken;
    DVTNotificationToken *_segmentedControllVersionEditorEnabledToken;
    DVTRolloverTracker *_segmentedControllRolloverTracker;
    DVTSegmentedControl *_editorSegmentedControl;
    NSMenu *_assistantEditorModeMenu;
    NSMenu *_versionEditorModeMenu;
}

- (SEL)_selectorForCurrentAssistantMode;
- (void)_showAssistantAllVerticalMode:(id)arg1;
- (void)_showAssistantAllHorizontalMode:(id)arg1;
- (void)_showAssistantOnBottomMode:(id)arg1;
- (void)_showAssistantOnRightMode:(id)arg1;
- (void)_showVersionLogMode:(id)arg1;
- (void)_showVersionBlameMode:(id)arg1;
- (void)_showVersionComparisonMode:(id)arg1;
- (void)_segmentStateDidChange:(id)arg1;
- (void)_setEditorModeForMenuItem:(id)arg1;
- (void)_updateVersionEditorMenuForSubmode:(int)arg1;
- (void)_setEditorMode:(int)arg1;
- (long long)_stateForMenuItemTag:(long long)arg1 editorModeClass:(Class)arg2 classAccessor:(SEL)arg3 instanceAccessor:(SEL)arg4;
- (id)_editorModeViewController;
- (id)_activeTabController;
- (id)menuForMenuFormRepresentation;
- (id)_create1010AndLaterControl;
- (void)menuWillOpen:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

