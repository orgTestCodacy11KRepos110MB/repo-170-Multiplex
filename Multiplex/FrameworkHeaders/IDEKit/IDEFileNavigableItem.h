//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDENavigableItem.h>

@class DVTFileDataType, DVTObservingToken, DVTWeakInterposer, NSImage, NSURL;

@interface IDEFileNavigableItem : IDENavigableItem
{
    DVTWeakInterposer *_document_dvtWeakInterposer;
    NSImage *_image;
    DVTObservingToken *_documentObservingToken;
    BOOL _invalidatingTopLevelObjects;
}

- (id)textColor;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (BOOL)isDocumentNavigableItem;
- (id)structureProvidingEditorDocument;
- (id)_editorDocument;
- (void)_updateEditorDocument:(id)arg1;
- (void)invalidateChildItems;
- (void)_documentDidClose;
- (void)primitiveInvalidate;
- (id)contentDocumentLocation;
@property(readonly) DVTFileDataType *documentType;
@property(readonly) NSURL *fileURL;
- (id)image;
- (void)invalidateImage;
- (void)updateImage;
- (id)newImage;
- (void)setDocument:(id)arg1;
- (id)document;

@end

