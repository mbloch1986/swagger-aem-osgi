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
 * OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryProperties_H_
#define OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryProperties_H_



#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryProperties
{
public:
    OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryProperties();
    virtual ~OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPath() const;
    void setPath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getCheckpathPrefix() const;
    void setCheckpathPrefix(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getJcrPath() const;
    void setJcrPath(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Path;
    std::shared_ptr<ConfigNodePropertyString> m_Checkpath_prefix;
    std::shared_ptr<ConfigNodePropertyString> m_JcrPath;
};

}
}
}
}

#endif /* OrgApacheSlingJcrResourcesecurityImplResourceAccessGateFactoryProperties_H_ */