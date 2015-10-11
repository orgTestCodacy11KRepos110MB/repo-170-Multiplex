//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class NSMutableArray;

@interface IDESourceControlWorkingTreeNavigableItem : IDEKeyDrivenNavigableItem
{
    NSMutableArray *_computedChildItems;
}

+ (id)keyPathsForValuesAffectingProgress;
+ (id)keyPathsForValuesAffectingName;
- (id)childRepresentedObjects;
- (void)idesc_setChildRepresentedObjects:(id)arg1;
- (BOOL)isLeaf;
- (id)progress;
- (id)name;

@end

