//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "IDETestsObserver-Protocol.h"

@class IDEActivityLogSection, IDETestManager, NSMutableArray, NSString;

@interface IDETestsActivityLogBuilder : NSObject <IDETestsObserver>
{
    NSMutableArray *_subSectionRecorders;
    BOOL _aBundleDidNotFinishSuccessfully;
    BOOL _testsFinishedSuccessfully;
    IDEActivityLogSection *_activityLogSection;
    IDETestManager *_testManager;
}

@property BOOL testsFinishedSuccessfully; // @synthesize testsFinishedSuccessfully=_testsFinishedSuccessfully;
@property(retain, nonatomic) IDETestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) IDEActivityLogSection *activityLogSection; // @synthesize activityLogSection=_activityLogSection;
- (void)didFinishTest:(id)arg1 withTestResult:(id)arg2 rawOutput:(id)arg3;
- (void)didFailTest:(id)arg1 withTestResultMessage:(id)arg2 rawOutput:(id)arg3;
- (void)test:(id)arg1 didFinishActivity:(id)arg2;
- (void)test:(id)arg1 willStartActivity:(id)arg2;
- (void)test:(id)arg1 didMeasurePerformanceMetric:(id)arg2 rawOutput:(id)arg3;
- (void)testDidOutput:(id)arg1;
- (void)didStartTest:(id)arg1 withRawOutput:(id)arg2;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(id)arg6;
- (void)testSuite:(id)arg1 willFinishAt:(id)arg2 rawOutput:(id)arg3;
- (void)testSuite:(id)arg1 didStartAt:(id)arg2 rawOutput:(id)arg3;
- (void)testOperationGroupDidFinish;
- (void)testOperationWillFinishWithSuccess:(BOOL)arg1 withError:(id)arg2;
- (void)_finishSubSectionRecorders:(id)arg1 error:(id)arg2;
- (void)testRunner:(id)arg1 didLaunchTestSessionForScheme:(id)arg2 withDisplayName:(id)arg3;
- (void)_appendAndPropagateUpText:(id)arg1 startingWithRecorder:(id)arg2;
- (void)_popRecorderWithMessageForReason:(id)arg1 error:(id)arg2;
- (void)_popRecorder;
- (void)_pushRecorder:(id)arg1;
- (id)_currentSubSectionRecorder;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

