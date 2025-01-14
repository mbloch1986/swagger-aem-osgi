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


#include "ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties::ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties()
{
    m_PriorityIsSet = false;
    
}

ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties::~ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties()
{
}

void ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_PriorityIsSet)
    {
        val["priority"] = ModelBase::toJson(m_Priority);
    }
    

    return val;
}

void ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties::fromJson(nlohmann::json& val)
{
    if(val.find("priority") != val.end())
    {
        if(!val["priority"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["priority"]);
            setPriority( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties::getPriority() const
{
    return m_Priority;
}
void ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties::setPriority(ConfigNodePropertyInteger const& value)
{
    m_Priority = value;
    m_PriorityIsSet = true;
}
bool ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties::priorityIsSet() const
{
    return m_PriorityIsSet;
}
void ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties::unsetPriority()
{
    m_PriorityIsSet = false;
}

}
}
}
}

