//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTXMLUnarchiving-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface IDEBreakpointAction : NSObject <DVTXMLUnarchiving>
{
    NSArray *_expressions;
    BOOL _displayable;
    NSString *_displayName;
}

+ (id)_expressionsInString:(id)arg1;
+ (id)propertiesAffectingPersistenceState;
+ (id)_replace:(id)arg1 with:(id)arg2 inString:(id)arg3;
+ (id)_expandMacrosInString:(id)arg1 usingBreakpoint:(id)arg2;
+ (void)initialize;
@property(getter=isDisplayable) BOOL displayable; // @synthesize displayable=_displayable;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)_expandExpressionsInString:(id)arg1;
- (void)extractAndSetExpressionsFromString:(id)arg1;
- (void)extractAndAddExpressionsFromString:(id)arg1;
- (void)clearExpressions;
- (id)expandExpressionsAndMacrosInString:(id)arg1 usingBreakpoint:(id)arg2;
- (BOOL)haveExpressionsBeenEvaluated;
- (void)resetExpressionResults;
- (void)performActionUsingContext:(id)arg1 andBreakpoint:(id)arg2;
- (void)_breakpointActionCommonInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSArray *expressions; // @dynamic expressions;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableExpressions; // @dynamic mutableExpressions;
@property(readonly) Class superclass;

@end
