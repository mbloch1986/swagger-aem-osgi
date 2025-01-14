/**
* Adobe Experience Manager OSGI config (AEM) API
* Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
*
* OpenAPI spec version: 1.0.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties_H_
#define ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
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

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getDamShowexpired() const;
    void setDamShowexpired(ConfigNodePropertyBoolean const& value);
    bool damShowexpiredIsSet() const;
    void unsetDam_showexpired();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getDamShowhidden() const;
    void setDamShowhidden(ConfigNodePropertyBoolean const& value);
    bool damShowhiddenIsSet() const;
    void unsetDam_showhidden();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getTagTitleSearch() const;
    void setTagTitleSearch(ConfigNodePropertyBoolean const& value);
    bool tagTitleSearchIsSet() const;
    void unsetTagTitleSearch();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getGuessTotal() const;
    void setGuessTotal(ConfigNodePropertyString const& value);
    bool guessTotalIsSet() const;
    void unsetGuessTotal();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getDamExpiryProperty() const;
    void setDamExpiryProperty(ConfigNodePropertyString const& value);
    bool damExpiryPropertyIsSet() const;
    void unsetDam_expiryProperty();

protected:
    ConfigNodePropertyBoolean m_Dam_showexpired;
    bool m_Dam_showexpiredIsSet;
    ConfigNodePropertyBoolean m_Dam_showhidden;
    bool m_Dam_showhiddenIsSet;
    ConfigNodePropertyBoolean m_TagTitleSearch;
    bool m_TagTitleSearchIsSet;
    ConfigNodePropertyString m_GuessTotal;
    bool m_GuessTotalIsSet;
    ConfigNodePropertyString m_Dam_expiryProperty;
    bool m_Dam_expiryPropertyIsSet;
};

}
}
}
}

#endif /* ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties_H_ */
