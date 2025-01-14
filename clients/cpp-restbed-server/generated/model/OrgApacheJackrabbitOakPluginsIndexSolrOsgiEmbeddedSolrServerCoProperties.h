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
 * OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties.h
 *
 * 
 */

#ifndef OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties_H_
#define OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties_H_



#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties
{
public:
    OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties();
    virtual ~OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSolrHomePath() const;
    void setSolrHomePath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSolrCoreName() const;
    void setSolrCoreName(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Solr_home_path;
    std::shared_ptr<ConfigNodePropertyString> m_Solr_core_name;
};

}
}
}
}

#endif /* OrgApacheJackrabbitOakPluginsIndexSolrOsgiEmbeddedSolrServerCoProperties_H_ */
