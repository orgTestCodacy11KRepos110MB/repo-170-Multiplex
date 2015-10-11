//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class NSBezierPath, NSColor, NSImage;

@interface DVTFlatProgressIndicator : NSProgressIndicator
{
    double _startAnimationTime;
    NSImage *_indeterminateProgressBackground;
    NSColor *_fillAndStrokeColor;
    NSBezierPath *_progressIndicatorPath;
}

@property(retain, nonatomic) NSBezierPath *progressIndicatorPath; // @synthesize progressIndicatorPath=_progressIndicatorPath;
@property(retain, nonatomic) NSColor *fillAndStrokeColor; // @synthesize fillAndStrokeColor=_fillAndStrokeColor;
@property(retain, nonatomic) NSImage *indeterminateProgressBackground; // @synthesize indeterminateProgressBackground=_indeterminateProgressBackground;
- (id)_stripeOfSize:(struct CGSize)arg1;
@property(readonly) double indeterminateOffset;
@property(readonly) struct CGRect determinateProgressRect;
- (void)drawRect:(struct CGRect)arg1;
- (void)startAnimation:(id)arg1;
- (void)setIndeterminate:(BOOL)arg1;
- (void)_resetSizeDependentProperties;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end

