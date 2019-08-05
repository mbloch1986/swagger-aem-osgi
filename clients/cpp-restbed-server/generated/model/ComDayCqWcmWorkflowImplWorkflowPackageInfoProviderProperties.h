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
 * ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties_H_
#define ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties_H_



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
class  ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties
{
public:
    ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties();
    virtual ~ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getWorkflowpackageinfoproviderFilter() const;
    void setWorkflowpackageinfoproviderFilter(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getWorkflowpackageinfoproviderFilterRootpath() const;
    void setWorkflowpackageinfoproviderFilterRootpath(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Workflowpackageinfoprovider_filter;
    std::shared_ptr<ConfigNodePropertyString> m_Workflowpackageinfoprovider_filter_rootpath;
};

}
}
}
}

#endif /* ComDayCqWcmWorkflowImplWorkflowPackageInfoProviderProperties_H_ */