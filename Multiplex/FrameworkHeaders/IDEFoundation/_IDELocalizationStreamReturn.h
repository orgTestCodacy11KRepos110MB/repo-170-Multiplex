//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEFoundation/IDELocalizationStream.h>

@class NSMutableArray;

@interface _IDELocalizationStreamReturn : IDELocalizationStream
{
    NSMutableArray *_remainingDataToPublish;
}

+ (id)withArray:(id)arg1;
@property(retain) NSMutableArray *remainingDataToPublish; // @synthesize remainingDataToPublish=_remainingDataToPublish;
- (void)onCompleted;
- (void)onNext:(id)arg1;
- (void)_next;
- (id)subscribe:(id)arg1;

@end

