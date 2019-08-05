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
#import "OAIConfigNodePropertyInteger.h"
#import "OAIConfigNodePropertyString.h"
@protocol OAIConfigNodePropertyArray;
@class OAIConfigNodePropertyArray;
@protocol OAIConfigNodePropertyBoolean;
@class OAIConfigNodePropertyBoolean;
@protocol OAIConfigNodePropertyDropDown;
@class OAIConfigNodePropertyDropDown;
@protocol OAIConfigNodePropertyInteger;
@class OAIConfigNodePropertyInteger;
@protocol OAIConfigNodePropertyString;
@class OAIConfigNodePropertyString;



@protocol OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties
@end

@interface OAIComAdobeGraniteAuthSamlSamlAuthenticationHandlerProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyArray* path;

@property(nonatomic) OAIConfigNodePropertyInteger* serviceRanking;

@property(nonatomic) OAIConfigNodePropertyString* idpUrl;

@property(nonatomic) OAIConfigNodePropertyString* idpCertAlias;

@property(nonatomic) OAIConfigNodePropertyBoolean* idpHttpRedirect;

@property(nonatomic) OAIConfigNodePropertyString* serviceProviderEntityId;

@property(nonatomic) OAIConfigNodePropertyString* assertionConsumerServiceURL;

@property(nonatomic) OAIConfigNodePropertyString* spPrivateKeyAlias;

@property(nonatomic) OAIConfigNodePropertyString* keyStorePassword;

@property(nonatomic) OAIConfigNodePropertyString* defaultRedirectUrl;

@property(nonatomic) OAIConfigNodePropertyString* userIDAttribute;

@property(nonatomic) OAIConfigNodePropertyBoolean* useEncryption;

@property(nonatomic) OAIConfigNodePropertyBoolean* createUser;

@property(nonatomic) OAIConfigNodePropertyString* userIntermediatePath;

@property(nonatomic) OAIConfigNodePropertyBoolean* addGroupMemberships;

@property(nonatomic) OAIConfigNodePropertyString* groupMembershipAttribute;

@property(nonatomic) OAIConfigNodePropertyArray* defaultGroups;

@property(nonatomic) OAIConfigNodePropertyString* nameIdFormat;

@property(nonatomic) OAIConfigNodePropertyArray* synchronizeAttributes;

@property(nonatomic) OAIConfigNodePropertyBoolean* handleLogout;

@property(nonatomic) OAIConfigNodePropertyString* logoutUrl;

@property(nonatomic) OAIConfigNodePropertyInteger* clockTolerance;

@property(nonatomic) OAIConfigNodePropertyString* digestMethod;

@property(nonatomic) OAIConfigNodePropertyString* signatureMethod;

@property(nonatomic) OAIConfigNodePropertyDropDown* identitySyncType;

@property(nonatomic) OAIConfigNodePropertyString* idpIdentifier;

@end