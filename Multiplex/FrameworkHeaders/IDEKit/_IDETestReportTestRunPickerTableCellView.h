//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class NSPopUpButton, NSTextField, _IDETestReportTestRunPickerRow;

@interface _IDETestReportTestRunPickerTableCellView : NSTableCellView
{
    NSPopUpButton *_testRunPopUpButton;
    NSTextField *_testRunLabel;
    _IDETestReportTestRunPickerRow *_hostRow;
}

@property __weak _IDETestReportTestRunPickerRow *hostRow; // @synthesize hostRow=_hostRow;
@property __weak NSTextField *testRunLabel; // @synthesize testRunLabel=_testRunLabel;
@property __weak NSPopUpButton *testRunPopUpButton; // @synthesize testRunPopUpButton=_testRunPopUpButton;

@end

