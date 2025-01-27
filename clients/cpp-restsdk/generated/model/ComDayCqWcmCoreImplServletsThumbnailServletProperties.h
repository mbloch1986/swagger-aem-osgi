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
 * ComDayCqWcmCoreImplServletsThumbnailServletProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplServletsThumbnailServletProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplServletsThumbnailServletProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmCoreImplServletsThumbnailServletProperties
    : public ModelBase
{
public:
    ComDayCqWcmCoreImplServletsThumbnailServletProperties();
    virtual ~ComDayCqWcmCoreImplServletsThumbnailServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmCoreImplServletsThumbnailServletProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getWorkspace() const;
    bool workspaceIsSet() const;
    void unsetWorkspace();
    void setWorkspace(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getDimensions() const;
    bool dimensionsIsSet() const;
    void unsetDimensions();
    void setDimensions(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Workspace;
    bool m_WorkspaceIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Dimensions;
    bool m_DimensionsIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplServletsThumbnailServletProperties_H_ */
