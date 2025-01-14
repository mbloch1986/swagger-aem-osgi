#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Adobe Experience Manager OSGI config (AEM) API
* Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
*
* OpenAPI spec version: 1.0.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIConfigNodePropertyArray.h"
#import "OAIConfigNodePropertyBoolean.h"
#import "OAIConfigNodePropertyDropDown.h"
#import "OAIConfigNodePropertyString.h"
@protocol OAIConfigNodePropertyArray;
@class OAIConfigNodePropertyArray;
@protocol OAIConfigNodePropertyBoolean;
@class OAIConfigNodePropertyBoolean;
@protocol OAIConfigNodePropertyDropDown;
@class OAIConfigNodePropertyDropDown;
@protocol OAIConfigNodePropertyString;
@class OAIConfigNodePropertyString;



@protocol OAIOrgApacheSlingEngineImplAuthSlingAuthenticatorProperties
@end

@interface OAIOrgApacheSlingEngineImplAuthSlingAuthenticatorProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyString* osgiHttpWhiteboardContextSelect;

@property(nonatomic) OAIConfigNodePropertyString* osgiHttpWhiteboardListener;

@property(nonatomic) OAIConfigNodePropertyString* authSudoCookie;

@property(nonatomic) OAIConfigNodePropertyString* authSudoParameter;

@property(nonatomic) OAIConfigNodePropertyBoolean* authAnnonymous;

@property(nonatomic) OAIConfigNodePropertyArray* slingAuthRequirements;

@property(nonatomic) OAIConfigNodePropertyString* slingAuthAnonymousUser;

@property(nonatomic) OAIConfigNodePropertyString* slingAuthAnonymousPassword;

@property(nonatomic) OAIConfigNodePropertyDropDown* authHttp;

@property(nonatomic) OAIConfigNodePropertyString* authHttpRealm;

@property(nonatomic) OAIConfigNodePropertyArray* authUriSuffix;

@end
