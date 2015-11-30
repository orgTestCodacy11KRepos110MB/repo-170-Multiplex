//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

#import "IDESourceControlFilePickerDelegate-Protocol.h"

@class DVTBorderedView, DVTSourceControlPathLocation, DVTSourceControlRepository, IDESourceControlFilePickerViewController, NSButton, NSString, NSTextField, NSWindow;

@interface IDESourceControlFilePickerWindowController : NSWindowController <IDESourceControlFilePickerDelegate>
{
    DVTBorderedView *_filePickerBorderedView;
    NSTextField *_messageTextField;
    NSButton *_doneButton;
    NSWindow *_parentWindow;
    IDESourceControlFilePickerViewController *_filePickerViewController;
    DVTSourceControlRepository *_repository;
    DVTSourceControlPathLocation *_expandedLocation;
    NSString *_messageText;
}

@property(copy) NSString *messageText; // @synthesize messageText=_messageText;
@property(copy) DVTSourceControlPathLocation *expandedLocation; // @synthesize expandedLocation=_expandedLocation;
@property(retain) DVTSourceControlRepository *repository; // @synthesize repository=_repository;
- (void)filePickerSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)cancel:(id)arg1;
- (void)choose:(id)arg1;
- (void)beginSheetForWindow:(id)arg1 completionHandler:(dispatch_block_t)arg2;
- (void)windowDidLoad;
- (void)displayError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
