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
 * ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties();
    virtual ~ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSlingServletSelectors() const;
    bool slingServletSelectorsIsSet() const;
    void unsetSling_servlet_selectors();
    void setSlingServletSelectors(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSlingServletExtensions() const;
    bool slingServletExtensionsIsSet() const;
    void unsetSling_servlet_extensions();
    void setSlingServletExtensions(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Sling_servlet_selectors;
    bool m_Sling_servlet_selectorsIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Sling_servlet_extensions;
    bool m_Sling_servlet_extensionsIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties_H_ */