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
 * ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties_H_
#define ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties
    : public ModelBase
{
public:
    ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties();
    virtual ~ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getAdapterCondition() const;
    void setAdapterCondition(ConfigNodePropertyString const& value);
    bool adapterConditionIsSet() const;
    void unsetAdapter_condition();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getTaskmanagerAdmingroups() const;
    void setTaskmanagerAdmingroups(ConfigNodePropertyArray const& value);
    bool taskmanagerAdmingroupsIsSet() const;
    void unsetTaskmanager_admingroups();

protected:
    ConfigNodePropertyString m_Adapter_condition;
    bool m_Adapter_conditionIsSet;
    ConfigNodePropertyArray m_Taskmanager_admingroups;
    bool m_Taskmanager_admingroupsIsSet;
};

}
}
}
}

#endif /* ComAdobeGraniteTaskmanagementImplServiceTaskManagerAdapterFactorProperties_H_ */
