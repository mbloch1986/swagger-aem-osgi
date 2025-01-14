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



@protocol OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties
@end

@interface OAIOrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyString* name;

@property(nonatomic) OAIConfigNodePropertyString* title;

@property(nonatomic) OAIConfigNodePropertyString* details;

@property(nonatomic) OAIConfigNodePropertyBoolean* enabled;

@property(nonatomic) OAIConfigNodePropertyString* serviceName;

@property(nonatomic) OAIConfigNodePropertyDropDown* logLevel;

@property(nonatomic) OAIConfigNodePropertyBoolean* queueProcessingEnabled;

@property(nonatomic) OAIConfigNodePropertyArray* packageExporterEndpoints;

@property(nonatomic) OAIConfigNodePropertyInteger* pullItems;

@property(nonatomic) OAIConfigNodePropertyInteger* httpConnTimeout;

@property(nonatomic) OAIConfigNodePropertyString* requestAuthorizationStrategyTarget;

@property(nonatomic) OAIConfigNodePropertyString* transportSecretProviderTarget;

@property(nonatomic) OAIConfigNodePropertyString* packageBuilderTarget;

@property(nonatomic) OAIConfigNodePropertyString* triggersTarget;

@end
