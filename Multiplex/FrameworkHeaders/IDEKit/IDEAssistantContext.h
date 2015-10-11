//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"


@class IDEAssistantWindowController, IDEWorkspace, IDEWorkspaceTabController, NSString, NSWindow;

@interface IDEAssistantContext : NSObject <NSCopying>
{
    NSWindow *_workspaceWindow;
    IDEWorkspaceTabController *_workspaceTabController;
    IDEAssistantWindowController *_assistantWindowController;
}

@property(retain) IDEAssistantWindowController *assistantWindowController; // @synthesize assistantWindowController=_assistantWindowController;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain, nonatomic) NSWindow *workspaceWindow; // @synthesize workspaceWindow=_workspaceWindow;
@property(readonly) struct CGSize windowSize;
@property(readonly) NSString *windowTitle;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) IDEWorkspace *workspace;

@end

