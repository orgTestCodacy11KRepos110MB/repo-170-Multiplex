//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class NSString;

@interface IDEInspectorTextEnumerationOption : NSObject
{
    BOOL _hidden;
    NSString *_title;
    id _value;
}

@property(readonly) id value; // @synthesize value=_value;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
- (id)initWithXMLElement:(id)arg1 targettingInspectorProperty:(id)arg2;

@end

