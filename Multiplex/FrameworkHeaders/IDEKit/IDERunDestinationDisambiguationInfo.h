//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"


@class DVTSDK, NSString;

@interface IDERunDestinationDisambiguationInfo : NSObject <NSCopying>
{
    NSString *_deviceOperatingSystemVersion;
    NSString *_deviceOperatingSystemBuild;
    NSString *_deviceModelName;
    NSString *_deviceIdentifier;
    NSString *_targetArchitecture;
    DVTSDK *_targetSDK;
}

@property(readonly) DVTSDK *targetSDK; // @synthesize targetSDK=_targetSDK;
@property(readonly) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(readonly) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly) NSString *deviceModelName; // @synthesize deviceModelName=_deviceModelName;
@property(readonly) NSString *deviceOperatingSystemBuild; // @synthesize deviceOperatingSystemBuild=_deviceOperatingSystemBuild;
@property(readonly) NSString *deviceOperatingSystemVersion; // @synthesize deviceOperatingSystemVersion=_deviceOperatingSystemVersion;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRunDestination:(id)arg1;
- (id)initWithDeviceOperatingSystemVersion:(id)arg1 deviceOperatingSystemBuild:(id)arg2 deviceModelName:(id)arg3 deviceIdentifier:(id)arg4 targetArchitecture:(id)arg5 targetSDK:(id)arg6;

@end

