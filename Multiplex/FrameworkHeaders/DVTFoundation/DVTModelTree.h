//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTInvalidation-Protocol.h"
#import "DVTModelObject-Protocol.h"

@class DVTModelObjectGraph, DVTModelTreeNode, DVTStackBacktrace, NSString;

@interface DVTModelTree : NSObject <DVTModelObject, DVTInvalidation>
{
    DVTModelTreeNode *_rootNode;
    DVTModelObjectGraph *_objectGraph;
}

+ (BOOL)automaticallyNotifiesObserversOfSubclass_rootNode;
+ (void)synthesizeCoverAPIWithKeyForRootNode:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfObjectGraph;
+ (void)initialize;
@property(retain, nonatomic) DVTModelObjectGraph *objectGraph; // @synthesize objectGraph=_objectGraph;
@property(readonly) DVTModelTreeNode *subclass_rootNode; // @synthesize subclass_rootNode=_rootNode;
- (id)subclass_createRootNode;
- (void)_recursivelyMoveNode:(id)arg1 fromObjectGraph:(id)arg2 toObjectGraph:(id)arg3;
- (void)primitiveInvalidate;
- (id)initWithObjectGraph:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

