//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <DVTFoundation/DVTBlockScanner.h>

@class NSDictionary;

@interface DVTHTMLEntityScanner : DVTBlockScanner
{
    NSDictionary *_entityMap;
}

- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(struct _NSRange)arg5 dirtyRange:(struct _NSRange *)arg6;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end

