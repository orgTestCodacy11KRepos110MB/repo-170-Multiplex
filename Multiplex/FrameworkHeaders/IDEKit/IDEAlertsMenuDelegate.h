//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@interface IDEAlertsMenuDelegate : NSObject
{
}

+ (void)registerMenuKeyBindingsToMenuKeyBindingSet:(id)arg1;
+ (id)_findMenuItemTitled:(id)arg1 inMenu:(id)arg2;
- (void)menuWillOpen:(id)arg1;
- (void)buildMenu:(id)arg1;
- (void)_buildMenu:(id)arg1;
- (void)_keyBindingDidChangeKeyboardShortcuts:(id)arg1;
- (void)performAlertEvent:(id)arg1;
- (void)editAlerts:(id)arg1;
- (id)init;

@end

