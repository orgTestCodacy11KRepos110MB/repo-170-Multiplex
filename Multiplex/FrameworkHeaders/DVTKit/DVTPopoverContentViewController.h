//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <DVTKit/DVTViewController.h>


@class NSPopover, NSString;

@interface DVTPopoverContentViewController : DVTViewController <NSPopoverDelegate>
{
    dispatch_block_t _didCloseBlock;
    NSPopover *_popover;
}

+ (id)configuredPopoverWithViewController:(id)arg1 didCloseBlock:(dispatch_block_t)arg2;
- (void)_popoverDidClose:(id)arg1;
- (void)_popoverWillClose:(id)arg1;
- (void)_setDidCloseBlock:(dispatch_block_t)arg1;
- (void)_setPopover:(id)arg1;
- (void)primitiveInvalidate;
- (void)closePopover:(id)arg1;
- (id)popover;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

