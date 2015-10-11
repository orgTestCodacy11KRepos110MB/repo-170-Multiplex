//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class DVTFilePath, IDEArchive, IDEArchivePackager, NSString;

@interface IDEArchivedContent : NSObject
{
    IDEArchive *_archive;
}

+ (BOOL)fillInfoDictionary:(id)arg1 forContentAtPath:(id)arg2 inArchiveProductsDirectory:(id)arg3;
+ (id)soleArchivedContentRelativePathInDirectory:(id)arg1;
+ (id)archivedContentPathPlistKey;
+ (id)archivedContentPropertiesPlistKey;
+ (id)keyPathsForValuesAffectingContentPath;
+ (id)_archivedContentPathForArchive:(id)arg1;
+ (id)_archivedContentShortBundleVersionStringForArchive:(id)arg1;
+ (id)_archivedContentBundleVersionForArchive:(id)arg1;
+ (id)_archivedContentBundleIdentifierForArchive:(id)arg1;
+ (id)archivedContentInfoDictForArchive:(id)arg1;
+ (BOOL)validArchivedContentInfoInArchive:(id)arg1;
+ (id)archivedContentWithArchive:(id)arg1;
+ (BOOL)fillArchivedContentInfoInArchiveInfoDictionary:(id)arg1 forContentInArchiveProductsDirectory:(id)arg2;
+ (id)contentClasses;
@property(readonly) IDEArchive *archive; // @synthesize archive=_archive;
- (long long)autodetectedFormatForPackaging;
- (BOOL)supportsPackagingAsFormat:(long long)arg1;
@property(readonly) IDEArchivePackager *packager;
@property(readonly) NSString *teamIdentifier;
@property(readonly) NSString *shortBundleVersionString;
@property(readonly) NSString *bundleVersion;
@property(readonly) NSString *bundleIdentifier;
@property(readonly) DVTFilePath *contentPath;
- (id)initWithArchive:(id)arg1;

@end

