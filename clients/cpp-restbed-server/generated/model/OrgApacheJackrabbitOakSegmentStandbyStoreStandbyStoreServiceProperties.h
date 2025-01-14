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
 * OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties.h
 *
 * 
 */

#ifndef OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties_H_
#define OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyInteger.h"
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
class  OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties
{
public:
    OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties();
    virtual ~OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheSlingInstallerConfigurationPersist() const;
    void setOrgApacheSlingInstallerConfigurationPersist(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getMode() const;
    void setMode(std::shared_ptr<ConfigNodePropertyDropDown> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getPort() const;
    void setPort(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPrimaryHost() const;
    void setPrimaryHost(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getInterval() const;
    void setInterval(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getPrimaryAllowedClientIpRanges() const;
    void setPrimaryAllowedClientIpRanges(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getSecure() const;
    void setSecure(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getStandbyReadtimeout() const;
    void setStandbyReadtimeout(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getStandbyAutoclean() const;
    void setStandbyAutoclean(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_sling_installer_configuration_persist;
    std::shared_ptr<ConfigNodePropertyDropDown> m_Mode;
    std::shared_ptr<ConfigNodePropertyInteger> m_Port;
    std::shared_ptr<ConfigNodePropertyString> m_Primary_host;
    std::shared_ptr<ConfigNodePropertyInteger> m_Interval;
    std::shared_ptr<ConfigNodePropertyArray> m_Primary_allowed_client_ip_ranges;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Secure;
    std::shared_ptr<ConfigNodePropertyInteger> m_Standby_readtimeout;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Standby_autoclean;
};

}
}
}
}

#endif /* OrgApacheJackrabbitOakSegmentStandbyStoreStandbyStoreServiceProperties_H_ */
