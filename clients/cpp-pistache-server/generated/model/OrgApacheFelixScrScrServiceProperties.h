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
 * OrgApacheFelixScrScrServiceProperties.h
 *
 * 
 */

#ifndef OrgApacheFelixScrScrServiceProperties_H_
#define OrgApacheFelixScrScrServiceProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyInteger.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheFelixScrScrServiceProperties
    : public ModelBase
{
public:
    OrgApacheFelixScrScrServiceProperties();
    virtual ~OrgApacheFelixScrScrServiceProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheFelixScrScrServiceProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyDropDown getDsLoglevel() const;
    void setDsLoglevel(ConfigNodePropertyDropDown const& value);
    bool dsLoglevelIsSet() const;
    void unsetDs_loglevel();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getDsFactoryEnabled() const;
    void setDsFactoryEnabled(ConfigNodePropertyBoolean const& value);
    bool dsFactoryEnabledIsSet() const;
    void unsetDs_factory_enabled();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getDsDelayedKeepInstances() const;
    void setDsDelayedKeepInstances(ConfigNodePropertyBoolean const& value);
    bool dsDelayedKeepInstancesIsSet() const;
    void unsetDs_delayed_keepInstances();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getDsLockTimeoutMilliseconds() const;
    void setDsLockTimeoutMilliseconds(ConfigNodePropertyInteger const& value);
    bool dsLockTimeoutMillisecondsIsSet() const;
    void unsetDs_lock_timeout_milliseconds();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getDsStopTimeoutMilliseconds() const;
    void setDsStopTimeoutMilliseconds(ConfigNodePropertyInteger const& value);
    bool dsStopTimeoutMillisecondsIsSet() const;
    void unsetDs_stop_timeout_milliseconds();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getDsGlobalExtender() const;
    void setDsGlobalExtender(ConfigNodePropertyBoolean const& value);
    bool dsGlobalExtenderIsSet() const;
    void unsetDs_global_extender();

protected:
    ConfigNodePropertyDropDown m_Ds_loglevel;
    bool m_Ds_loglevelIsSet;
    ConfigNodePropertyBoolean m_Ds_factory_enabled;
    bool m_Ds_factory_enabledIsSet;
    ConfigNodePropertyBoolean m_Ds_delayed_keepInstances;
    bool m_Ds_delayed_keepInstancesIsSet;
    ConfigNodePropertyInteger m_Ds_lock_timeout_milliseconds;
    bool m_Ds_lock_timeout_millisecondsIsSet;
    ConfigNodePropertyInteger m_Ds_stop_timeout_milliseconds;
    bool m_Ds_stop_timeout_millisecondsIsSet;
    ConfigNodePropertyBoolean m_Ds_global_extender;
    bool m_Ds_global_extenderIsSet;
};

}
}
}
}

#endif /* OrgApacheFelixScrScrServiceProperties_H_ */
