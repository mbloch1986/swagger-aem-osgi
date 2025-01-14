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
 * ComAdobeGraniteWorkflowCorePayloadMapCacheProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteWorkflowCorePayloadMapCacheProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteWorkflowCorePayloadMapCacheProperties_H_


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
class  ComAdobeGraniteWorkflowCorePayloadMapCacheProperties
    : public ModelBase
{
public:
    ComAdobeGraniteWorkflowCorePayloadMapCacheProperties();
    virtual ~ComAdobeGraniteWorkflowCorePayloadMapCacheProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteWorkflowCorePayloadMapCacheProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getGetSystemWorkflowModels() const;
    bool getSystemWorkflowModelsIsSet() const;
    void unsetGetSystemWorkflowModels();
    void setGetSystemWorkflowModels(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getGetPackageRootPath() const;
    bool getPackageRootPathIsSet() const;
    void unsetGetPackageRootPath();
    void setGetPackageRootPath(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_GetSystemWorkflowModels;
    bool m_GetSystemWorkflowModelsIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_GetPackageRootPath;
    bool m_GetPackageRootPathIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteWorkflowCorePayloadMapCacheProperties_H_ */
