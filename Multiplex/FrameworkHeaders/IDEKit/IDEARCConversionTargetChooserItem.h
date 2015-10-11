//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class NSArray, NSImage, NSMutableArray, NSString;

@interface IDEARCConversionTargetChooserItem : NSObject
{
    id _representedObject;
    IDEARCConversionTargetChooserItem *_parentItem;
    NSMutableArray *_childItems;
}

+ (id)keyPathsForValuesAffectingArrangedChildItems;
@property(retain) IDEARCConversionTargetChooserItem *parentItem; // @synthesize parentItem=_parentItem;
@property(readonly) id representedObject; // @synthesize representedObject=_representedObject;
- (void)removeObjectFromChildItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildItemsAtIndex:(unsigned long long)arg2;
- (id)_childItems;
@property(readonly, copy) NSMutableArray *mutableChildItems;
@property(readonly, copy) NSArray *arrangedChildItems;
@property(readonly, copy) NSArray *childItems;
@property(readonly) double rowHeight;
@property(readonly, copy) NSString *warningMessage;
@property(readonly, copy) NSImage *iconImage;
@property long long state;
@property(readonly, getter=isEnabled) BOOL enabled;
@property(readonly, copy) NSString *subtitle;
@property(readonly, copy) NSString *title;
- (id)initWithRepresentedObject:(id)arg1;

@end

