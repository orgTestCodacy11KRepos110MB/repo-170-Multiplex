//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDENavigationHUDBorderedGradientLayer.h>

#import "IDENavigationHUDDisposableLayer-Protocol.h"
#import "IDENavigationHUDSelectableLayer-Protocol.h"

@class CAGradientLayer, CALayer, IDENavigationHUDSelection, IDENavigationHUDTabLayer, IDEWorkspaceWindowController, NSString;

@interface IDENavigationHUDTabLayoutLayer : IDENavigationHUDBorderedGradientLayer <IDENavigationHUDSelectableLayer, IDENavigationHUDDisposableLayer>
{
    IDEWorkspaceWindowController *_workspaceWindowController;
    IDENavigationHUDTabLayer *_workspaceTabLayer;
    unsigned long long _state;
    CAGradientLayer *_overlayLayer;
    CALayer *_imageLayer;
}

@property(readonly) IDEWorkspaceWindowController *workspaceWindowController; // @synthesize workspaceWindowController=_workspaceWindowController;
@property(readonly) IDENavigationHUDTabLayer *workspaceTabLayer; // @synthesize workspaceTabLayer=_workspaceTabLayer;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly) BOOL representativeSelectionIsFinalForSingleMouseUp;
- (id)workspaceTabController;
@property(readonly) IDENavigationHUDSelection *representativeSelection;
- (void)layoutSublayers;
- (struct CGSize)imageSize;
- (void)dispose;
- (id)initWithWorkspaceWindowController:(id)arg1 workspaceTabLayer:(id)arg2 image:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
