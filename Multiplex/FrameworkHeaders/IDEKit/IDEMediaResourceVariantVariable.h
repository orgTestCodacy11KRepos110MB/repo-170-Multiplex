//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"


@class NSRegularExpression, NSSet, NSString;

@interface IDEMediaResourceVariantVariable : NSObject <NSCopying>
{
    dispatch_block_t _searchValuesBlock;
    dispatch_block_t _displayStringForValueBlock;
    dispatch_block_t _matchesValueBlock;
    NSString *_displayName;
    NSRegularExpression *_expression;
    long long _valueStartOffset;
    long long _valueEndOffset;
    NSSet *_validValues;
}

+ (id)OSXImageScaleFactorVariantVariable;
+ (id)iOSScreenWidthVariantVariable;
+ (id)iOSHeightClassVariantVariable;
+ (id)iOSWidthClassVariantVariable;
+ (id)iOSIdiomVariantVariable;
+ (id)iOSImageScaleFactorVariantVariable;
+ (id)iOSImageResolutionVariantVariable;
@property(readonly, copy, nonatomic) NSSet *validValues; // @synthesize validValues=_validValues;
@property(readonly, nonatomic) long long valueEndOffset; // @synthesize valueEndOffset=_valueEndOffset;
@property(readonly, nonatomic) long long valueStartOffset; // @synthesize valueStartOffset=_valueStartOffset;
@property(readonly, copy, nonatomic) NSRegularExpression *expression; // @synthesize expression=_expression;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (BOOL)value:(id)arg1 matches:(id)arg2;
- (id)description;
- (id)searchValuesForValue:(id)arg1;
- (id)displayStringForValue:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToVariable:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisplayName:(id)arg1 pattern:(id)arg2 valueStartOffset:(long long)arg3 valueEndOffset:(long long)arg4 validValues:(id)arg5 searchValuesBlock:(dispatch_block_t)arg6 displayStringForValueBlock:(dispatch_block_t)arg7 matchesValueBlock:(dispatch_block_t)arg8;
- (id)initWithDisplayName:(id)arg1 pattern:(id)arg2 valueStartOffset:(long long)arg3 valueEndOffset:(long long)arg4 validValues:(id)arg5 searchValuesBlock:(dispatch_block_t)arg6 displayStringForValueBlock:(dispatch_block_t)arg7;

@end

