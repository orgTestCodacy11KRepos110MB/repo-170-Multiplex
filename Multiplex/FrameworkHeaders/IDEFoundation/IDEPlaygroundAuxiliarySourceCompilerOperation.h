//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import "DVTOperation-Protocol.h"

@class DVTFilePath, DVTSDK, DVTTask, IDEActivityLogSection, IDEPlaygroundAuxiliarySourceFrameworkLocation, NSArray, NSDate, NSSet, NSString;

@interface IDEPlaygroundAuxiliarySourceCompilerOperation : DVTOperation
{
    BOOL _compilerLoggingEnabled;
    NSDate *_compilationDate;
    IDEPlaygroundAuxiliarySourceFrameworkLocation *_frameworkLocation;
    IDEActivityLogSection *_activityLogSection;
    DVTFilePath *__sourcesDirectory;
    DVTFilePath *__resourcesDirectory;
    NSSet *__sourcesDirectorySwiftFiles;
    DVTSDK *__sdk;
    NSString *__target;
    DVTTask *_compilerTask;
}

+ (id)logAspect;
@property(retain) DVTTask *compilerTask; // @synthesize compilerTask=_compilerTask;
@property(readonly, copy) NSString *_target; // @synthesize _target=__target;
@property(readonly) DVTSDK *_sdk; // @synthesize _sdk=__sdk;
@property(readonly, copy) NSSet *_sourcesDirectorySwiftFiles; // @synthesize _sourcesDirectorySwiftFiles=__sourcesDirectorySwiftFiles;
@property(readonly) DVTFilePath *_resourcesDirectory; // @synthesize _resourcesDirectory=__resourcesDirectory;
@property(readonly) DVTFilePath *_sourcesDirectory; // @synthesize _sourcesDirectory=__sourcesDirectory;
@property(retain) IDEActivityLogSection *activityLogSection; // @synthesize activityLogSection=_activityLogSection;
@property(readonly) IDEPlaygroundAuxiliarySourceFrameworkLocation *frameworkLocation; // @synthesize frameworkLocation=_frameworkLocation;
@property(retain) NSDate *compilationDate; // @synthesize compilationDate=_compilationDate;
@property(readonly) NSArray *basicBuildFlags;
- (void)main;
- (void)cancel;
- (id)initWithSourcesDirectory:(id)arg1 resourcesDirectory:(id)arg2 frameworkLocation:(id)arg3 swiftSourceFiles:(id)arg4 sdk:(id)arg5 target:(id)arg6;

@end

