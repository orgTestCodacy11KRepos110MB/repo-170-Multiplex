//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <IDEKit/IDELaunchActionOptionViewController.h>

@class IDEScheme, NSMenu;

@interface IDEOpenGLESOptionsController : IDELaunchActionOptionViewController
{
    NSMenu *_menu;
    IDEScheme *_scheme;
}

+ (BOOL)availableForScheme:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithScheme:(id)arg1;

@end

