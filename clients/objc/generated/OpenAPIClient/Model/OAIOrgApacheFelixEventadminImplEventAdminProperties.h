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
#import "OAIConfigNodePropertyFloat.h"
#import "OAIConfigNodePropertyInteger.h"
@protocol OAIConfigNodePropertyArray;
@class OAIConfigNodePropertyArray;
@protocol OAIConfigNodePropertyBoolean;
@class OAIConfigNodePropertyBoolean;
@protocol OAIConfigNodePropertyFloat;
@class OAIConfigNodePropertyFloat;
@protocol OAIConfigNodePropertyInteger;
@class OAIConfigNodePropertyInteger;



@protocol OAIOrgApacheFelixEventadminImplEventAdminProperties
@end

@interface OAIOrgApacheFelixEventadminImplEventAdminProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixEventadminThreadPoolSize;

@property(nonatomic) OAIConfigNodePropertyFloat* orgApacheFelixEventadminAsyncToSyncThreadRatio;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixEventadminTimeout;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixEventadminRequireTopic;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixEventadminIgnoreTimeout;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixEventadminIgnoreTopic;

@end
