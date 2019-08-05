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
#import "OAIConfigNodePropertyDropDown.h"
#import "OAIConfigNodePropertyInteger.h"
#import "OAIConfigNodePropertyString.h"
@protocol OAIConfigNodePropertyArray;
@class OAIConfigNodePropertyArray;
@protocol OAIConfigNodePropertyDropDown;
@class OAIConfigNodePropertyDropDown;
@protocol OAIConfigNodePropertyInteger;
@class OAIConfigNodePropertyInteger;
@protocol OAIConfigNodePropertyString;
@class OAIConfigNodePropertyString;



@protocol OAIComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties
@end

@interface OAIComAdobeGraniteJettySslInternalGraniteSslConnectorFactoryProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyInteger* comAdobeGraniteJettySslPort;

@property(nonatomic) OAIConfigNodePropertyString* comAdobeGraniteJettySslKeystoreUser;

@property(nonatomic) OAIConfigNodePropertyString* comAdobeGraniteJettySslKeystorePassword;

@property(nonatomic) OAIConfigNodePropertyArray* comAdobeGraniteJettySslCiphersuitesExcluded;

@property(nonatomic) OAIConfigNodePropertyArray* comAdobeGraniteJettySslCiphersuitesIncluded;

@property(nonatomic) OAIConfigNodePropertyDropDown* comAdobeGraniteJettySslClientCertificate;

@end