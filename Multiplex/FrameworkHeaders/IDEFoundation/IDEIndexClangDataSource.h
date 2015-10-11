//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEFoundation/IDEIndexDataSource.h>

@class IDEIndexClangTranslationUnit, IDEIndexNewFile, IDEIndexNewMainFile, IDEIndexingJob, NSArray, NSMutableDictionary, NSString;

@interface IDEIndexClangDataSource : IDEIndexDataSource
{
    IDEIndexingJob *_job;
    NSMutableDictionary *_sourcesToNewFiles;
    IDEIndexNewMainFile *_topLevelFile;
    IDEIndexNewFile *_topLevelSourceFile;
    NSArray *_astArgs;
    NSString *_workingDirectory;
    BOOL _hasCpp;
    BOOL _isModuleFile;
    IDEIndexClangTranslationUnit *_translationUnit;
}

+ (id)translationUnitForPCHFile:(id)arg1 arguments:(id)arg2 session:(id)arg3 create:(BOOL)arg4;
+ (void)logPCHFailure:(id)arg1;
+ (id)appendNewArgument:(id)arg1 inArray:(id)arg2;
+ (id)substituteNewArgument:(id)arg1 forOldArgument:(id)arg2 inArray:(id)arg3;
+ (id)addHeaderMapInclude:(id)arg1 forBuildProductsDir:(id)arg2 useSpellChecking:(BOOL)arg3 toArguments:(id)arg4;
+ (id)canonicalPathForPath:(id)arg1 index:(id)arg2 arguments:(id)arg3 workingDirectory:(id *)arg4;
+ (id)workingDirFromArgs:(id)arg1;
+ (void)logMemoryUsage:(struct CXTranslationUnitImpl *)arg1 forFile:(id)arg2;
+ (BOOL)loggingMemoryUsage;
+ (id)resolutionForName:(id)arg1 kind:(id)arg2 containerName:(id)arg3;
+ (id)dataSourceVersion;
+ (BOOL)displayDiagnostics;
+ (long long)timingMode;
+ (void)initialize;
@property(retain, nonatomic) IDEIndexClangTranslationUnit *translationUnit; // @synthesize translationUnit=_translationUnit;
@property(readonly, nonatomic) BOOL hasCpp; // @synthesize hasCpp=_hasCpp;
@property(readonly, nonatomic) IDEIndexNewFile *topLevelSourceFile; // @synthesize topLevelSourceFile=_topLevelSourceFile;
@property(readonly, nonatomic) IDEIndexNewMainFile *topLevelFile; // @synthesize topLevelFile=_topLevelFile;
@property(readonly, nonatomic) NSMutableDictionary *sourcesToNewFiles; // @synthesize sourcesToNewFiles=_sourcesToNewFiles;
@property(readonly, nonatomic) IDEIndexingJob *job; // @synthesize job=_job;
- (int)indexOptionFlags;
- (CDStruct_9b0a347d *)indexerCallbacks;
- (BOOL)generateDataForJob:(id)arg1;
- (BOOL)_addTopLevelFile:(id)arg1 includePath:(id)arg2;
- (id)_canonicalPathForPath:(id)arg1;
- (id)initWithSource:(id)arg1;

@end

