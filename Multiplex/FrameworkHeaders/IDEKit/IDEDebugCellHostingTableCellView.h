//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class NSCell, NSControl;

@interface IDEDebugCellHostingTableCellView : NSTableCellView
{
    NSCell *_hostedCell;
    NSControl *_cellHostingControl;
}

+ (void)registerNibWithOutlineView:(id)arg1 forIdentifier:(id)arg2;
@property(retain) NSControl *cellHostingControl; // @synthesize cellHostingControl=_cellHostingControl;
@property(retain, nonatomic) NSCell *hostedCell; // @synthesize hostedCell=_hostedCell;
- (void)_ideDebugCellHostingTableCellViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

