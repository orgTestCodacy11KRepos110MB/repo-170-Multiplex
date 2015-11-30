//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "DVTLayoutView_ML-Protocol.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDEInspectorLayoutGroup, NSString;

@interface IDEInspectorContentView : DVTLayoutView_ML <DVTInvalidation>
{
    BOOL _drawBackground;
    IDEInspectorLayoutGroup *_layoutStack;
}

+ (void)initialize;
@property(nonatomic) BOOL drawBackground; // @synthesize drawBackground=_drawBackground;
@property(readonly, nonatomic) IDEInspectorLayoutGroup *layoutStack; // @synthesize layoutStack=_layoutStack;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSectionBordersInRect:(struct CGRect)arg1;
- (void)drawSectionBackgroundsInRect:(struct CGRect)arg1;
- (void)enumerateProperties:(dispatch_block_t)arg1;
- (void)enumeratePropertiesInLayoutGroup:(id)arg1 outStop:(char *)arg2 withBlock:(dispatch_block_t)arg3;
- (void)visualElementDidTriggerRefresh:(id)arg1;
- (void)didUninstallLayoutGroup:(id)arg1;
- (void)didInstallLayoutGroup:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (BOOL)isFlipped;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1 layoutStack:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
