//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEActivityReporter.h>

@class DVTObservingToken, NSMutableDictionary;

@interface IDEDeviceActivityReporter : IDEActivityReporter
{
    NSMutableDictionary *_deviceToObservers;
    NSMutableDictionary *_deviceToReport;
    DVTObservingToken *_deviceObserver;
}

+ (void)initialize;
- (void)_observerDevice:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

