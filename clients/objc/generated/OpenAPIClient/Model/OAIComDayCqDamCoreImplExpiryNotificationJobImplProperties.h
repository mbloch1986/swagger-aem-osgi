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
#import "OAIConfigNodePropertyInteger.h"
#import "OAIConfigNodePropertyString.h"
@protocol OAIConfigNodePropertyBoolean;
@class OAIConfigNodePropertyBoolean;
@protocol OAIConfigNodePropertyInteger;
@class OAIConfigNodePropertyInteger;
@protocol OAIConfigNodePropertyString;
@class OAIConfigNodePropertyString;



@protocol OAIComDayCqDamCoreImplExpiryNotificationJobImplProperties
@end

@interface OAIComDayCqDamCoreImplExpiryNotificationJobImplProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyBoolean* cqDamExpiryNotificationSchedulerIstimebased;

@property(nonatomic) OAIConfigNodePropertyString* cqDamExpiryNotificationSchedulerTimebasedRule;

@property(nonatomic) OAIConfigNodePropertyInteger* cqDamExpiryNotificationSchedulerPeriodRule;

@property(nonatomic) OAIConfigNodePropertyBoolean* sendEmail;

@property(nonatomic) OAIConfigNodePropertyInteger* assetExpiredLimit;

@property(nonatomic) OAIConfigNodePropertyInteger* priorNotificationSeconds;

@property(nonatomic) OAIConfigNodePropertyString* cqDamExpiryNotificationUrlProtocol;

@end
