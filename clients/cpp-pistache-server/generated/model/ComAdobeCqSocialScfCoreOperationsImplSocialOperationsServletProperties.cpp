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


#include "ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties()
{
    m_Sling_servlet_selectorsIsSet = false;
    m_Sling_servlet_extensionsIsSet = false;
    
}

ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::~ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties()
{
}

void ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Sling_servlet_selectorsIsSet)
    {
        val["sling.servlet.selectors"] = ModelBase::toJson(m_Sling_servlet_selectors);
    }
    if(m_Sling_servlet_extensionsIsSet)
    {
        val["sling.servlet.extensions"] = ModelBase::toJson(m_Sling_servlet_extensions);
    }
    

    return val;
}

void ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::fromJson(nlohmann::json& val)
{
    if(val.find("sling.servlet.selectors") != val.end())
    {
        if(!val["sling.servlet.selectors"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["sling.servlet.selectors"]);
            setSlingServletSelectors( newItem );
        }
        
    }
    if(val.find("sling.servlet.extensions") != val.end())
    {
        if(!val["sling.servlet.extensions"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["sling.servlet.extensions"]);
            setSlingServletExtensions( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::getSlingServletSelectors() const
{
    return m_Sling_servlet_selectors;
}
void ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::setSlingServletSelectors(ConfigNodePropertyString const& value)
{
    m_Sling_servlet_selectors = value;
    m_Sling_servlet_selectorsIsSet = true;
}
bool ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::slingServletSelectorsIsSet() const
{
    return m_Sling_servlet_selectorsIsSet;
}
void ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::unsetSling_servlet_selectors()
{
    m_Sling_servlet_selectorsIsSet = false;
}
ConfigNodePropertyString ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::getSlingServletExtensions() const
{
    return m_Sling_servlet_extensions;
}
void ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::setSlingServletExtensions(ConfigNodePropertyString const& value)
{
    m_Sling_servlet_extensions = value;
    m_Sling_servlet_extensionsIsSet = true;
}
bool ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::slingServletExtensionsIsSet() const
{
    return m_Sling_servlet_extensionsIsSet;
}
void ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties::unsetSling_servlet_extensions()
{
    m_Sling_servlet_extensionsIsSet = false;
}

}
}
}
}
