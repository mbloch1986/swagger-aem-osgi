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
 * OrgApacheSlingHapiImplHApiUtilImplProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingHapiImplHApiUtilImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingHapiImplHApiUtilImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
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

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingHapiImplHApiUtilImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheSlingHapiToolsResourcetype() const;
    bool orgApacheSlingHapiToolsResourcetypeIsSet() const;
    void unsetOrg_apache_sling_hapi_tools_resourcetype();
    void setOrgApacheSlingHapiToolsResourcetype(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheSlingHapiToolsCollectionresourcetype() const;
    bool orgApacheSlingHapiToolsCollectionresourcetypeIsSet() const;
    void unsetOrg_apache_sling_hapi_tools_collectionresourcetype();
    void setOrgApacheSlingHapiToolsCollectionresourcetype(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheSlingHapiToolsSearchpaths() const;
    bool orgApacheSlingHapiToolsSearchpathsIsSet() const;
    void unsetOrg_apache_sling_hapi_tools_searchpaths();
    void setOrgApacheSlingHapiToolsSearchpaths(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheSlingHapiToolsExternalurl() const;
    bool orgApacheSlingHapiToolsExternalurlIsSet() const;
    void unsetOrg_apache_sling_hapi_tools_externalurl();
    void setOrgApacheSlingHapiToolsExternalurl(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheSlingHapiToolsEnabled() const;
    bool orgApacheSlingHapiToolsEnabledIsSet() const;
    void unsetOrg_apache_sling_hapi_tools_enabled();
    void setOrgApacheSlingHapiToolsEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_sling_hapi_tools_resourcetype;
    bool m_Org_apache_sling_hapi_tools_resourcetypeIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_sling_hapi_tools_collectionresourcetype;
    bool m_Org_apache_sling_hapi_tools_collectionresourcetypeIsSet;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_sling_hapi_tools_searchpaths;
    bool m_Org_apache_sling_hapi_tools_searchpathsIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_sling_hapi_tools_externalurl;
    bool m_Org_apache_sling_hapi_tools_externalurlIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_sling_hapi_tools_enabled;
    bool m_Org_apache_sling_hapi_tools_enabledIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OrgApacheSlingHapiImplHApiUtilImplProperties_H_ */