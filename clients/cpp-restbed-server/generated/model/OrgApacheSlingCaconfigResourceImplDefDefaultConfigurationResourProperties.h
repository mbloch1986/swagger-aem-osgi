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
 * OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties_H_
#define OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties
{
public:
    OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties();
    virtual ~OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getEnabled() const;
    void setEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getConfigPath() const;
    void setConfigPath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getFallbackPaths() const;
    void setFallbackPaths(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getConfigCollectionInheritancePropertyNames() const;
    void setConfigCollectionInheritancePropertyNames(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Enabled;
    std::shared_ptr<ConfigNodePropertyString> m_ConfigPath;
    std::shared_ptr<ConfigNodePropertyArray> m_FallbackPaths;
    std::shared_ptr<ConfigNodePropertyArray> m_ConfigCollectionInheritancePropertyNames;
};

}
}
}
}

#endif /* OrgApacheSlingCaconfigResourceImplDefDefaultConfigurationResourProperties_H_ */
