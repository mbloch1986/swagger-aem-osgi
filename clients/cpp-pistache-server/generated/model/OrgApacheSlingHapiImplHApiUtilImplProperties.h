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
 * OrgApacheSlingHapiImplHApiUtilImplProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingHapiImplHApiUtilImplProperties_H_
#define OrgApacheSlingHapiImplHApiUtilImplProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingHapiImplHApiUtilImplProperties
    : public ModelBase
{
public:
    OrgApacheSlingHapiImplHApiUtilImplProperties();
    virtual ~OrgApacheSlingHapiImplHApiUtilImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingHapiImplHApiUtilImplProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOrgApacheSlingHapiToolsResourcetype() const;
    void setOrgApacheSlingHapiToolsResourcetype(ConfigNodePropertyString const& value);
    bool orgApacheSlingHapiToolsResourcetypeIsSet() const;
    void unsetOrg_apache_sling_hapi_tools_resourcetype();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOrgApacheSlingHapiToolsCollectionresourcetype() const;
    void setOrgApacheSlingHapiToolsCollectionresourcetype(ConfigNodePropertyString const& value);
    bool orgApacheSlingHapiToolsCollectionresourcetypeIsSet() const;
    void unsetOrg_apache_sling_hapi_tools_collectionresourcetype();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getOrgApacheSlingHapiToolsSearchpaths() const;
    void setOrgApacheSlingHapiToolsSearchpaths(ConfigNodePropertyArray const& value);
    bool orgApacheSlingHapiToolsSearchpathsIsSet() const;
    void unsetOrg_apache_sling_hapi_tools_searchpaths();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getOrgApacheSlingHapiToolsExternalurl() const;
    void setOrgApacheSlingHapiToolsExternalurl(ConfigNodePropertyString const& value);
    bool orgApacheSlingHapiToolsExternalurlIsSet() const;
    void unsetOrg_apache_sling_hapi_tools_externalurl();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getOrgApacheSlingHapiToolsEnabled() const;
    void setOrgApacheSlingHapiToolsEnabled(ConfigNodePropertyBoolean const& value);
    bool orgApacheSlingHapiToolsEnabledIsSet() const;
    void unsetOrg_apache_sling_hapi_tools_enabled();

protected:
    ConfigNodePropertyString m_Org_apache_sling_hapi_tools_resourcetype;
    bool m_Org_apache_sling_hapi_tools_resourcetypeIsSet;
    ConfigNodePropertyString m_Org_apache_sling_hapi_tools_collectionresourcetype;
    bool m_Org_apache_sling_hapi_tools_collectionresourcetypeIsSet;
    ConfigNodePropertyArray m_Org_apache_sling_hapi_tools_searchpaths;
    bool m_Org_apache_sling_hapi_tools_searchpathsIsSet;
    ConfigNodePropertyString m_Org_apache_sling_hapi_tools_externalurl;
    bool m_Org_apache_sling_hapi_tools_externalurlIsSet;
    ConfigNodePropertyBoolean m_Org_apache_sling_hapi_tools_enabled;
    bool m_Org_apache_sling_hapi_tools_enabledIsSet;
};

}
}
}
}

#endif /* OrgApacheSlingHapiImplHApiUtilImplProperties_H_ */