//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class IDESchemeActionRunDestinationRecord, IDESchemeActionsInvocationRecord, NSArray, NSImage, NSString;

@protocol IDETestReport_TestRun <NSObject>
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_activities;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testableBlueprintPath;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testableBlueprintName;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_failureSummaries;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_UUID;
@property(readonly, nonatomic) BOOL ide_testReport_testRun_passed;
@property(readonly, nonatomic) NSImage *ide_testReport_testRun_statusImage;
@property(readonly, nonatomic) id  ide_testReport_testRun_testedDevice;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testClassName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testName;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_perfMetrics;

@optional
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_testReport_testRun_schemeActionsInvocationRecord;
@property(readonly, nonatomic) BOOL ide_testReport_testRun_fetchesSchemeActionsInvocationRecordAsync;
@property(readonly, nonatomic) IDESchemeActionRunDestinationRecord *ide_testReport_testRun_schemeActionRunDestinationRecord;
- (void)ide_testReport_testRun_schemeActionsInvocationRecord:(void (^)(IDESchemeActionsInvocationRecord *))arg1;
@end

