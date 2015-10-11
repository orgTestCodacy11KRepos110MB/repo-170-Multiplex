//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTInvalidation-Protocol.h"

@class DVTDelayedInvocationScheduler, DVTStackBacktrace, NSArray, NSNumber, NSRunLoop, NSString;

@interface DVTDelayedInvocation : NSObject <DVTInvalidation>
{
    dispatch_block_t _block;
    NSRunLoop *_schedulingRunLoop;
    DVTStackBacktrace *_schedulingBacktrace;
    struct {
        unsigned int scheduledInvocation:1;
        unsigned int invokesIfNeededWhenAppTerminates:1;
        unsigned int disablesSuddenTermination:1;
        unsigned int disablesAutomaticTermination:1;
        unsigned int didDisableSuddenTermination:1;
        unsigned int didDisableAutomaticTermination:1;
        unsigned int invoking:1;
        unsigned int isInvalidated:1;
        unsigned int _reserved:1;
    } _flags;
    void *_keepSelfAliveUntilCancellationRef;
    BOOL _shouldInvokeIfNeededWhenAppTerminates;
    DVTDelayedInvocationScheduler *_scheduler;
    NSArray *_runLoopModes;
    NSString *_terminationDisablingReason;
}

+ (void)initialize;
+ (id)delayedInvocationWithTerminationDisablingReason:(id)arg1 withBlock:(dispatch_block_t)arg2;
@property(copy) NSString *terminationDisablingReason; // @synthesize terminationDisablingReason=_terminationDisablingReason;
@property BOOL shouldInvokeIfNeededWhenAppTerminates; // @synthesize shouldInvokeIfNeededWhenAppTerminates=_shouldInvokeIfNeededWhenAppTerminates;
@property(copy, nonatomic) NSArray *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(copy, nonatomic) DVTDelayedInvocationScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, copy) NSString *description;
- (void)appWillTerminate:(id)arg1;
- (void)invoke;
- (void)cancelScheduledInvocation;
- (void)rescheduleInvocation;
- (void)scheduleInvocation;
- (void)invokeIfNeeded;
- (void)unscheduleInvocation;
- (void)runBlock:(id)arg1;
@property BOOL disablesAutomaticTermination;
@property BOOL disablesSuddenTermination;
- (BOOL)invokesIfNeededWhenAppTerminates;
- (void)setInvokesIfNeededWhenAppTerminates:(BOOL)arg1;
@property(copy, nonatomic) NSNumber *delay;
@property(copy, nonatomic) NSNumber *priority;
@property(readonly) BOOL isInvoking;
@property(readonly) BOOL hasScheduledInvocation;
- (void)setAutomaticTerminationBlocked:(BOOL)arg1;
- (void)setSuddenTerminationBlocked:(BOOL)arg1;
- (void)primitiveInvalidate;
- (id)initWithBlock:(dispatch_block_t)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
