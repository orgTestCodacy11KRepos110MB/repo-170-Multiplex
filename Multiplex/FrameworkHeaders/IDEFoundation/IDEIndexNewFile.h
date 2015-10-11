//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "IDEIndexNewFileBase-Protocol.h"

@class DVTFilePath, IDEIndexDBFactory, IDEIndexNewMainFile, NSDate, NSMutableArray, NSString, NSURL;

@interface IDEIndexNewFile : NSObject <IDEIndexNewFileBase>
{
    DVTFilePath *_path;
    NSURL *_moduleURL;
    NSDate *_modified;
    IDEIndexNewFile *_includer;
    long long _fileId;
    long long _groupId;
    char **_vectorSegments;
    int _nVectorSegments;
    int _vectorBytesRemaining;
    NSMutableArray *_containers;
    IDEIndexDBFactory *_symbolFactory;
    IDEIndexDBFactory *_referenceFactory;
    BOOL _hasSkippedBodies;
    BOOL _hasUnskippedBodies;
    void *_digestContext;
    void *_digestContext_inBody;
    NSString *_signature;
    NSString *_signature_inBody;
    IDEIndexNewMainFile *_mainFile;
}

+ (void)poolFree:(void *)arg1;
+ (void *)poolMalloc:(unsigned long long)arg1;
+ (void)_pushSegment:(void *)arg1;
+ (void)_poolDelayedFree;
+ (void *)_popSegment;
+ (void)initialize;
@property(readonly, nonatomic) BOOL hasUnskippedBodies; // @synthesize hasUnskippedBodies=_hasUnskippedBodies;
@property(readonly, nonatomic) BOOL hasSkippedBodies; // @synthesize hasSkippedBodies=_hasSkippedBodies;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long fileId; // @synthesize fileId=_fileId;
@property(readonly, nonatomic) IDEIndexNewMainFile *mainFile; // @synthesize mainFile=_mainFile;
@property(readonly, nonatomic) NSDate *modified; // @synthesize modified=_modified;
@property(retain, nonatomic) NSURL *moduleURL; // @synthesize moduleURL=_moduleURL;
@property(readonly, nonatomic) DVTFilePath *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *signature_inBody;
@property(readonly, nonatomic) NSString *signature;
- (id)newFileWithPath:(id)arg1 modified:(id)arg2;
- (id)newSymbolWithName:(id)arg1 kind:(id)arg2 role:(int)arg3 language:(id)arg4 resolution:(id)arg5 lineNumber:(long long)arg6 column:(long long)arg7 locator:(id)arg8 receiver:(id)arg9 completionString:(void *)arg10 container:(id)arg11;
- (void)addSymbolWithName:(id)arg1 kind:(id)arg2 role:(int)arg3 language:(id)arg4 resolution:(id)arg5 lineNumber:(long long)arg6 column:(long long)arg7 locator:(id)arg8 receiver:(id)arg9 completionString:(void *)arg10 container:(id)arg11;
- (id)newSymbolWithCName:(const char *)arg1 kind:(id)arg2 role:(int)arg3 language:(id)arg4 resolution:(const char *)arg5 lineNumber:(long long)arg6 column:(long long)arg7 locator:(id)arg8 receiver:(const char *)arg9 completionString:(void *)arg10 container:(id)arg11;
- (void)addSymbolWithCName:(const char *)arg1 kind:(id)arg2 role:(int)arg3 language:(id)arg4 resolution:(const char *)arg5 lineNumber:(long long)arg6 column:(long long)arg7 locator:(id)arg8 receiver:(const char *)arg9 completionString:(void *)arg10 container:(id)arg11;
- (void)createSymbolWithName:(const char *)arg1 kind:(id)arg2 role:(int)arg3 language:(id)arg4 resolution:(const char *)arg5 lineNumber:(long long)arg6 column:(long long)arg7 locator:(id)arg8 receiver:(const char *)arg9 completionString:(void *)arg10 container:(id)arg11 pSymbol:(id *)arg12;
- (id)description;
- (void)freeMemory;
@property(readonly, nonatomic) BOOL hasBodies;
- (void)willAddBodySkipped:(BOOL)arg1;
- (void)dontSubmitSymbols;
- (long long)submitSymbolsTo:(id)arg1 nReferences:(long long *)arg2;
- (long long)realSymbolIdForId:(long long)arg1;
@property(readonly, nonatomic) long long realGroupId;
@property(readonly, nonatomic) long long realFileId;
@property __weak IDEIndexNewFile *includer;
- (void)dealloc;
- (id)initWithPath:(id)arg1 modified:(id)arg2;

@end

