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
#import "OAIConfigNodePropertyString.h"
@protocol OAIConfigNodePropertyArray;
@class OAIConfigNodePropertyArray;
@protocol OAIConfigNodePropertyString;
@class OAIConfigNodePropertyString;



@protocol OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties
@end

@interface OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyString* adapterCondition;

@property(nonatomic) OAIConfigNodePropertyArray* graniteUserpropertiesNodetypes;

@property(nonatomic) OAIConfigNodePropertyArray* graniteUserpropertiesResourcetypes;

@end