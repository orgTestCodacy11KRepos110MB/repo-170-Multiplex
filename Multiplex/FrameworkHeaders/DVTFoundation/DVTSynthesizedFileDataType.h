//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <DVTFoundation/DVTFileDataType.h>

@class DVTPrimitiveFileDataType, NSSet;

@interface DVTSynthesizedFileDataType : DVTFileDataType
{
    DVTPrimitiveFileDataType *_primaryType;
    NSSet *_secondaryTypes;
}

- (id)description;
- (id)stringRepresentation;
- (id)secondaryFileDataTypes;
- (id)primaryFileDataType;
- (id)init;
- (id)initWithPrimaryType:(id)arg1 secondaryTypes:(id)arg2;

@end

