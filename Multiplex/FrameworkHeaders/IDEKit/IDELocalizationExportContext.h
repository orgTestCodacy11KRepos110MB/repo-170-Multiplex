//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "IDELocalizationManagerContext-Protocol.h"

@class DVTFilePath, IDEContainer<IDELocalizedContainer>, IDEWorkspaceTabController;

@interface IDELocalizationExportContext : IDELocalizationManagerContext
{
    IDEContainer *_project;
    IDEWorkspaceTabController *_workspaceTabController;
    DVTFilePath *_destinationFilePath;
}

@property(retain) DVTFilePath *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain) IDEContainer *project; // @synthesize project=_project;
- (id)createController;

@end

