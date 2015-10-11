//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTInvalidation-Protocol.h"

@class DVTGradientImageButton, DVTObservingToken, DVTStackBacktrace, IDEEditorContext, NSString;

@interface IDEEditorReadOnlyIndicatorController : NSObject <DVTInvalidation>
{
    IDEEditorContext *_editorContext;
    DVTGradientImageButton *_indicatorView;
    BOOL _showReadOnlyIndicator;
    DVTObservingToken *_documentStatusObserver;
    int _indicatorStatus;
}

+ (void)initialize;
@property BOOL showReadOnlyIndicator; // @synthesize showReadOnlyIndicator=_showReadOnlyIndicator;
- (void)_updateReadOnlyIndicator;
- (void)primitiveInvalidate;
- (id)readOnlyIndicatorView;
- (id)initWithEditorContext:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

