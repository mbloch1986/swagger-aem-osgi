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
 * ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties
    : public ModelBase
{
public:
    ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties();
    virtual ~ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getProviderRoot() const;
    bool providerRootIsSet() const;
    void unsetProvider_root();
    void setProviderRoot(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Provider_root;
    bool m_Provider_rootIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties_H_ */