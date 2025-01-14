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


#include "ComAdobeCqDamDmProcessImagePTiffManagerImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqDamDmProcessImagePTiffManagerImplProperties::ComAdobeCqDamDmProcessImagePTiffManagerImplProperties()
{
    m_MaxMemoryIsSet = false;
    
}

ComAdobeCqDamDmProcessImagePTiffManagerImplProperties::~ComAdobeCqDamDmProcessImagePTiffManagerImplProperties()
{
}

void ComAdobeCqDamDmProcessImagePTiffManagerImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqDamDmProcessImagePTiffManagerImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_MaxMemoryIsSet)
    {
        val["maxMemory"] = ModelBase::toJson(m_MaxMemory);
    }
    

    return val;
}

void ComAdobeCqDamDmProcessImagePTiffManagerImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("maxMemory") != val.end())
    {
        if(!val["maxMemory"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["maxMemory"]);
            setMaxMemory( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger ComAdobeCqDamDmProcessImagePTiffManagerImplProperties::getMaxMemory() const
{
    return m_MaxMemory;
}
void ComAdobeCqDamDmProcessImagePTiffManagerImplProperties::setMaxMemory(ConfigNodePropertyInteger const& value)
{
    m_MaxMemory = value;
    m_MaxMemoryIsSet = true;
}
bool ComAdobeCqDamDmProcessImagePTiffManagerImplProperties::maxMemoryIsSet() const
{
    return m_MaxMemoryIsSet;
}
void ComAdobeCqDamDmProcessImagePTiffManagerImplProperties::unsetMaxMemory()
{
    m_MaxMemoryIsSet = false;
}

}
}
}
}

