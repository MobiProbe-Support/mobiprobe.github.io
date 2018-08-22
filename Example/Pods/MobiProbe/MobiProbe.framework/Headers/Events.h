//
//  MobiProbe.h
//  HelloIos
//
//  Created by Manish Kumar on 24/09/15.
//  Copyright © 2015 Manish Kumar. All rights reserved.
//




#import <Foundation/Foundation.h>


@interface Events : NSObject{

}

+(void)activate :(NSString*)applicationKey;

+(void)sendEvent :(NSString*)key forStringValue:(NSString*)value;
+(void)sendEvent :(NSString*)key forIntValue:(int)value;
+(void)sendEvent :(NSString*)key forFloatValue:(float)value;
+(void)sendEvent :(NSString*)key forJSONValue:(NSData *)value;
+(void)sendEvent :(NSString*)key forBoolValue:(NSData *)value;


+(void)setReportExtra :(NSString*)key forStringValue :(NSString*)value;
+(void)setReportExtra :(NSString*)key forIntValue :(int)value;
+(void)setReportExtra :(NSString*)key forBoolValue :(BOOL)value;
+(void)setReportExtra :(NSString*)key forFloatValue :(float)value;
+(void)setReportExtra :(NSString*)key forDoubleValue :(double)value;


@end
