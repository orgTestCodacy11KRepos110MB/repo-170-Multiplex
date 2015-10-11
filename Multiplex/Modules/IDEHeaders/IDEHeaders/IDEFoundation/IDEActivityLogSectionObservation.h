//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTCancellable-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface IDEActivityLogSectionObservation : NSObject <DVTCancellable>
{
    dispatch_block_t _block;
}

+ (id)sharedNullObservation;
@property(readonly, copy) NSString *description;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (dispatch_block_t)block;
- (id)init;
- (id)initWithBlock:(dispatch_block_t)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
