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


#import "OAIConfigNodePropertyDropDown.h"
#import "OAIConfigNodePropertyString.h"
@protocol OAIConfigNodePropertyDropDown;
@class OAIConfigNodePropertyDropDown;
@protocol OAIConfigNodePropertyString;
@class OAIConfigNodePropertyString;



@protocol OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties
@end

@interface OAIComAdobeCqWcmTranslationImplTranslationPlatformConfigurationImplProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyString* syncTranslationStateSchedulingFormat;

@property(nonatomic) OAIConfigNodePropertyString* schedulingRepeatTranslationSchedulingFormat;

@property(nonatomic) OAIConfigNodePropertyString* syncTranslationStateLockTimeoutInMinutes;

@property(nonatomic) OAIConfigNodePropertyDropDown* exportFormat;

@end