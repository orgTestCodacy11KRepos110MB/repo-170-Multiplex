//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTInvalidation-Protocol.h"
#import "IDELocalizationWorkProgress-Protocol.h"

@class DVTNotificationToken, DVTStackBacktrace, IDELocalizationBundleExportContext, IDELocalizationStream, NSString;

@interface IDELocalizationExporter : NSObject <IDELocalizationWorkProgress, DVTInvalidation>
{
    IDELocalizationStream *_exportWork;
    IDELocalizationBundleExportContext *_exportContext;
    long long _workDone;
    long long _workOutstanding;
    DVTNotificationToken *_localizationPhaseObserver;
    DVTNotificationToken *_localizationWorkItemIncrementObserver;
    DVTNotificationToken *_localizationWorkItemDecrementObserver;
    id  _workToken;
    BOOL _complete;
    long long _progress;
    NSString *_phase;
    NSString *_workTitle;
    dispatch_block_t _onErrorBlock;
    dispatch_block_t _onCompletedBlock;
}

+ (void)initialize;
+ (id)exporterToURL:(id)arg1 container:(id)arg2 sourceLanguage:(id)arg3 targetLanguages:(id)arg4;
@property(copy) dispatch_block_t onCompletedBlock; // @synthesize onCompletedBlock=_onCompletedBlock;
@property(copy) dispatch_block_t onErrorBlock; // @synthesize onErrorBlock=_onErrorBlock;
@property(readonly) NSString *workTitle; // @synthesize workTitle=_workTitle;
@property(retain) NSString *phase; // @synthesize phase=_phase;
@property BOOL complete; // @synthesize complete=_complete;
@property long long progress; // @synthesize progress=_progress;
- (void)cancel;
- (void)start;
- (void)primitiveInvalidate;
- (id)initWithExportContext:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

