#import "OAIComDayCqStatisticsImplStatisticsServiceImplProperties.h"

@implementation OAIComDayCqStatisticsImplStatisticsServiceImplProperties

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"schedulerPeriod": @"scheduler.period", @"schedulerConcurrent": @"scheduler.concurrent", @"path": @"path", @"workspace": @"workspace", @"keywordsPath": @"keywordsPath", @"asyncEntries": @"asyncEntries" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"schedulerPeriod", @"schedulerConcurrent", @"path", @"workspace", @"keywordsPath", @"asyncEntries"];
  return [optionalProperties containsObject:propertyName];
}

@end