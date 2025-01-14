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


#include "ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties()
{
    m_PriorityOrderIsSet = false;
    m_ReplyEmailPatternsIsSet = false;
    
}

ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::~ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties()
{
}

void ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_PriorityOrderIsSet)
    {
        val["priorityOrder"] = ModelBase::toJson(m_PriorityOrder);
    }
    if(m_ReplyEmailPatternsIsSet)
    {
        val["replyEmailPatterns"] = ModelBase::toJson(m_ReplyEmailPatterns);
    }
    

    return val;
}

void ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::fromJson(nlohmann::json& val)
{
    if(val.find("priorityOrder") != val.end())
    {
        if(!val["priorityOrder"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["priorityOrder"]);
            setPriorityOrder( newItem );
        }
        
    }
    if(val.find("replyEmailPatterns") != val.end())
    {
        if(!val["replyEmailPatterns"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["replyEmailPatterns"]);
            setReplyEmailPatterns( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::getPriorityOrder() const
{
    return m_PriorityOrder;
}
void ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::setPriorityOrder(ConfigNodePropertyInteger const& value)
{
    m_PriorityOrder = value;
    m_PriorityOrderIsSet = true;
}
bool ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::priorityOrderIsSet() const
{
    return m_PriorityOrderIsSet;
}
void ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::unsetPriorityOrder()
{
    m_PriorityOrderIsSet = false;
}
ConfigNodePropertyArray ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::getReplyEmailPatterns() const
{
    return m_ReplyEmailPatterns;
}
void ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::setReplyEmailPatterns(ConfigNodePropertyArray const& value)
{
    m_ReplyEmailPatterns = value;
    m_ReplyEmailPatternsIsSet = true;
}
bool ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::replyEmailPatternsIsSet() const
{
    return m_ReplyEmailPatternsIsSet;
}
void ComAdobeCqSocialCommonsEmailreplyImplCustomEmailClientProviderProperties::unsetReplyEmailPatterns()
{
    m_ReplyEmailPatternsIsSet = false;
}

}
}
}
}

