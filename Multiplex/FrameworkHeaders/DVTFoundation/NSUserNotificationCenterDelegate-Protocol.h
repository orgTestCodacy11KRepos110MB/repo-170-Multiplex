//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class NSUserNotification, NSUserNotificationCenter;

@protocol NSUserNotificationCenterDelegate <NSObject>

@optional
- (BOOL)userNotificationCenter:(NSUserNotificationCenter *)arg1 shouldPresentNotification:(NSUserNotification *)arg2;
- (void)userNotificationCenter:(NSUserNotificationCenter *)arg1 didActivateNotification:(NSUserNotification *)arg2;
- (void)userNotificationCenter:(NSUserNotificationCenter *)arg1 didDeliverNotification:(NSUserNotification *)arg2;
@end

