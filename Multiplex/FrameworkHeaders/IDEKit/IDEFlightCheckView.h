//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "DVTLayoutView_ML-Protocol.h"

#import "DVTInvalidation-Protocol.h"

@class DVTDelayedInvocation, DVTStackBacktrace, NSColor, NSError, NSImageView, NSString, NSTextView;

@interface IDEFlightCheckView : DVTLayoutView_ML <DVTInvalidation>
{
    DVTDelayedInvocation *_stateUpdatingDelayedInvocation;
    int _state;
    int _style;
    id  _flightCheck;
    NSError *_errorForTooltip;
    NSTextView *_textView;
    NSImageView *_imageView;
    NSColor *_textColor;
}

+ (void)initialize;
@property int style; // @synthesize style=_style;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSError *errorForTooltip; // @synthesize errorForTooltip=_errorForTooltip;
@property(readonly, nonatomic) id  flightCheck; // @synthesize flightCheck=_flightCheck;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (id)errorImage;
- (id)unfinishedImage;
- (id)finishedImage;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)updateState;
- (void)flightCheckStateChanged;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1 flightCheck:(id)arg2 style:(int)arg3 textColor:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

