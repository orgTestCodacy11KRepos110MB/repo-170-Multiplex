//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEAssistantContext.h>

@class DVTObservingToken, IDEContainer, NSArray, NSString;

@interface IDEStructureEditingAssistantContext : IDEAssistantContext
{
    DVTObservingToken *_targetContainerValidObservationToken;
    BOOL _skipAssistant;
    BOOL _useMakefileProject;
    NSString *_assistantIdentifier;
    dispatch_block_t _acceptBlock;
    IDEContainer *_targetContainer;
    unsigned long long _inputDragOperation;
    NSArray *_fileURLs;
    NSArray *_makefileURLs;
    NSArray *_templates;
    unsigned long long _dragOperation;
}

@property unsigned long long dragOperation; // @synthesize dragOperation=_dragOperation;
@property(copy) NSArray *templates; // @synthesize templates=_templates;
@property BOOL useMakefileProject; // @synthesize useMakefileProject=_useMakefileProject;
@property(copy) NSArray *makefileURLs; // @synthesize makefileURLs=_makefileURLs;
@property(copy, nonatomic) NSArray *fileURLs; // @synthesize fileURLs=_fileURLs;
@property unsigned long long inputDragOperation; // @synthesize inputDragOperation=_inputDragOperation;
@property(retain, nonatomic) IDEContainer *targetContainer; // @synthesize targetContainer=_targetContainer;
@property(copy) dispatch_block_t acceptBlock; // @synthesize acceptBlock=_acceptBlock;
@property BOOL skipAssistant; // @synthesize skipAssistant=_skipAssistant;
@property(copy) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
- (void)takeInputFromDraggingInfo:(id)arg1;
- (void)_addItemsFromDraggingInfo:(id)arg1;
- (void)_configureForOnlyDraggingProjects;
- (id)_makefilesContainedInFileURLs:(id)arg1;
- (void)dealloc;
- (id)init;

@end

