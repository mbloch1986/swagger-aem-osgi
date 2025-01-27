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
 * OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties_H_
#define OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties
    : public ModelBase
{
public:
    OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties();
    virtual ~OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getName() const;
    void setName(ConfigNodePropertyString const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getTitle() const;
    void setTitle(ConfigNodePropertyString const& value);
    bool titleIsSet() const;
    void unsetTitle();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getDetails() const;
    void setDetails(ConfigNodePropertyString const& value);
    bool detailsIsSet() const;
    void unsetDetails();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getEnabled() const;
    void setEnabled(ConfigNodePropertyBoolean const& value);
    bool enabledIsSet() const;
    void unsetEnabled();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getServiceName() const;
    void setServiceName(ConfigNodePropertyString const& value);
    bool serviceNameIsSet() const;
    void unsetServiceName();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyDropDown getLogLevel() const;
    void setLogLevel(ConfigNodePropertyDropDown const& value);
    bool logLevelIsSet() const;
    void unsetLog_level();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getQueueProcessingEnabled() const;
    void setQueueProcessingEnabled(ConfigNodePropertyBoolean const& value);
    bool queueProcessingEnabledIsSet() const;
    void unsetQueue_processing_enabled();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPackageExporterTarget() const;
    void setPackageExporterTarget(ConfigNodePropertyString const& value);
    bool packageExporterTargetIsSet() const;
    void unsetPackageExporter_target();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPackageImporterTarget() const;
    void setPackageImporterTarget(ConfigNodePropertyString const& value);
    bool packageImporterTargetIsSet() const;
    void unsetPackageImporter_target();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getRequestAuthorizationStrategyTarget() const;
    void setRequestAuthorizationStrategyTarget(ConfigNodePropertyString const& value);
    bool requestAuthorizationStrategyTargetIsSet() const;
    void unsetRequestAuthorizationStrategy_target();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getTriggersTarget() const;
    void setTriggersTarget(ConfigNodePropertyString const& value);
    bool triggersTargetIsSet() const;
    void unsetTriggers_target();

protected:
    ConfigNodePropertyString m_Name;
    bool m_NameIsSet;
    ConfigNodePropertyString m_Title;
    bool m_TitleIsSet;
    ConfigNodePropertyString m_Details;
    bool m_DetailsIsSet;
    ConfigNodePropertyBoolean m_Enabled;
    bool m_EnabledIsSet;
    ConfigNodePropertyString m_ServiceName;
    bool m_ServiceNameIsSet;
    ConfigNodePropertyDropDown m_Log_level;
    bool m_Log_levelIsSet;
    ConfigNodePropertyBoolean m_Queue_processing_enabled;
    bool m_Queue_processing_enabledIsSet;
    ConfigNodePropertyString m_PackageExporter_target;
    bool m_PackageExporter_targetIsSet;
    ConfigNodePropertyString m_PackageImporter_target;
    bool m_PackageImporter_targetIsSet;
    ConfigNodePropertyString m_RequestAuthorizationStrategy_target;
    bool m_RequestAuthorizationStrategy_targetIsSet;
    ConfigNodePropertyString m_Triggers_target;
    bool m_Triggers_targetIsSet;
};

}
}
}
}

#endif /* OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties_H_ */
