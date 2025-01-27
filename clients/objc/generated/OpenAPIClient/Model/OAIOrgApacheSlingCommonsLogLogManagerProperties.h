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
#import "OAIConfigNodePropertyString.h"
@protocol OAIConfigNodePropertyBoolean;
@class OAIConfigNodePropertyBoolean;
@protocol OAIConfigNodePropertyDropDown;
@class OAIConfigNodePropertyDropDown;
@protocol OAIConfigNodePropertyInteger;
@class OAIConfigNodePropertyInteger;
@protocol OAIConfigNodePropertyString;
@class OAIConfigNodePropertyString;



@protocol OAIOrgApacheSlingCommonsLogLogManagerProperties
@end

@interface OAIOrgApacheSlingCommonsLogLogManagerProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyDropDown* orgApacheSlingCommonsLogLevel;

@property(nonatomic) OAIConfigNodePropertyString* orgApacheSlingCommonsLogFile;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheSlingCommonsLogFileNumber;

@property(nonatomic) OAIConfigNodePropertyString* orgApacheSlingCommonsLogFileSize;

@property(nonatomic) OAIConfigNodePropertyString* orgApacheSlingCommonsLogPattern;

@property(nonatomic) OAIConfigNodePropertyString* orgApacheSlingCommonsLogConfigurationFile;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheSlingCommonsLogPackagingDataEnabled;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheSlingCommonsLogMaxCallerDataDepth;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheSlingCommonsLogMaxOldFileCountInDump;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheSlingCommonsLogNumOfLines;

@end
