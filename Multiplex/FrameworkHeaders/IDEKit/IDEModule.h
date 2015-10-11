//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface IDEModule : NSObject
{
    NSString *_name;
    NSDictionary *_docParams;
    NSMutableDictionary *_submodulesByName;
}

- (id)description;
- (id)geniusResult_identifierForManualCategory;
- (id)geniusResult_identifierForGeniusCategory;
- (id)navigableItem_contentDocumentLocation;
- (id)navigableItem_documentType;
- (id)navigableItem_name;
- (id)submoduleWithName:(id)arg1 documentParameters:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)submodules;
- (BOOL)isLeaf;
- (void)setDocumentParameters:(id)arg1;
- (id)documentParameters;
- (id)documentType;
- (id)name;
- (id)init;
- (id)initWithName:(id)arg1 documentParameters:(id)arg2;

@end

