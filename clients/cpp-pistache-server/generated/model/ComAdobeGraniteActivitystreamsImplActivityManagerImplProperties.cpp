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


#include "ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties()
{
    m_Aggregate_relationshipsIsSet = false;
    m_Aggregate_descend_virtualIsSet = false;
    
}

ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::~ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties()
{
}

void ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Aggregate_relationshipsIsSet)
    {
        val["aggregate.relationships"] = ModelBase::toJson(m_Aggregate_relationships);
    }
    if(m_Aggregate_descend_virtualIsSet)
    {
        val["aggregate.descend.virtual"] = ModelBase::toJson(m_Aggregate_descend_virtual);
    }
    

    return val;
}

void ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("aggregate.relationships") != val.end())
    {
        if(!val["aggregate.relationships"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["aggregate.relationships"]);
            setAggregateRelationships( newItem );
        }
        
    }
    if(val.find("aggregate.descend.virtual") != val.end())
    {
        if(!val["aggregate.descend.virtual"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["aggregate.descend.virtual"]);
            setAggregateDescendVirtual( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::getAggregateRelationships() const
{
    return m_Aggregate_relationships;
}
void ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::setAggregateRelationships(ConfigNodePropertyArray const& value)
{
    m_Aggregate_relationships = value;
    m_Aggregate_relationshipsIsSet = true;
}
bool ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::aggregateRelationshipsIsSet() const
{
    return m_Aggregate_relationshipsIsSet;
}
void ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::unsetAggregate_relationships()
{
    m_Aggregate_relationshipsIsSet = false;
}
ConfigNodePropertyBoolean ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::getAggregateDescendVirtual() const
{
    return m_Aggregate_descend_virtual;
}
void ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::setAggregateDescendVirtual(ConfigNodePropertyBoolean const& value)
{
    m_Aggregate_descend_virtual = value;
    m_Aggregate_descend_virtualIsSet = true;
}
bool ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::aggregateDescendVirtualIsSet() const
{
    return m_Aggregate_descend_virtualIsSet;
}
void ComAdobeGraniteActivitystreamsImplActivityManagerImplProperties::unsetAggregate_descend_virtual()
{
    m_Aggregate_descend_virtualIsSet = false;
}

}
}
}
}

