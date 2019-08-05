#import "OAIOrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryProperties.h"

@implementation OAIOrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryProperties

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"name": @"name", @"title": @"title", @"details": @"details", @"enabled": @"enabled", @"serviceName": @"serviceName", @"logLevel": @"log.level", @"queueProcessingEnabled": @"queue.processing.enabled", @"passiveQueues": @"passiveQueues", @"packageExporterEndpoints": @"packageExporter.endpoints", @"packageImporterEndpoints": @"packageImporter.endpoints", @"retryStrategy": @"retry.strategy", @"retryAttempts": @"retry.attempts", @"pullItems": @"pull.items", @"httpConnTimeout": @"http.conn.timeout", @"requestAuthorizationStrategyTarget": @"requestAuthorizationStrategy.target", @"transportSecretProviderTarget": @"transportSecretProvider.target", @"packageBuilderTarget": @"packageBuilder.target", @"triggersTarget": @"triggers.target" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"name", @"title", @"details", @"enabled", @"serviceName", @"logLevel", @"queueProcessingEnabled", @"passiveQueues", @"packageExporterEndpoints", @"packageImporterEndpoints", @"retryStrategy", @"retryAttempts", @"pullItems", @"httpConnTimeout", @"requestAuthorizationStrategyTarget", @"transportSecretProviderTarget", @"packageBuilderTarget", @"triggersTarget"];
  return [optionalProperties containsObject:propertyName];
}

@end