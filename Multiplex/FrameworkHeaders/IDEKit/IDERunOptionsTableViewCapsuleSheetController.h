//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEViewController.h>

#import "DVTTableViewDelegate-Protocol.h"
#import "IDECapsuleViewController-Protocol.h"
#import "IDECapsuleViewDelegate-Protocol.h"

@class DVTBorderedView, DVTTableView, NSArrayController, NSImage, NSMutableArray, NSString;

@interface IDERunOptionsTableViewCapsuleSheetController : IDEViewController <IDECapsuleViewDelegate, IDECapsuleViewController, DVTTableViewDelegate>
{
    NSArrayController *_arrayController;
    DVTTableView *_tableView;
    DVTBorderedView *_tableBorder;
    NSMutableArray *_tableViewContent;
    BOOL _arrayControllerCanRemoveItems;
    BOOL _canRemoveItems;
    BOOL _enabled;
}

+ (id)keyPathsForValuesAffectingCanRemoveItems;
+ (id)keyPathsForValuesAffectingCanAddItems;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property BOOL canRemoveItems; // @synthesize canRemoveItems=_canRemoveItems;
@property BOOL arrayControllerCanRemoveItems; // @synthesize arrayControllerCanRemoveItems=_arrayControllerCanRemoveItems;
@property(retain, nonatomic) NSMutableArray *tableViewContent; // @synthesize tableViewContent=_tableViewContent;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (double)capsuleView:(id)arg1 preferredContentViewWidthForCapsuleWidth:(double)arg2;
- (BOOL)shouldDrawBorderBelowHeaderForCapsuleView:(id)arg1;
@property BOOL canAddItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canRemove;
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
@property(readonly, copy) NSString *titleForDisplay;
- (void)_resizeView;
@property(readonly) NSString *pasteBoardType;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canSelect;
@property(readonly) BOOL canUndisclose;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;

@end

