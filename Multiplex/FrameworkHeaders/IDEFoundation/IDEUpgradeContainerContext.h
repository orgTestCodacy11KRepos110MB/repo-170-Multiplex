//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEFoundation/IDEUpgradeContext.h>

@class IDEContainer;

@interface IDEUpgradeContainerContext : IDEUpgradeContext
{
    IDEContainer *_container;
}

@property(readonly) IDEContainer *container; // @synthesize container=_container;
- (id)description;
- (id)initWithContainer:(id)arg1;

@end

