//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h"
#import "IDERunDestinationRepresentedObject-Protocol.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDERunDestination, NSImage, NSString;

@interface IDERunDestinationWithName : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, IDERunDestinationRepresentedObject>
{
    BOOL _isWatchDestination;
    IDERunDestination *_runDestination;
    NSString *_name;
    NSString *_navigableName;
}

+ (id)keyPathsForValuesAffectingNavigableItem_toolTip;
+ (id)keyPathsForValuesAffectingNavigableItem_image;
@property(copy) NSString *navigableName; // @synthesize navigableName=_navigableName;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) BOOL isWatchDestination; // @synthesize isWatchDestination=_isWatchDestination;
@property(readonly) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
@property(readonly, copy) NSString *description;
- (id)initWithRunDestination:(id)arg1 name:(id)arg2 isWatchDestination:(BOOL)arg3;
- (id)initWithRunDestination:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) Class superclass;

@end

