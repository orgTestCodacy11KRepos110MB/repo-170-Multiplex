//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEViewController.h>

#import "DVTPagingSheetViewController-Protocol.h"

@class IDECodesignIssueResolutionWindowController, NSString;

@interface IDECodesignIssueResolutionViewController : IDEViewController <DVTPagingSheetViewController>
{
    IDECodesignIssueResolutionWindowController *_pagingSheetWindowController;
}

@property(retain, nonatomic) IDECodesignIssueResolutionWindowController *pagingSheetWindowController; // @synthesize pagingSheetWindowController=_pagingSheetWindowController;
- (void)cancelAction:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

