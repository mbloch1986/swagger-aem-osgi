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
 * ComDayCqDamCoreImplServletAssetStatusServletProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamCoreImplServletAssetStatusServletProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamCoreImplServletAssetStatusServletProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyInteger.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCoreImplServletAssetStatusServletProperties
    : public ModelBase
{
public:
    ComDayCqDamCoreImplServletAssetStatusServletProperties();
    virtual ~ComDayCqDamCoreImplServletAssetStatusServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplServletAssetStatusServletProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCqDamBatchStatusMaxassets() const;
    bool cqDamBatchStatusMaxassetsIsSet() const;
    void unsetCq_dam_batch_status_maxassets();
    void setCqDamBatchStatusMaxassets(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Cq_dam_batch_status_maxassets;
    bool m_Cq_dam_batch_status_maxassetsIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamCoreImplServletAssetStatusServletProperties_H_ */
