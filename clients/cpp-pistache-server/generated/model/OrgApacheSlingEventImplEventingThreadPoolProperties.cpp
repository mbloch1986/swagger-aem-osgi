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


#include "OrgApacheSlingEventImplEventingThreadPoolProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingEventImplEventingThreadPoolProperties::OrgApacheSlingEventImplEventingThreadPoolProperties()
{
    m_MinPoolSizeIsSet = false;
    
}

OrgApacheSlingEventImplEventingThreadPoolProperties::~OrgApacheSlingEventImplEventingThreadPoolProperties()
{
}

void OrgApacheSlingEventImplEventingThreadPoolProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingEventImplEventingThreadPoolProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_MinPoolSizeIsSet)
    {
        val["minPoolSize"] = ModelBase::toJson(m_MinPoolSize);
    }
    

    return val;
}

void OrgApacheSlingEventImplEventingThreadPoolProperties::fromJson(nlohmann::json& val)
{
    if(val.find("minPoolSize") != val.end())
    {
        if(!val["minPoolSize"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["minPoolSize"]);
            setMinPoolSize( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger OrgApacheSlingEventImplEventingThreadPoolProperties::getMinPoolSize() const
{
    return m_MinPoolSize;
}
void OrgApacheSlingEventImplEventingThreadPoolProperties::setMinPoolSize(ConfigNodePropertyInteger const& value)
{
    m_MinPoolSize = value;
    m_MinPoolSizeIsSet = true;
}
bool OrgApacheSlingEventImplEventingThreadPoolProperties::minPoolSizeIsSet() const
{
    return m_MinPoolSizeIsSet;
}
void OrgApacheSlingEventImplEventingThreadPoolProperties::unsetMinPoolSize()
{
    m_MinPoolSizeIsSet = false;
}

}
}
}
}

