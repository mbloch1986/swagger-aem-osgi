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
 * OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties_H_
#define OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
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
class  OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties
{
public:
    OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties();
    virtual ~OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getOrgApacheSlingCommonsLogLevel() const;
    void setOrgApacheSlingCommonsLogLevel(std::shared_ptr<ConfigNodePropertyDropDown> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheSlingCommonsLogFile() const;
    void setOrgApacheSlingCommonsLogFile(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheSlingCommonsLogPattern() const;
    void setOrgApacheSlingCommonsLogPattern(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheSlingCommonsLogNames() const;
    void setOrgApacheSlingCommonsLogNames(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheSlingCommonsLogAdditiv() const;
    void setOrgApacheSlingCommonsLogAdditiv(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyDropDown> m_Org_apache_sling_commons_log_level;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_sling_commons_log_file;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_sling_commons_log_pattern;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_sling_commons_log_names;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_sling_commons_log_additiv;
};

}
}
}
}

#endif /* OrgApacheSlingCommonsLogLogManagerFactoryConfigProperties_H_ */