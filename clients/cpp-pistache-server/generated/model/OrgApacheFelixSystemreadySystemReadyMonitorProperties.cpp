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


#include "OrgApacheFelixSystemreadySystemReadyMonitorProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheFelixSystemreadySystemReadyMonitorProperties::OrgApacheFelixSystemreadySystemReadyMonitorProperties()
{
    m_Poll_intervalIsSet = false;
    
}

OrgApacheFelixSystemreadySystemReadyMonitorProperties::~OrgApacheFelixSystemreadySystemReadyMonitorProperties()
{
}

void OrgApacheFelixSystemreadySystemReadyMonitorProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheFelixSystemreadySystemReadyMonitorProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Poll_intervalIsSet)
    {
        val["poll.interval"] = ModelBase::toJson(m_Poll_interval);
    }
    

    return val;
}

void OrgApacheFelixSystemreadySystemReadyMonitorProperties::fromJson(nlohmann::json& val)
{
    if(val.find("poll.interval") != val.end())
    {
        if(!val["poll.interval"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["poll.interval"]);
            setPollInterval( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger OrgApacheFelixSystemreadySystemReadyMonitorProperties::getPollInterval() const
{
    return m_Poll_interval;
}
void OrgApacheFelixSystemreadySystemReadyMonitorProperties::setPollInterval(ConfigNodePropertyInteger const& value)
{
    m_Poll_interval = value;
    m_Poll_intervalIsSet = true;
}
bool OrgApacheFelixSystemreadySystemReadyMonitorProperties::pollIntervalIsSet() const
{
    return m_Poll_intervalIsSet;
}
void OrgApacheFelixSystemreadySystemReadyMonitorProperties::unsetPoll_interval()
{
    m_Poll_intervalIsSet = false;
}

}
}
}
}

