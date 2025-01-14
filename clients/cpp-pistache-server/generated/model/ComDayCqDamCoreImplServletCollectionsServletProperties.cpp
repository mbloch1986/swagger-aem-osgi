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


#include "ComDayCqDamCoreImplServletCollectionsServletProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqDamCoreImplServletCollectionsServletProperties::ComDayCqDamCoreImplServletCollectionsServletProperties()
{
    m_Cq_dam_batch_collections_propertiesIsSet = false;
    m_Cq_dam_batch_collections_limitIsSet = false;
    
}

ComDayCqDamCoreImplServletCollectionsServletProperties::~ComDayCqDamCoreImplServletCollectionsServletProperties()
{
}

void ComDayCqDamCoreImplServletCollectionsServletProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqDamCoreImplServletCollectionsServletProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Cq_dam_batch_collections_propertiesIsSet)
    {
        val["cq.dam.batch.collections.properties"] = ModelBase::toJson(m_Cq_dam_batch_collections_properties);
    }
    if(m_Cq_dam_batch_collections_limitIsSet)
    {
        val["cq.dam.batch.collections.limit"] = ModelBase::toJson(m_Cq_dam_batch_collections_limit);
    }
    

    return val;
}

void ComDayCqDamCoreImplServletCollectionsServletProperties::fromJson(nlohmann::json& val)
{
    if(val.find("cq.dam.batch.collections.properties") != val.end())
    {
        if(!val["cq.dam.batch.collections.properties"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["cq.dam.batch.collections.properties"]);
            setCqDamBatchCollectionsProperties( newItem );
        }
        
    }
    if(val.find("cq.dam.batch.collections.limit") != val.end())
    {
        if(!val["cq.dam.batch.collections.limit"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["cq.dam.batch.collections.limit"]);
            setCqDamBatchCollectionsLimit( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray ComDayCqDamCoreImplServletCollectionsServletProperties::getCqDamBatchCollectionsProperties() const
{
    return m_Cq_dam_batch_collections_properties;
}
void ComDayCqDamCoreImplServletCollectionsServletProperties::setCqDamBatchCollectionsProperties(ConfigNodePropertyArray const& value)
{
    m_Cq_dam_batch_collections_properties = value;
    m_Cq_dam_batch_collections_propertiesIsSet = true;
}
bool ComDayCqDamCoreImplServletCollectionsServletProperties::cqDamBatchCollectionsPropertiesIsSet() const
{
    return m_Cq_dam_batch_collections_propertiesIsSet;
}
void ComDayCqDamCoreImplServletCollectionsServletProperties::unsetCq_dam_batch_collections_properties()
{
    m_Cq_dam_batch_collections_propertiesIsSet = false;
}
ConfigNodePropertyInteger ComDayCqDamCoreImplServletCollectionsServletProperties::getCqDamBatchCollectionsLimit() const
{
    return m_Cq_dam_batch_collections_limit;
}
void ComDayCqDamCoreImplServletCollectionsServletProperties::setCqDamBatchCollectionsLimit(ConfigNodePropertyInteger const& value)
{
    m_Cq_dam_batch_collections_limit = value;
    m_Cq_dam_batch_collections_limitIsSet = true;
}
bool ComDayCqDamCoreImplServletCollectionsServletProperties::cqDamBatchCollectionsLimitIsSet() const
{
    return m_Cq_dam_batch_collections_limitIsSet;
}
void ComDayCqDamCoreImplServletCollectionsServletProperties::unsetCq_dam_batch_collections_limit()
{
    m_Cq_dam_batch_collections_limitIsSet = false;
}

}
}
}
}

