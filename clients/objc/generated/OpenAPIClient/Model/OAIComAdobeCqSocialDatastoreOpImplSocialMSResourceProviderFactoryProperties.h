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



@protocol OAIComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties
@end

@interface OAIComAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyString* solrZkTimeout;

@property(nonatomic) OAIConfigNodePropertyString* solrCommit;

@property(nonatomic) OAIConfigNodePropertyBoolean* cacheOn;

@property(nonatomic) OAIConfigNodePropertyInteger* concurrencyLevel;

@property(nonatomic) OAIConfigNodePropertyInteger* cacheStartSize;

@property(nonatomic) OAIConfigNodePropertyInteger* cacheTtl;

@property(nonatomic) OAIConfigNodePropertyInteger* cacheSize;

@end
