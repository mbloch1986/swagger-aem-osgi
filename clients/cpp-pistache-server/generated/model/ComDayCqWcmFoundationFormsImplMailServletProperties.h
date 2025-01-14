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
 * ComDayCqWcmFoundationFormsImplMailServletProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmFoundationFormsImplMailServletProperties_H_
#define ComDayCqWcmFoundationFormsImplMailServletProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmFoundationFormsImplMailServletProperties
    : public ModelBase
{
public:
    ComDayCqWcmFoundationFormsImplMailServletProperties();
    virtual ~ComDayCqWcmFoundationFormsImplMailServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmFoundationFormsImplMailServletProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getSlingServletResourceTypes() const;
    void setSlingServletResourceTypes(ConfigNodePropertyString const& value);
    bool slingServletResourceTypesIsSet() const;
    void unsetSling_servlet_resourceTypes();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getSlingServletSelectors() const;
    void setSlingServletSelectors(ConfigNodePropertyString const& value);
    bool slingServletSelectorsIsSet() const;
    void unsetSling_servlet_selectors();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getResourceWhitelist() const;
    void setResourceWhitelist(ConfigNodePropertyArray const& value);
    bool resourceWhitelistIsSet() const;
    void unsetResource_whitelist();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getResourceBlacklist() const;
    void setResourceBlacklist(ConfigNodePropertyString const& value);
    bool resourceBlacklistIsSet() const;
    void unsetResource_blacklist();

protected:
    ConfigNodePropertyString m_Sling_servlet_resourceTypes;
    bool m_Sling_servlet_resourceTypesIsSet;
    ConfigNodePropertyString m_Sling_servlet_selectors;
    bool m_Sling_servlet_selectorsIsSet;
    ConfigNodePropertyArray m_Resource_whitelist;
    bool m_Resource_whitelistIsSet;
    ConfigNodePropertyString m_Resource_blacklist;
    bool m_Resource_blacklistIsSet;
};

}
}
}
}

#endif /* ComDayCqWcmFoundationFormsImplMailServletProperties_H_ */
