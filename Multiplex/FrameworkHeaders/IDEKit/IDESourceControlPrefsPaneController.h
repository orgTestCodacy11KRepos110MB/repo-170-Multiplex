//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEViewController.h>

@class NSPopUpButton;

@interface IDESourceControlPrefsPaneController : IDEViewController
{
    NSPopUpButton *_comparisonLocalRevisionSidePopupButton;
}

- (void)setComparisonLocalRevisionSide:(id)arg1;
@property BOOL enableSourceControl;
@property BOOL alwaysAddFiles;
@property BOOL showLocalStatus;
@property BOOL showRemoteStatus;
- (void)viewDidInstall;
- (id)nibName;

@end

