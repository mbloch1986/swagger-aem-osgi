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
@protocol OAIConfigNodePropertyArray;
@class OAIConfigNodePropertyArray;
@protocol OAIConfigNodePropertyBoolean;
@class OAIConfigNodePropertyBoolean;



@protocol OAIComDayCqDamScene7ImplScene7DamChangeEventListenerProperties
@end

@interface OAIComDayCqDamScene7ImplScene7DamChangeEventListenerProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyBoolean* cqDamScene7DamchangeeventlistenerEnabled;

@property(nonatomic) OAIConfigNodePropertyArray* cqDamScene7DamchangeeventlistenerObservedPaths;

@end
