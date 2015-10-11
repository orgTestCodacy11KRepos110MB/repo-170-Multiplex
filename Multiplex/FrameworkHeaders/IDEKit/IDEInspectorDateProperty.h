//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSDatePicker;

@interface IDEInspectorDateProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSDatePicker *_datePicker;
}

@property(retain, nonatomic) NSDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (double)baseline;

@end

