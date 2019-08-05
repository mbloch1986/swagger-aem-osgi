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
 * ComAdobeCqSocialHandlebarsGuavaTemplateCacheImplProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialHandlebarsGuavaTemplateCacheImplProperties_H_
#define ComAdobeCqSocialHandlebarsGuavaTemplateCacheImplProperties_H_



#include "ConfigNodePropertyBoolean.h"
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
class  ComAdobeCqSocialHandlebarsGuavaTemplateCacheImplProperties
{
public:
    ComAdobeCqSocialHandlebarsGuavaTemplateCacheImplProperties();
    virtual ~ComAdobeCqSocialHandlebarsGuavaTemplateCacheImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialHandlebarsGuavaTemplateCacheImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getParameterGuavaCacheEnabled() const;
    void setParameterGuavaCacheEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getParameterGuavaCacheParams() const;
    void setParameterGuavaCacheParams(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getParameterGuavaCacheReload() const;
    void setParameterGuavaCacheReload(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getServiceRanking() const;
    void setServiceRanking(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Parameter_guava_cache_enabled;
    std::shared_ptr<ConfigNodePropertyString> m_Parameter_guava_cache_params;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Parameter_guava_cache_reload;
    std::shared_ptr<ConfigNodePropertyInteger> m_Service_ranking;
};

}
}
}
}

#endif /* ComAdobeCqSocialHandlebarsGuavaTemplateCacheImplProperties_H_ */