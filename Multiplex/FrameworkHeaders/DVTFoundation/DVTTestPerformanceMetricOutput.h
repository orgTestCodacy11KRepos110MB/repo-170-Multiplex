//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"

@class DVTDevice, NSArray, NSNumber, NSString;

@interface DVTTestPerformanceMetricOutput : NSObject
{
    NSString *_identifier;
    NSString *_filePath;
    NSNumber *_lineNumber;
    NSString *_displayName;
    NSString *_unitOfMeasurement;
    NSArray *_measurements;
    NSString *_baselineName;
    NSNumber *_baselineAverage;
    NSNumber *_maxPercentRegression;
    NSNumber *_maxPercentRelativeStandardDeviation;
    NSNumber *_maxRegression;
    NSNumber *_maxStandardDeviation;
    DVTDevice *_targetDevice;
    NSString *_targetArchitecture;
    double _creationTimeIntervalSinceReferenceDate;
}

@property(readonly) double creationTimeIntervalSinceReferenceDate; // @synthesize creationTimeIntervalSinceReferenceDate=_creationTimeIntervalSinceReferenceDate;
@property(copy) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(retain) DVTDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(readonly) NSNumber *maxStandardDeviation; // @synthesize maxStandardDeviation=_maxStandardDeviation;
@property(readonly) NSNumber *maxRegression; // @synthesize maxRegression=_maxRegression;
@property(readonly) NSNumber *maxPercentRelativeStandardDeviation; // @synthesize maxPercentRelativeStandardDeviation=_maxPercentRelativeStandardDeviation;
@property(readonly) NSNumber *maxPercentRegression; // @synthesize maxPercentRegression=_maxPercentRegression;
@property(readonly) NSNumber *baselineAverage; // @synthesize baselineAverage=_baselineAverage;
@property(readonly) NSString *baselineName; // @synthesize baselineName=_baselineName;
@property(readonly, copy) NSArray *measurements; // @synthesize measurements=_measurements;
@property(readonly, copy) NSString *unitOfMeasurement; // @synthesize unitOfMeasurement=_unitOfMeasurement;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSNumber *lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, copy) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) double relativeStandardDeviationOfMeasurements;
@property(readonly) double meanAverageOfMeasurements;
- (id)initWithPerformanceMetricName:(id)arg1 filePath:(id)arg2 lineNumber:(id)arg3 unitOfMeasurement:(id)arg4 measurements:(id)arg5 identifier:(id)arg6 baselineName:(id)arg7 baselineAverage:(id)arg8 maxPercentRegression:(id)arg9 maxPercentRelativeStandardDeviation:(id)arg10 maxRegression:(id)arg11 maxStandardDeviation:(id)arg12;

@end

