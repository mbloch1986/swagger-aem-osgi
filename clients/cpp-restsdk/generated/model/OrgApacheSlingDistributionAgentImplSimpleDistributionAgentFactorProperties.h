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
 * OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
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

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getTitle() const;
    bool titleIsSet() const;
    void unsetTitle();
    void setTitle(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getDetails() const;
    bool detailsIsSet() const;
    void unsetDetails();
    void setDetails(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getEnabled() const;
    bool enabledIsSet() const;
    void unsetEnabled();
    void setEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetServiceName();
    void setServiceName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getLogLevel() const;
    bool logLevelIsSet() const;
    void unsetLog_level();
    void setLogLevel(std::shared_ptr<ConfigNodePropertyDropDown> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getQueueProcessingEnabled() const;
    bool queueProcessingEnabledIsSet() const;
    void unsetQueue_processing_enabled();
    void setQueueProcessingEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPackageExporterTarget() const;
    bool packageExporterTargetIsSet() const;
    void unsetPackageExporter_target();
    void setPackageExporterTarget(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPackageImporterTarget() const;
    bool packageImporterTargetIsSet() const;
    void unsetPackageImporter_target();
    void setPackageImporterTarget(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getRequestAuthorizationStrategyTarget() const;
    bool requestAuthorizationStrategyTargetIsSet() const;
    void unsetRequestAuthorizationStrategy_target();
    void setRequestAuthorizationStrategyTarget(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getTriggersTarget() const;
    bool triggersTargetIsSet() const;
    void unsetTriggers_target();
    void setTriggersTarget(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Name;
    bool m_NameIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Title;
    bool m_TitleIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Details;
    bool m_DetailsIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Enabled;
    bool m_EnabledIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_ServiceName;
    bool m_ServiceNameIsSet;
    std::shared_ptr<ConfigNodePropertyDropDown> m_Log_level;
    bool m_Log_levelIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Queue_processing_enabled;
    bool m_Queue_processing_enabledIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_PackageExporter_target;
    bool m_PackageExporter_targetIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_PackageImporter_target;
    bool m_PackageImporter_targetIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_RequestAuthorizationStrategy_target;
    bool m_RequestAuthorizationStrategy_targetIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Triggers_target;
    bool m_Triggers_targetIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties_H_ */
