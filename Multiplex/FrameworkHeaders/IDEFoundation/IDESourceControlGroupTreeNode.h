//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEFoundation/IDESourceControlTreeNode.h>

@class NSArray, NSMutableArray;

@interface IDESourceControlGroupTreeNode : IDESourceControlTreeNode
{
}

+ (id)keyPathsForValuesAffectingSparseChildren;
- (id)navigableItem_groupIdentifier;
- (id)navigableItem_image;
@property(readonly) NSMutableArray *mutableChildren;
@property(copy) NSArray *children;
- (id)sparseChildren;
- (BOOL)navigableItem_isLeaf;

@end

