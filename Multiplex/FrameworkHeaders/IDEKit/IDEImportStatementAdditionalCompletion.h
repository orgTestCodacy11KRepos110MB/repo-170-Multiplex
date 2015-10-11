//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "DVTAdditionalTextCompletion-Protocol.h"

@class DVTFilePath, NSString;

@interface IDEImportStatementAdditionalCompletion : NSObject <DVTAdditionalTextCompletion>
{
    NSString *_importString;
    BOOL _usesIncludeInsteadOfImport;
    DVTFilePath *_headerFilePath;
    id  _autoImportable;
    unsigned long long _completionLocation;
    unsigned long long _headerVisibility;
    NSString *_optimalBuildableProductName;
}

@property(retain, nonatomic) NSString *optimalBuildableProductName; // @synthesize optimalBuildableProductName=_optimalBuildableProductName;
@property(nonatomic) unsigned long long headerVisibility; // @synthesize headerVisibility=_headerVisibility;
@property(readonly) unsigned long long completionLocation; // @synthesize completionLocation=_completionLocation;
@property(retain, nonatomic) id  autoImportable; // @synthesize autoImportable=_autoImportable;
@property(readonly, nonatomic) DVTFilePath *headerFilePath; // @synthesize headerFilePath=_headerFilePath;
@property(readonly, copy) NSString *completionText;
- (id)importStatement;
- (id)frameworkStyleImportStatementForHeaderAtFilePath:(id)arg1;
- (id)initWithAutoImportable:(id)arg1 inContext:(id)arg2 headerVisibility:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

