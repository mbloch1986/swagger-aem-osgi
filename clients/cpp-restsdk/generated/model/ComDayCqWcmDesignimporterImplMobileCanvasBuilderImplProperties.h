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

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
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

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getFilepattern() const;
    bool filepatternIsSet() const;
    void unsetFilepattern();
    void setFilepattern(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getDeviceGroups() const;
    bool deviceGroupsIsSet() const;
    void unsetDevice_groups();
    void setDeviceGroups(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getBuildPageNodes() const;
    bool buildPageNodesIsSet() const;
    void unsetBuild_page_nodes();
    void setBuildPageNodes(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getBuildClientLibs() const;
    bool buildClientLibsIsSet() const;
    void unsetBuild_client_libs();
    void setBuildClientLibs(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getBuildCanvasComponent() const;
    bool buildCanvasComponentIsSet() const;
    void unsetBuild_canvas_component();
    void setBuildCanvasComponent(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Filepattern;
    bool m_FilepatternIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Device_groups;
    bool m_Device_groupsIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Build_page_nodes;
    bool m_Build_page_nodesIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Build_client_libs;
    bool m_Build_client_libsIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Build_canvas_component;
    bool m_Build_canvas_componentIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmDesignimporterImplMobileCanvasBuilderImplProperties_H_ */
