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


#import "OAIConfigNodePropertyBoolean.h"
#import "OAIConfigNodePropertyDropDown.h"
#import "OAIConfigNodePropertyInteger.h"
@protocol OAIConfigNodePropertyBoolean;
@class OAIConfigNodePropertyBoolean;
@protocol OAIConfigNodePropertyDropDown;
@class OAIConfigNodePropertyDropDown;
@protocol OAIConfigNodePropertyInteger;
@class OAIConfigNodePropertyInteger;



@protocol OAIAdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties
@end

@interface OAIAdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyBoolean* showPlaceholder;

@property(nonatomic) OAIConfigNodePropertyInteger* maximumCacheEntries;

@property(nonatomic) OAIConfigNodePropertyDropDown* afScriptingCompatversion;

@property(nonatomic) OAIConfigNodePropertyBoolean* makeFileNameUnique;

@property(nonatomic) OAIConfigNodePropertyBoolean* generatingCompliantData;

@end
