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


#import "OAIComDayCqWcmCoreImplWCMDeveloperModeFilterProperties.h"
@protocol OAIComDayCqWcmCoreImplWCMDeveloperModeFilterProperties;
@class OAIComDayCqWcmCoreImplWCMDeveloperModeFilterProperties;



@protocol OAIComDayCqWcmCoreImplWCMDeveloperModeFilterInfo
@end

@interface OAIComDayCqWcmCoreImplWCMDeveloperModeFilterInfo : OAIObject


@property(nonatomic) NSString* pid;

@property(nonatomic) NSString* title;

@property(nonatomic) NSString* _description;

@property(nonatomic) OAIComDayCqWcmCoreImplWCMDeveloperModeFilterProperties* properties;

@property(nonatomic) NSString* additionalProperties;

@property(nonatomic) NSString* bundleLocation;

@property(nonatomic) NSString* serviceLocation;

@end
