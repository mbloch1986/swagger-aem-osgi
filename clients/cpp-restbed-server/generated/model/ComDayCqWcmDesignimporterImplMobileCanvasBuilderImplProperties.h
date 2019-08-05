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
 * ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties_H_
#define ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties_H_



#include "ConfigNodePropertyBoolean.h"
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
class  ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties
{
public:
    ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties();
    virtual ~ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getFilepattern() const;
    void setFilepattern(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getDeviceGroups() const;
    void setDeviceGroups(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getBuildPageNodes() const;
    void setBuildPageNodes(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getBuildClientLibs() const;
    void setBuildClientLibs(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getBuildCanvasComponent() const;
    void setBuildCanvasComponent(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Filepattern;
    std::shared_ptr<ConfigNodePropertyArray> m_Device_groups;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Build_page_nodes;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Build_client_libs;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Build_canvas_component;
};

}
}
}
}

#endif /* ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties_H_ */