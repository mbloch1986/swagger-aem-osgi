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


#import "OAIConfigNodePropertyInteger.h"
#import "OAIConfigNodePropertyString.h"
@protocol OAIConfigNodePropertyInteger;
@class OAIConfigNodePropertyInteger;
@protocol OAIConfigNodePropertyString;
@class OAIConfigNodePropertyString;



@protocol OAIComAdobeGraniteTranslationConnectorMsftCoreImplMicrosoftTranslProperties
@end

@interface OAIComAdobeGraniteTranslationConnectorMsftCoreImplMicrosoftTranslProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyString* translationFactory;

@property(nonatomic) OAIConfigNodePropertyString* defaultConnectorLabel;

@property(nonatomic) OAIConfigNodePropertyString* defaultConnectorAttribution;

@property(nonatomic) OAIConfigNodePropertyString* defaultConnectorWorkspaceId;

@property(nonatomic) OAIConfigNodePropertyString* defaultConnectorSubscriptionKey;

@property(nonatomic) OAIConfigNodePropertyString* languageMapLocation;

@property(nonatomic) OAIConfigNodePropertyString* categoryMapLocation;

@property(nonatomic) OAIConfigNodePropertyInteger* retryAttempts;

@property(nonatomic) OAIConfigNodePropertyInteger* timeoutCount;

@end
