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
 * ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties();
    virtual ~ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getEnableFallback() const;
    bool enableFallbackIsSet() const;
    void unsetEnableFallback();
    void setEnableFallback(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_EnableFallback;
    bool m_EnableFallbackIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties_H_ */