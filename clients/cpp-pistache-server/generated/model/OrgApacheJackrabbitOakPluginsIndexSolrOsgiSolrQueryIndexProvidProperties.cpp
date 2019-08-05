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


#include "OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties()
{
    m_Query_aggregationIsSet = false;
    
}

OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::~OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties()
{
}

void OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Query_aggregationIsSet)
    {
        val["query.aggregation"] = ModelBase::toJson(m_Query_aggregation);
    }
    

    return val;
}

void OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::fromJson(nlohmann::json& val)
{
    if(val.find("query.aggregation") != val.end())
    {
        if(!val["query.aggregation"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["query.aggregation"]);
            setQueryAggregation( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::getQueryAggregation() const
{
    return m_Query_aggregation;
}
void OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::setQueryAggregation(ConfigNodePropertyBoolean const& value)
{
    m_Query_aggregation = value;
    m_Query_aggregationIsSet = true;
}
bool OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::queryAggregationIsSet() const
{
    return m_Query_aggregationIsSet;
}
void OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrQueryIndexProvidProperties::unsetQuery_aggregation()
{
    m_Query_aggregationIsSet = false;
}

}
}
}
}
