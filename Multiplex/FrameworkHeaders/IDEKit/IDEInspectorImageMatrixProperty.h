//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEInspectorEnumerationProperty.h>

@class IDEInspectorKeyPath, IDEInspectorResizableMatrix;

@interface IDEInspectorImageMatrixProperty : IDEInspectorEnumerationProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorResizableMatrix *_matrixView;
}

@property(retain, nonatomic) IDEInspectorResizableMatrix *matrixView; // @synthesize matrixView=_matrixView;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)configureEnumeratedOptions;
- (void)userDidChangeValue:(id)arg1;
- (double)baseline;

@end

