//
//  MobiprobeUmbrellaHeader.h
//  MobiProbe
//
//  Created by iOS Developer on 26/04/2018.
//  Copyright © 2018 Vity Mobi Systems. All rights reserved.
//

#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Events.h"
#import "Dispatcher.h"
#import "MobiWebClient.h"
//! Project version number for MobiProbe.
FOUNDATION_EXPORT double MobiProbeVersionNumber;

//! Project version string for MobiProbe.
FOUNDATION_EXPORT const unsigned char MobiProbeVersionString[];


