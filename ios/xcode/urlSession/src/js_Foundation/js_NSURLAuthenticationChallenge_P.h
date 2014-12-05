/**
 * Copyright (c) 2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 * This generated code and related technologies are covered by patents
 * or patents pending by Appcelerator, Inc.
 */

// WARNING: this file is generated and will be overwritten
// Generated on Mon Jun 02 2014 17:35:27 GMT-0700 (PDT)

// if you're checking out this file, you should check us out too.
// http://jobs.appcelerator.com

/**
 * JSC implementation for Foundation/NSURLAuthenticationChallenge
 */
@import JavaScriptCore;
@import UIKit;
#import <hyperloop.h>
#import <com_appcelerator_urlSession_converters.h>
@import Foundation;

// export typdefs we use
typedef id (*Function_id__P__id__SEL______)(id,SEL,...);

// export methods we use
extern Class HyperloopJSValueRefToClass(JSContextRef,JSValueRef,JSValueRef*,bool*);
extern JSValueRef HyperloopClassToJSValueRef(JSContextRef,Class);
extern JSValueRef HyperloopNSArrayToJSValueRef(JSContextRef,NSArray *);
extern JSValueRef HyperloopNSErrorToJSValueRef(JSContextRef,NSError *);
extern JSValueRef HyperloopNSMethodSignatureToJSValueRef(JSContextRef,NSMethodSignature *);
extern JSValueRef HyperloopNSSetToJSValueRef(JSContextRef,NSSet *);
extern JSValueRef HyperloopNSStringToJSValueRef(JSContextRef,NSString *);
extern JSValueRef HyperloopNSURLAuthenticationChallengeToJSValueRef(JSContextRef,NSURLAuthenticationChallenge *);
extern JSValueRef HyperloopNSURLCredentialToJSValueRef(JSContextRef,NSURLCredential *);
extern JSValueRef HyperloopNSURLProtectionSpaceToJSValueRef(JSContextRef,NSURLProtectionSpace *);
extern JSValueRef HyperloopNSURLResponseToJSValueRef(JSContextRef,NSURLResponse *);
extern JSValueRef HyperloopboolToJSValueRef(JSContextRef,bool);
extern JSValueRef Hyperloopid_NSURLAuthenticationChallengeSender_ToJSValueRef(JSContextRef,id<NSURLAuthenticationChallengeSender>);
extern JSValueRef Hyperloopid__P__id__SEL______ToJSValueRef(JSContextRef,Function_id__P__id__SEL______);
extern JSValueRef HyperloopintToJSValueRef(JSContextRef,int);
extern NSError * HyperloopJSValueRefToNSError(JSContextRef,JSValueRef,JSValueRef*,bool*);
extern NSString * HyperloopJSValueRefToNSString(JSContextRef,JSValueRef,JSValueRef*,bool*);
extern NSURLAuthenticationChallenge * HyperloopJSValueRefToNSURLAuthenticationChallenge(JSContextRef,JSValueRef,JSValueRef*,bool*);
extern NSURLCredential * HyperloopJSValueRefToNSURLCredential(JSContextRef,JSValueRef,JSValueRef*,bool*);
extern NSURLProtectionSpace * HyperloopJSValueRefToNSURLProtectionSpace(JSContextRef,JSValueRef,JSValueRef*,bool*);
extern NSURLResponse * HyperloopJSValueRefToNSURLResponse(JSContextRef,JSValueRef,JSValueRef*,bool*);
extern SEL HyperloopJSValueRefToSEL(JSContextRef,JSValueRef,JSValueRef*,bool*);
extern id HyperloopJSValueRefToid(JSContextRef,JSValueRef,JSValueRef*,bool*);
extern id<NSURLAuthenticationChallengeSender> HyperloopJSValueRefToid_NSURLAuthenticationChallengeSender_(JSContextRef,JSValueRef,JSValueRef*,bool*);
extern int HyperloopJSValueRefToint(JSContextRef,JSValueRef,JSValueRef*,bool*);
extern struct _NSZone * HyperloopJSValueRefTostruct__NSZone_P(JSContextRef,JSValueRef,JSValueRef*,bool*);