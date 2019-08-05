/**
* Adobe Experience Manager OSGI config (AEM) API
* Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
*
* OpenAPI spec version: 1.0.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * OrgApacheFelixJaasConfigurationFactoryProperties.h
 *
 * 
 */

#ifndef OrgApacheFelixJaasConfigurationFactoryProperties_H_
#define OrgApacheFelixJaasConfigurationFactoryProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheFelixJaasConfigurationFactoryProperties
    : public ModelBase
{
public:
    OrgApacheFelixJaasConfigurationFactoryProperties();
    virtual ~OrgApacheFelixJaasConfigurationFactoryProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheFelixJaasConfigurationFactoryProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyDropDown getJaasControlFlag() const;
    void setJaasControlFlag(ConfigNodePropertyDropDown const& value);
    bool jaasControlFlagIsSet() const;
    void unsetJaas_controlFlag();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getJaasRanking() const;
    void setJaasRanking(ConfigNodePropertyInteger const& value);
    bool jaasRankingIsSet() const;
    void unsetJaas_ranking();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getJaasRealmName() const;
    void setJaasRealmName(ConfigNodePropertyString const& value);
    bool jaasRealmNameIsSet() const;
    void unsetJaas_realmName();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getJaasClassname() const;
    void setJaasClassname(ConfigNodePropertyString const& value);
    bool jaasClassnameIsSet() const;
    void unsetJaas_classname();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getJaasOptions() const;
    void setJaasOptions(ConfigNodePropertyArray const& value);
    bool jaasOptionsIsSet() const;
    void unsetJaas_options();

protected:
    ConfigNodePropertyDropDown m_Jaas_controlFlag;
    bool m_Jaas_controlFlagIsSet;
    ConfigNodePropertyInteger m_Jaas_ranking;
    bool m_Jaas_rankingIsSet;
    ConfigNodePropertyString m_Jaas_realmName;
    bool m_Jaas_realmNameIsSet;
    ConfigNodePropertyString m_Jaas_classname;
    bool m_Jaas_classnameIsSet;
    ConfigNodePropertyArray m_Jaas_options;
    bool m_Jaas_optionsIsSet;
};

}
}
}
}

#endif /* OrgApacheFelixJaasConfigurationFactoryProperties_H_ */