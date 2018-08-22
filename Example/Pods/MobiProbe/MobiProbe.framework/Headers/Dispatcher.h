//
//  Dispatcher.h
//  HelloIos
//
//  Created by Manish Kumar on 25/09/15.
//  Copyright © 2015 Manish Kumar. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Dispatcher : NSObject<NSURLConnectionDelegate>{
    NSMutableData *_responseData;
}
-(void)dispatchPayload :(NSMutableDictionary *)packet;
-(void)dispatchExceptionPayload:(NSMutableDictionary *)packet;

@end

