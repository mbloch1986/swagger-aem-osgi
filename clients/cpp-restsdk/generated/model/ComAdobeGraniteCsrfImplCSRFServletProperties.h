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
 * ComAdobeGraniteCsrfImplCSRFServletProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteCsrfImplCSRFServletProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteCsrfImplCSRFServletProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteCsrfImplCSRFServletProperties
    : public ModelBase
{
public:
    ComAdobeGraniteCsrfImplCSRFServletProperties();
    virtual ~ComAdobeGraniteCsrfImplCSRFServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteCsrfImplCSRFServletProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getCsrfTokenExpiresIn() const;
    bool csrfTokenExpiresInIsSet() const;
    void unsetCsrf_token_expires_in();
    void setCsrfTokenExpiresIn(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSlingAuthRequirements() const;
    bool slingAuthRequirementsIsSet() const;
    void unsetSling_auth_requirements();
    void setSlingAuthRequirements(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Csrf_token_expires_in;
    bool m_Csrf_token_expires_inIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Sling_auth_requirements;
    bool m_Sling_auth_requirementsIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeGraniteCsrfImplCSRFServletProperties_H_ */
