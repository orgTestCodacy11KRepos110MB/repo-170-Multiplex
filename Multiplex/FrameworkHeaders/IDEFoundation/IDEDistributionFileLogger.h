//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "DVTFileLogger-Protocol.h"

@interface IDEDistributionFileLogger : DVTFileLogger
{
    int _exclusiveLogLevel;
}

@property(readonly) int exclusiveLogLevel; // @synthesize exclusiveLogLevel=_exclusiveLogLevel;
- (void)logMessage:(id)arg1 forAspect:(id)arg2 logLevel:(int)arg3;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2 exclusiveLogLevel:(int)arg3;

@end

