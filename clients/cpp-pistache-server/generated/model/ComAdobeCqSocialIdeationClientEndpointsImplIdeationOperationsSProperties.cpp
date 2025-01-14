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


#include "ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties()
{
    m_FieldWhitelistIsSet = false;
    m_AttachmentTypeBlacklistIsSet = false;
    
}

ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::~ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties()
{
}

void ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_FieldWhitelistIsSet)
    {
        val["fieldWhitelist"] = ModelBase::toJson(m_FieldWhitelist);
    }
    if(m_AttachmentTypeBlacklistIsSet)
    {
        val["attachmentTypeBlacklist"] = ModelBase::toJson(m_AttachmentTypeBlacklist);
    }
    

    return val;
}

void ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::fromJson(nlohmann::json& val)
{
    if(val.find("fieldWhitelist") != val.end())
    {
        if(!val["fieldWhitelist"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["fieldWhitelist"]);
            setFieldWhitelist( newItem );
        }
        
    }
    if(val.find("attachmentTypeBlacklist") != val.end())
    {
        if(!val["attachmentTypeBlacklist"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["attachmentTypeBlacklist"]);
            setAttachmentTypeBlacklist( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::getFieldWhitelist() const
{
    return m_FieldWhitelist;
}
void ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::setFieldWhitelist(ConfigNodePropertyArray const& value)
{
    m_FieldWhitelist = value;
    m_FieldWhitelistIsSet = true;
}
bool ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::fieldWhitelistIsSet() const
{
    return m_FieldWhitelistIsSet;
}
void ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::unsetFieldWhitelist()
{
    m_FieldWhitelistIsSet = false;
}
ConfigNodePropertyArray ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::getAttachmentTypeBlacklist() const
{
    return m_AttachmentTypeBlacklist;
}
void ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::setAttachmentTypeBlacklist(ConfigNodePropertyArray const& value)
{
    m_AttachmentTypeBlacklist = value;
    m_AttachmentTypeBlacklistIsSet = true;
}
bool ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::attachmentTypeBlacklistIsSet() const
{
    return m_AttachmentTypeBlacklistIsSet;
}
void ComAdobeCqSocialIdeationClientEndpointsImplIdeationOperationsSProperties::unsetAttachmentTypeBlacklist()
{
    m_AttachmentTypeBlacklistIsSet = false;
}

}
}
}
}

