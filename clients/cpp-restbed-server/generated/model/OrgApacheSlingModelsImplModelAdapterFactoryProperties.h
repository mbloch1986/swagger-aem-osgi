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
 * OrgApacheSlingModelsImplModelAdapterFactoryProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingModelsImplModelAdapterFactoryProperties_H_
#define OrgApacheSlingModelsImplModelAdapterFactoryProperties_H_



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
class  OrgApacheSlingModelsImplModelAdapterFactoryProperties
{
public:
    OrgApacheSlingModelsImplModelAdapterFactoryProperties();
    virtual ~OrgApacheSlingModelsImplModelAdapterFactoryProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheSlingModelsImplModelAdapterFactoryProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOsgiHttpWhiteboardListener() const;
    void setOsgiHttpWhiteboardListener(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOsgiHttpWhiteboardContextSelect() const;
    void setOsgiHttpWhiteboardContextSelect(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getMaxRecursionDepth() const;
    void setMaxRecursionDepth(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCleanupJobPeriod() const;
    void setCleanupJobPeriod(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Osgi_http_whiteboard_listener;
    std::shared_ptr<ConfigNodePropertyString> m_Osgi_http_whiteboard_context_select;
    std::shared_ptr<ConfigNodePropertyInteger> m_Max_recursion_depth;
    std::shared_ptr<ConfigNodePropertyInteger> m_Cleanup_job_period;
};

}
}
}
}

#endif /* OrgApacheSlingModelsImplModelAdapterFactoryProperties_H_ */
