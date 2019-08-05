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
 * OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties
    : public ModelBase
{
public:
    OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties();
    virtual ~OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getPrincipalNames() const;
    bool principalNamesIsSet() const;
    void unsetPrincipalNames();
    void setPrincipalNames(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_PrincipalNames;
    bool m_PrincipalNamesIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugExcluProperties_H_ */