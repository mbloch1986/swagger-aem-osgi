/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ComDayCqDamCoreImplCacheCQBufferedImageCacheProperties.h
 *
 * 
 */

#ifndef ComDayCqDamCoreImplCacheCQBufferedImageCacheProperties_H_
#define ComDayCqDamCoreImplCacheCQBufferedImageCacheProperties_H_



#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCoreImplCacheCQBufferedImageCacheProperties
{
public:
    ComDayCqDamCoreImplCacheCQBufferedImageCacheProperties();
    virtual ~ComDayCqDamCoreImplCacheCQBufferedImageCacheProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplCacheCQBufferedImageCacheProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCqDamImageCacheMaxMemory() const;
    void setCqDamImageCacheMaxMemory(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCqDamImageCacheMaxAge() const;
    void setCqDamImageCacheMaxAge(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getCqDamImageCacheMaxDimension() const;
    void setCqDamImageCacheMaxDimension(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Cq_dam_image_cache_max_memory;
    std::shared_ptr<ConfigNodePropertyInteger> m_Cq_dam_image_cache_max_age;
    std::shared_ptr<ConfigNodePropertyString> m_Cq_dam_image_cache_max_dimension;
};

}
}
}
}

#endif /* ComDayCqDamCoreImplCacheCQBufferedImageCacheProperties_H_ */