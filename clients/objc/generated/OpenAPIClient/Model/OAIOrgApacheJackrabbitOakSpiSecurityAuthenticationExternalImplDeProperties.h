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
#import "OAIConfigNodePropertyInteger.h"
#import "OAIConfigNodePropertyString.h"
@protocol OAIConfigNodePropertyArray;
@class OAIConfigNodePropertyArray;
@protocol OAIConfigNodePropertyBoolean;
@class OAIConfigNodePropertyBoolean;
@protocol OAIConfigNodePropertyInteger;
@class OAIConfigNodePropertyInteger;
@protocol OAIConfigNodePropertyString;
@class OAIConfigNodePropertyString;



@protocol OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties
@end

@interface OAIOrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyString* handlerName;

@property(nonatomic) OAIConfigNodePropertyString* userExpirationTime;

@property(nonatomic) OAIConfigNodePropertyArray* userAutoMembership;

@property(nonatomic) OAIConfigNodePropertyArray* userPropertyMapping;

@property(nonatomic) OAIConfigNodePropertyString* userPathPrefix;

@property(nonatomic) OAIConfigNodePropertyString* userMembershipExpTime;

@property(nonatomic) OAIConfigNodePropertyInteger* userMembershipNestingDepth;

@property(nonatomic) OAIConfigNodePropertyBoolean* userDynamicMembership;

@property(nonatomic) OAIConfigNodePropertyBoolean* userDisableMissing;

@property(nonatomic) OAIConfigNodePropertyString* groupExpirationTime;

@property(nonatomic) OAIConfigNodePropertyArray* groupAutoMembership;

@property(nonatomic) OAIConfigNodePropertyArray* groupPropertyMapping;

@property(nonatomic) OAIConfigNodePropertyString* groupPathPrefix;

@property(nonatomic) OAIConfigNodePropertyBoolean* enableRFC7613UsercaseMappedProfile;

@end