//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSSet;

@interface IDEActivityReportFileIOCoordinator : NSObject
{
    NSMutableArray *_activityReports;
    NSMutableSet *_runningThrottleableActivityReports;
    NSMutableSet *_runningUnthrottleableActivityReports;
    NSMapTable *_activityReportObservations;
}

+ (id)sharedActivityReportFileIOCoordinator;
+ (void)initialize;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
@property(readonly) NSSet *runningUnthrottleableActivityReports; // @synthesize runningUnthrottleableActivityReports=_runningUnthrottleableActivityReports;
@property(readonly) NSSet *runningThrottleableActivityReports; // @synthesize runningThrottleableActivityReports=_runningThrottleableActivityReports;
@property(readonly) NSArray *activityReports; // @synthesize activityReports=_activityReports;
- (void)updateWithAddedActivityReports:(id)arg1 deletedActivityReports:(id)arg2;
- (void)_stopObservingReport:(id)arg1;
- (void)_startObservingReport:(id)arg1;
- (void)_updateRunningActivityReports;
- (void)_throttleActivityReport:(id)arg1 throttleFactor:(double)arg2;
- (BOOL)_removeSortedActivityReport:(id)arg1;
- (void)_insertSortedActivityReport:(id)arg1;
- (dispatch_block_t)_activityReportPriorityComparator;
- (unsigned long long)_allowedConcurrentActivities;
- (id)_init;
- (id)init;

@end
