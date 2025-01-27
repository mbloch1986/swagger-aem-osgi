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


#include "ComAdobeCqWcmStyleInternalComponentStyleInfoCacheImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqWcmStyleInternalComponentStyleInfoCacheImplProperties::ComAdobeCqWcmStyleInternalComponentStyleInfoCacheImplProperties()
{
    m_SizeIsSet = false;
    
}

ComAdobeCqWcmStyleInternalComponentStyleInfoCacheImplProperties::~ComAdobeCqWcmStyleInternalComponentStyleInfoCacheImplProperties()
{
}

void ComAdobeCqWcmStyleInternalComponentStyleInfoCacheImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqWcmStyleInternalComponentStyleInfoCacheImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_SizeIsSet)
    {
        val["size"] = ModelBase::toJson(m_Size);
    }
    

    return val;
}

void ComAdobeCqWcmStyleInternalComponentStyleInfoCacheImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("size") != val.end())
    {
        if(!val["size"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["size"]);
            setSize( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger ComAdobeCqWcmStyleInternalComponentStyleInfoCacheImplProperties::getSize() const
{
    return m_Size;
}
void ComAdobeCqWcmStyleInternalComponentStyleInfoCacheImplProperties::setSize(ConfigNodePropertyInteger const& value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool ComAdobeCqWcmStyleInternalComponentStyleInfoCacheImplProperties::sizeIsSet() const
{
    return m_SizeIsSet;
}
void ComAdobeCqWcmStyleInternalComponentStyleInfoCacheImplProperties::unsetSize()
{
    m_SizeIsSet = false;
}

}
}
}
}

