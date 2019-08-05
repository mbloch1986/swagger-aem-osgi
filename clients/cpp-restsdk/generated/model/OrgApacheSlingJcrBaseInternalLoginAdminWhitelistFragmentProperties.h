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
 * OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties_H_


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
class  OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties
    : public ModelBase
{
public:
    OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties();
    virtual ~OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getWhitelistName() const;
    bool whitelistNameIsSet() const;
    void unsetWhitelist_name();
    void setWhitelistName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getWhitelistBundles() const;
    bool whitelistBundlesIsSet() const;
    void unsetWhitelist_bundles();
    void setWhitelistBundles(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Whitelist_name;
    bool m_Whitelist_nameIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Whitelist_bundles;
    bool m_Whitelist_bundlesIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingJcrBaseInternalLoginAdminWhitelistFragmentProperties_H_ */