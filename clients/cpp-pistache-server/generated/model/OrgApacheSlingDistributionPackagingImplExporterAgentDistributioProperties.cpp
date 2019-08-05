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


#include "OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties()
{
    m_NameIsSet = false;
    m_QueueIsSet = false;
    m_Drop_invalid_itemsIsSet = false;
    m_Agent_targetIsSet = false;
    
}

OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::~OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties()
{
}

void OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    if(m_QueueIsSet)
    {
        val["queue"] = ModelBase::toJson(m_Queue);
    }
    if(m_Drop_invalid_itemsIsSet)
    {
        val["drop.invalid.items"] = ModelBase::toJson(m_Drop_invalid_items);
    }
    if(m_Agent_targetIsSet)
    {
        val["agent.target"] = ModelBase::toJson(m_Agent_target);
    }
    

    return val;
}

void OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::fromJson(nlohmann::json& val)
{
    if(val.find("name") != val.end())
    {
        if(!val["name"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["name"]);
            setName( newItem );
        }
        
    }
    if(val.find("queue") != val.end())
    {
        if(!val["queue"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["queue"]);
            setQueue( newItem );
        }
        
    }
    if(val.find("drop.invalid.items") != val.end())
    {
        if(!val["drop.invalid.items"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["drop.invalid.items"]);
            setDropInvalidItems( newItem );
        }
        
    }
    if(val.find("agent.target") != val.end())
    {
        if(!val["agent.target"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["agent.target"]);
            setAgentTarget( newItem );
        }
        
    }
    
}


ConfigNodePropertyString OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::getName() const
{
    return m_Name;
}
void OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::setName(ConfigNodePropertyString const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::nameIsSet() const
{
    return m_NameIsSet;
}
void OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::unsetName()
{
    m_NameIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::getQueue() const
{
    return m_Queue;
}
void OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::setQueue(ConfigNodePropertyString const& value)
{
    m_Queue = value;
    m_QueueIsSet = true;
}
bool OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::queueIsSet() const
{
    return m_QueueIsSet;
}
void OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::unsetQueue()
{
    m_QueueIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::getDropInvalidItems() const
{
    return m_Drop_invalid_items;
}
void OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::setDropInvalidItems(ConfigNodePropertyBoolean const& value)
{
    m_Drop_invalid_items = value;
    m_Drop_invalid_itemsIsSet = true;
}
bool OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::dropInvalidItemsIsSet() const
{
    return m_Drop_invalid_itemsIsSet;
}
void OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::unsetDrop_invalid_items()
{
    m_Drop_invalid_itemsIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::getAgentTarget() const
{
    return m_Agent_target;
}
void OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::setAgentTarget(ConfigNodePropertyString const& value)
{
    m_Agent_target = value;
    m_Agent_targetIsSet = true;
}
bool OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::agentTargetIsSet() const
{
    return m_Agent_targetIsSet;
}
void OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties::unsetAgent_target()
{
    m_Agent_targetIsSet = false;
}

}
}
}
}
