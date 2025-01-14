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
 * ComDayCqSearchImplBuilderQueryBuilderImplProperties.h
 *
 * 
 */

#ifndef ComDayCqSearchImplBuilderQueryBuilderImplProperties_H_
#define ComDayCqSearchImplBuilderQueryBuilderImplProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqSearchImplBuilderQueryBuilderImplProperties
{
public:
    ComDayCqSearchImplBuilderQueryBuilderImplProperties();
    virtual ~ComDayCqSearchImplBuilderQueryBuilderImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqSearchImplBuilderQueryBuilderImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getExcerptProperties() const;
    void setExcerptProperties(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCacheMaxEntries() const;
    void setCacheMaxEntries(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCacheEntryLifetime() const;
    void setCacheEntryLifetime(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getXpathUnion() const;
    void setXpathUnion(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Excerpt_properties;
    std::shared_ptr<ConfigNodePropertyInteger> m_Cache_max_entries;
    std::shared_ptr<ConfigNodePropertyInteger> m_Cache_entry_lifetime;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Xpath_union;
};

}
}
}
}

#endif /* ComDayCqSearchImplBuilderQueryBuilderImplProperties_H_ */
