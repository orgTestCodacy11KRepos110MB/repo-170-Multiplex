//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class NSFormatter, NSString;

@interface DVTStepperTextFieldFormatter : NSNumberFormatter
{
    NSFormatter *_wrappedFormatter;
    NSString *_prefix;
    NSString *_suffix;
}

+ (id)_labelAttributes;
@property(copy) NSString *suffix; // @synthesize suffix=_suffix;
@property(copy) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy) NSFormatter *wrappedFormatter; // @synthesize wrappedFormatter=_wrappedFormatter;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (id)init;

@end

