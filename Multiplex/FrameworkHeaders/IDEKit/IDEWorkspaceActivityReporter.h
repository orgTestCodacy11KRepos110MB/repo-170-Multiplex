//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEActivityReporter.h>

@class DVTObservingToken, IDEActivityReport;

@interface IDEWorkspaceActivityReporter : IDEActivityReporter
{
    DVTObservingToken *_activityObserverToken;
    DVTObservingToken *_workspaceNameObserverToken;
    IDEActivityReport *_activeReport;
}

+ (void)initialize;
- (id)_title;
- (void)updateActivity;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

