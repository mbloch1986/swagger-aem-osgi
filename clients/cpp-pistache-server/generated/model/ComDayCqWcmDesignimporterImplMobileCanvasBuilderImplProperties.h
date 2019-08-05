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
 * ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties_H_
#define ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties
    : public ModelBase
{
public:
    ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties();
    virtual ~ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getFilepattern() const;
    void setFilepattern(ConfigNodePropertyString const& value);
    bool filepatternIsSet() const;
    void unsetFilepattern();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getDeviceGroups() const;
    void setDeviceGroups(ConfigNodePropertyArray const& value);
    bool deviceGroupsIsSet() const;
    void unsetDevice_groups();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getBuildPageNodes() const;
    void setBuildPageNodes(ConfigNodePropertyBoolean const& value);
    bool buildPageNodesIsSet() const;
    void unsetBuild_page_nodes();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getBuildClientLibs() const;
    void setBuildClientLibs(ConfigNodePropertyBoolean const& value);
    bool buildClientLibsIsSet() const;
    void unsetBuild_client_libs();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getBuildCanvasComponent() const;
    void setBuildCanvasComponent(ConfigNodePropertyBoolean const& value);
    bool buildCanvasComponentIsSet() const;
    void unsetBuild_canvas_component();

protected:
    ConfigNodePropertyString m_Filepattern;
    bool m_FilepatternIsSet;
    ConfigNodePropertyArray m_Device_groups;
    bool m_Device_groupsIsSet;
    ConfigNodePropertyBoolean m_Build_page_nodes;
    bool m_Build_page_nodesIsSet;
    ConfigNodePropertyBoolean m_Build_client_libs;
    bool m_Build_client_libsIsSet;
    ConfigNodePropertyBoolean m_Build_canvas_component;
    bool m_Build_canvas_componentIsSet;
};

}
}
}
}

#endif /* ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties_H_ */