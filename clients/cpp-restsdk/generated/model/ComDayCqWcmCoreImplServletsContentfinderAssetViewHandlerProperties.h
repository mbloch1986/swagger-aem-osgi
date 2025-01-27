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
 * ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties
    : public ModelBase
{
public:
    ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties();
    virtual ~ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getDamShowexpired() const;
    bool damShowexpiredIsSet() const;
    void unsetDam_showexpired();
    void setDamShowexpired(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getDamShowhidden() const;
    bool damShowhiddenIsSet() const;
    void unsetDam_showhidden();
    void setDamShowhidden(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getTagTitleSearch() const;
    bool tagTitleSearchIsSet() const;
    void unsetTagTitleSearch();
    void setTagTitleSearch(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getGuessTotal() const;
    bool guessTotalIsSet() const;
    void unsetGuessTotal();
    void setGuessTotal(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getDamExpiryProperty() const;
    bool damExpiryPropertyIsSet() const;
    void unsetDam_expiryProperty();
    void setDamExpiryProperty(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Dam_showexpired;
    bool m_Dam_showexpiredIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Dam_showhidden;
    bool m_Dam_showhiddenIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_TagTitleSearch;
    bool m_TagTitleSearchIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_GuessTotal;
    bool m_GuessTotalIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Dam_expiryProperty;
    bool m_Dam_expiryPropertyIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties_H_ */
