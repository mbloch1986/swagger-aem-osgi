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

#ifndef OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties_H_
#define OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties
{
public:
    OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties();
    virtual ~OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getName() const;
    void setName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getTitle() const;
    void setTitle(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getDetails() const;
    void setDetails(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getEnabled() const;
    void setEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getServiceName() const;
    void setServiceName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getLogLevel() const;
    void setLogLevel(std::shared_ptr<ConfigNodePropertyDropDown> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getQueueProcessingEnabled() const;
    void setQueueProcessingEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPackageExporterTarget() const;
    void setPackageExporterTarget(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getPackageImporterTarget() const;
    void setPackageImporterTarget(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getRequestAuthorizationStrategyTarget() const;
    void setRequestAuthorizationStrategyTarget(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getTriggersTarget() const;
    void setTriggersTarget(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Name;
    std::shared_ptr<ConfigNodePropertyString> m_Title;
    std::shared_ptr<ConfigNodePropertyString> m_Details;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Enabled;
    std::shared_ptr<ConfigNodePropertyString> m_ServiceName;
    std::shared_ptr<ConfigNodePropertyDropDown> m_Log_level;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Queue_processing_enabled;
    std::shared_ptr<ConfigNodePropertyString> m_PackageExporter_target;
    std::shared_ptr<ConfigNodePropertyString> m_PackageImporter_target;
    std::shared_ptr<ConfigNodePropertyString> m_RequestAuthorizationStrategy_target;
    std::shared_ptr<ConfigNodePropertyString> m_Triggers_target;
};

}
}
}
}

#endif /* OrgApacheSlingDistributionAgentImplSimpleDistributionAgentFactorProperties_H_ */