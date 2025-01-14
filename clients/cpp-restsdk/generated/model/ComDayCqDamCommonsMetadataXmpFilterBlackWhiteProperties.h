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
 * ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties
    : public ModelBase
{
public:
    ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties();
    virtual ~ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getXmpFilterApplyWhitelist() const;
    bool xmpFilterApplyWhitelistIsSet() const;
    void unsetXmp_filter_apply_whitelist();
    void setXmpFilterApplyWhitelist(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getXmpFilterWhitelist() const;
    bool xmpFilterWhitelistIsSet() const;
    void unsetXmp_filter_whitelist();
    void setXmpFilterWhitelist(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getXmpFilterApplyBlacklist() const;
    bool xmpFilterApplyBlacklistIsSet() const;
    void unsetXmp_filter_apply_blacklist();
    void setXmpFilterApplyBlacklist(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getXmpFilterBlacklist() const;
    bool xmpFilterBlacklistIsSet() const;
    void unsetXmp_filter_blacklist();
    void setXmpFilterBlacklist(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Xmp_filter_apply_whitelist;
    bool m_Xmp_filter_apply_whitelistIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Xmp_filter_whitelist;
    bool m_Xmp_filter_whitelistIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Xmp_filter_apply_blacklist;
    bool m_Xmp_filter_apply_blacklistIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Xmp_filter_blacklist;
    bool m_Xmp_filter_blacklistIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqDamCommonsMetadataXmpFilterBlackWhiteProperties_H_ */
