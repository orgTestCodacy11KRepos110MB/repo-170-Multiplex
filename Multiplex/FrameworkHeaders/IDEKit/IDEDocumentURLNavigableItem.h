//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEBaseDocumentNavigableItem.h>

@class DVTDocumentLocation;

@interface IDEDocumentURLNavigableItem : IDEBaseDocumentNavigableItem
{
    DVTDocumentLocation *_contentDocumentLocation;
}

- (id)fileURL;
- (id)contentDocumentLocation;
- (id)documentType;
- (id)name;
- (id)newImage;
- (id)_documentURL;
- (id)initWithRepresentedObject:(id)arg1;

@end

