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
#import "OAIConfigNodePropertyInteger.h"
#import "OAIConfigNodePropertyString.h"
@protocol OAIConfigNodePropertyDropDown;
@class OAIConfigNodePropertyDropDown;
@protocol OAIConfigNodePropertyInteger;
@class OAIConfigNodePropertyInteger;
@protocol OAIConfigNodePropertyString;
@class OAIConfigNodePropertyString;



@protocol OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties
@end

@interface OAIOrgApacheSlingCommonsMetricsInternalLogReporterProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyInteger* period;

@property(nonatomic) OAIConfigNodePropertyDropDown* timeUnit;

@property(nonatomic) OAIConfigNodePropertyDropDown* level;

@property(nonatomic) OAIConfigNodePropertyString* loggerName;

@property(nonatomic) OAIConfigNodePropertyString* prefix;

@property(nonatomic) OAIConfigNodePropertyString* pattern;

@property(nonatomic) OAIConfigNodePropertyString* registryName;

@end