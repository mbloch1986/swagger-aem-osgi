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


#include "OrgApacheSlingI18nImplI18NFilterProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingI18nImplI18NFilterProperties::OrgApacheSlingI18nImplI18NFilterProperties()
{
    m_Service_rankingIsSet = false;
    m_Sling_filter_scopeIsSet = false;
    
}

OrgApacheSlingI18nImplI18NFilterProperties::~OrgApacheSlingI18nImplI18NFilterProperties()
{
}

void OrgApacheSlingI18nImplI18NFilterProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingI18nImplI18NFilterProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Service_rankingIsSet)
    {
        val["service.ranking"] = ModelBase::toJson(m_Service_ranking);
    }
    if(m_Sling_filter_scopeIsSet)
    {
        val["sling.filter.scope"] = ModelBase::toJson(m_Sling_filter_scope);
    }
    

    return val;
}

void OrgApacheSlingI18nImplI18NFilterProperties::fromJson(nlohmann::json& val)
{
    if(val.find("service.ranking") != val.end())
    {
        if(!val["service.ranking"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["service.ranking"]);
            setServiceRanking( newItem );
        }
        
    }
    if(val.find("sling.filter.scope") != val.end())
    {
        if(!val["sling.filter.scope"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["sling.filter.scope"]);
            setSlingFilterScope( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger OrgApacheSlingI18nImplI18NFilterProperties::getServiceRanking() const
{
    return m_Service_ranking;
}
void OrgApacheSlingI18nImplI18NFilterProperties::setServiceRanking(ConfigNodePropertyInteger const& value)
{
    m_Service_ranking = value;
    m_Service_rankingIsSet = true;
}
bool OrgApacheSlingI18nImplI18NFilterProperties::serviceRankingIsSet() const
{
    return m_Service_rankingIsSet;
}
void OrgApacheSlingI18nImplI18NFilterProperties::unsetService_ranking()
{
    m_Service_rankingIsSet = false;
}
ConfigNodePropertyArray OrgApacheSlingI18nImplI18NFilterProperties::getSlingFilterScope() const
{
    return m_Sling_filter_scope;
}
void OrgApacheSlingI18nImplI18NFilterProperties::setSlingFilterScope(ConfigNodePropertyArray const& value)
{
    m_Sling_filter_scope = value;
    m_Sling_filter_scopeIsSet = true;
}
bool OrgApacheSlingI18nImplI18NFilterProperties::slingFilterScopeIsSet() const
{
    return m_Sling_filter_scopeIsSet;
}
void OrgApacheSlingI18nImplI18NFilterProperties::unsetSling_filter_scope()
{
    m_Sling_filter_scopeIsSet = false;
}

}
}
}
}

