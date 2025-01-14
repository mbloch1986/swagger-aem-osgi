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
 * OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties.h
 *
 * 
 */

#ifndef OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties_H_
#define OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties_H_



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
class  OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties
{
public:
    OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties();
    virtual ~OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getJaasRanking() const;
    void setJaasRanking(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getJaasControlFlag() const;
    void setJaasControlFlag(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getJaasRealmName() const;
    void setJaasRealmName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getIdpName() const;
    void setIdpName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSyncHandlerName() const;
    void setSyncHandlerName(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Jaas_ranking;
    std::shared_ptr<ConfigNodePropertyString> m_Jaas_controlFlag;
    std::shared_ptr<ConfigNodePropertyString> m_Jaas_realmName;
    std::shared_ptr<ConfigNodePropertyString> m_Idp_name;
    std::shared_ptr<ConfigNodePropertyString> m_Sync_handlerName;
};

}
}
}
}

#endif /* OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplExProperties_H_ */
