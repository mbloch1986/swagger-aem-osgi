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
 * OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties_H_
#define OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties_H_


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
class  OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties
    : public ModelBase
{
public:
    OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties();
    virtual ~OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getAlias() const;
    void setAlias(ConfigNodePropertyString const& value);
    bool aliasIsSet() const;
    void unsetAlias();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getDavCreateAbsoluteUri() const;
    void setDavCreateAbsoluteUri(ConfigNodePropertyBoolean const& value);
    bool davCreateAbsoluteUriIsSet() const;
    void unsetDav_create_absolute_uri();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getDavProtectedhandlers() const;
    void setDavProtectedhandlers(ConfigNodePropertyString const& value);
    bool davProtectedhandlersIsSet() const;
    void unsetDav_protectedhandlers();

protected:
    ConfigNodePropertyString m_Alias;
    bool m_AliasIsSet;
    ConfigNodePropertyBoolean m_Dav_create_absolute_uri;
    bool m_Dav_create_absolute_uriIsSet;
    ConfigNodePropertyString m_Dav_protectedhandlers;
    bool m_Dav_protectedhandlersIsSet;
};

}
}
}
}

#endif /* OrgApacheSlingJcrDavexImplServletsSlingDavExServletProperties_H_ */