//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDEAlertViewController.h>

@class NSPopUpButton;

@interface IDEShowNavigatorAlertViewController : IDEAlertViewController
{
    NSPopUpButton *_navigatorPopUpButton;
}

@property(retain) NSPopUpButton *navigatorPopUpButton; // @synthesize navigatorPopUpButton=_navigatorPopUpButton;
- (void)selectNavigator:(id)arg1;
- (void)loadView;
- (void)_synchronizePopUpButton;
- (void)setAlert:(id)arg1;

@end
