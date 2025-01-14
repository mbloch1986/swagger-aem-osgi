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
 * OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties.h
 *
 * 
 */

#ifndef OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties_H_
#define OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties
    : public ModelBase
{
public:
    OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties();
    virtual ~OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getSolrHomePath() const;
    void setSolrHomePath(ConfigNodePropertyString const& value);
    bool solrHomePathIsSet() const;
    void unsetSolr_home_path();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getSolrCoreName() const;
    void setSolrCoreName(ConfigNodePropertyString const& value);
    bool solrCoreNameIsSet() const;
    void unsetSolr_core_name();

protected:
    ConfigNodePropertyString m_Solr_home_path;
    bool m_Solr_home_pathIsSet;
    ConfigNodePropertyString m_Solr_core_name;
    bool m_Solr_core_nameIsSet;
};

}
}
}
}

#endif /* OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties_H_ */
