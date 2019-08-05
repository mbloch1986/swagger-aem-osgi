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


#include "ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties()
{
    m_EnableIsSet = false;
    m_Ttl1IsSet = false;
    m_Ttl2IsSet = false;
    
}

ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::~ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties()
{
}

void ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_EnableIsSet)
    {
        val["enable"] = ModelBase::toJson(m_Enable);
    }
    if(m_Ttl1IsSet)
    {
        val["ttl1"] = ModelBase::toJson(m_Ttl1);
    }
    if(m_Ttl2IsSet)
    {
        val["ttl2"] = ModelBase::toJson(m_Ttl2);
    }
    

    return val;
}

void ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::fromJson(nlohmann::json& val)
{
    if(val.find("enable") != val.end())
    {
        if(!val["enable"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["enable"]);
            setEnable( newItem );
        }
        
    }
    if(val.find("ttl1") != val.end())
    {
        if(!val["ttl1"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["ttl1"]);
            setTtl1( newItem );
        }
        
    }
    if(val.find("ttl2") != val.end())
    {
        if(!val["ttl2"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["ttl2"]);
            setTtl2( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::getEnable() const
{
    return m_Enable;
}
void ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::setEnable(ConfigNodePropertyBoolean const& value)
{
    m_Enable = value;
    m_EnableIsSet = true;
}
bool ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::enableIsSet() const
{
    return m_EnableIsSet;
}
void ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::unsetEnable()
{
    m_EnableIsSet = false;
}
ConfigNodePropertyInteger ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::getTtl1() const
{
    return m_Ttl1;
}
void ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::setTtl1(ConfigNodePropertyInteger const& value)
{
    m_Ttl1 = value;
    m_Ttl1IsSet = true;
}
bool ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::ttl1IsSet() const
{
    return m_Ttl1IsSet;
}
void ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::unsetTtl1()
{
    m_Ttl1IsSet = false;
}
ConfigNodePropertyInteger ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::getTtl2() const
{
    return m_Ttl2;
}
void ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::setTtl2(ConfigNodePropertyInteger const& value)
{
    m_Ttl2 = value;
    m_Ttl2IsSet = true;
}
bool ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::ttl2IsSet() const
{
    return m_Ttl2IsSet;
}
void ComAdobeCqSocialAccountverificationImplAccountManagementConfigImProperties::unsetTtl2()
{
    m_Ttl2IsSet = false;
}

}
}
}
}
