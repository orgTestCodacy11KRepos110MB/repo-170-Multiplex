//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, NSMapTable, NSString;

@interface DVTAutosynchingProxyArray : NSArray <DVTInvalidation>
{
    id _observedObject;
    NSString *_observedKeyPath;
    NSArray *_proxies;
    NSMapTable *_objectsToProxies;
    dispatch_block_t _proxyObtainBlock;
    dispatch_block_t _proxyDiscardBlock;
    id _kvoNotifyObject;
    NSString *_kvoNotifyKeyPath;
}

+ (void)initialize;
+ (id)proxyArrayObservingObject:(id)arg1 keyPath:(id)arg2 withProxyObtainBlock:(dispatch_block_t)arg3;
@property(retain) id observedObject; // @synthesize observedObject=_observedObject;
@property(copy) NSString *kvoNotifyKeyPath; // @synthesize kvoNotifyKeyPath=_kvoNotifyKeyPath;
@property(retain) id kvoNotifyObject; // @synthesize kvoNotifyObject=_kvoNotifyObject;
@property(copy) dispatch_block_t proxyDiscardBlock; // @synthesize proxyDiscardBlock=_proxyDiscardBlock;
@property(copy) dispatch_block_t proxyObtainBlock; // @synthesize proxyObtainBlock=_proxyObtainBlock;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)primitiveInvalidate;
- (id)proxyForObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
@property(readonly) NSString *observedKeyPath;
- (id)init;
- (id)initWithObservedObject:(id)arg1 keyPath:(id)arg2 withProxyObtainBlock:(dispatch_block_t)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

