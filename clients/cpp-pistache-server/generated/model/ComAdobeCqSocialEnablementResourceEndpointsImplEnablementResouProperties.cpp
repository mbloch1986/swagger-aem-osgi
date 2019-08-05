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


#include "ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties()
{
    m_FieldWhitelistIsSet = false;
    
}

ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::~ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties()
{
}

void ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_FieldWhitelistIsSet)
    {
        val["fieldWhitelist"] = ModelBase::toJson(m_FieldWhitelist);
    }
    

    return val;
}

void ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::fromJson(nlohmann::json& val)
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
    
}


ConfigNodePropertyArray ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::getFieldWhitelist() const
{
    return m_FieldWhitelist;
}
void ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::setFieldWhitelist(ConfigNodePropertyArray const& value)
{
    m_FieldWhitelist = value;
    m_FieldWhitelistIsSet = true;
}
bool ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::fieldWhitelistIsSet() const
{
    return m_FieldWhitelistIsSet;
}
void ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::unsetFieldWhitelist()
{
    m_FieldWhitelistIsSet = false;
}

}
}
}
}
