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


#include "ComDayCqDamCoreImplServletResourceCollectionServletProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqDamCoreImplServletResourceCollectionServletProperties::ComDayCqDamCoreImplServletResourceCollectionServletProperties()
{
    m_Sling_servlet_resourceTypesIsSet = false;
    m_Sling_servlet_methodsIsSet = false;
    m_Sling_servlet_selectorsIsSet = false;
    m_Download_configIsSet = false;
    m_View_selectorIsSet = false;
    m_Send_emailIsSet = false;
    
}

ComDayCqDamCoreImplServletResourceCollectionServletProperties::~ComDayCqDamCoreImplServletResourceCollectionServletProperties()
{
}

void ComDayCqDamCoreImplServletResourceCollectionServletProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqDamCoreImplServletResourceCollectionServletProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Sling_servlet_resourceTypesIsSet)
    {
        val["sling.servlet.resourceTypes"] = ModelBase::toJson(m_Sling_servlet_resourceTypes);
    }
    if(m_Sling_servlet_methodsIsSet)
    {
        val["sling.servlet.methods"] = ModelBase::toJson(m_Sling_servlet_methods);
    }
    if(m_Sling_servlet_selectorsIsSet)
    {
        val["sling.servlet.selectors"] = ModelBase::toJson(m_Sling_servlet_selectors);
    }
    if(m_Download_configIsSet)
    {
        val["download.config"] = ModelBase::toJson(m_Download_config);
    }
    if(m_View_selectorIsSet)
    {
        val["view.selector"] = ModelBase::toJson(m_View_selector);
    }
    if(m_Send_emailIsSet)
    {
        val["send_email"] = ModelBase::toJson(m_Send_email);
    }
    

    return val;
}

void ComDayCqDamCoreImplServletResourceCollectionServletProperties::fromJson(nlohmann::json& val)
{
    if(val.find("sling.servlet.resourceTypes") != val.end())
    {
        if(!val["sling.servlet.resourceTypes"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["sling.servlet.resourceTypes"]);
            setSlingServletResourceTypes( newItem );
        }
        
    }
    if(val.find("sling.servlet.methods") != val.end())
    {
        if(!val["sling.servlet.methods"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["sling.servlet.methods"]);
            setSlingServletMethods( newItem );
        }
        
    }
    if(val.find("sling.servlet.selectors") != val.end())
    {
        if(!val["sling.servlet.selectors"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["sling.servlet.selectors"]);
            setSlingServletSelectors( newItem );
        }
        
    }
    if(val.find("download.config") != val.end())
    {
        if(!val["download.config"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["download.config"]);
            setDownloadConfig( newItem );
        }
        
    }
    if(val.find("view.selector") != val.end())
    {
        if(!val["view.selector"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["view.selector"]);
            setViewSelector( newItem );
        }
        
    }
    if(val.find("send_email") != val.end())
    {
        if(!val["send_email"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["send_email"]);
            setSendEmail( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray ComDayCqDamCoreImplServletResourceCollectionServletProperties::getSlingServletResourceTypes() const
{
    return m_Sling_servlet_resourceTypes;
}
void ComDayCqDamCoreImplServletResourceCollectionServletProperties::setSlingServletResourceTypes(ConfigNodePropertyArray const& value)
{
    m_Sling_servlet_resourceTypes = value;
    m_Sling_servlet_resourceTypesIsSet = true;
}
bool ComDayCqDamCoreImplServletResourceCollectionServletProperties::slingServletResourceTypesIsSet() const
{
    return m_Sling_servlet_resourceTypesIsSet;
}
void ComDayCqDamCoreImplServletResourceCollectionServletProperties::unsetSling_servlet_resourceTypes()
{
    m_Sling_servlet_resourceTypesIsSet = false;
}
ConfigNodePropertyString ComDayCqDamCoreImplServletResourceCollectionServletProperties::getSlingServletMethods() const
{
    return m_Sling_servlet_methods;
}
void ComDayCqDamCoreImplServletResourceCollectionServletProperties::setSlingServletMethods(ConfigNodePropertyString const& value)
{
    m_Sling_servlet_methods = value;
    m_Sling_servlet_methodsIsSet = true;
}
bool ComDayCqDamCoreImplServletResourceCollectionServletProperties::slingServletMethodsIsSet() const
{
    return m_Sling_servlet_methodsIsSet;
}
void ComDayCqDamCoreImplServletResourceCollectionServletProperties::unsetSling_servlet_methods()
{
    m_Sling_servlet_methodsIsSet = false;
}
ConfigNodePropertyString ComDayCqDamCoreImplServletResourceCollectionServletProperties::getSlingServletSelectors() const
{
    return m_Sling_servlet_selectors;
}
void ComDayCqDamCoreImplServletResourceCollectionServletProperties::setSlingServletSelectors(ConfigNodePropertyString const& value)
{
    m_Sling_servlet_selectors = value;
    m_Sling_servlet_selectorsIsSet = true;
}
bool ComDayCqDamCoreImplServletResourceCollectionServletProperties::slingServletSelectorsIsSet() const
{
    return m_Sling_servlet_selectorsIsSet;
}
void ComDayCqDamCoreImplServletResourceCollectionServletProperties::unsetSling_servlet_selectors()
{
    m_Sling_servlet_selectorsIsSet = false;
}
ConfigNodePropertyString ComDayCqDamCoreImplServletResourceCollectionServletProperties::getDownloadConfig() const
{
    return m_Download_config;
}
void ComDayCqDamCoreImplServletResourceCollectionServletProperties::setDownloadConfig(ConfigNodePropertyString const& value)
{
    m_Download_config = value;
    m_Download_configIsSet = true;
}
bool ComDayCqDamCoreImplServletResourceCollectionServletProperties::downloadConfigIsSet() const
{
    return m_Download_configIsSet;
}
void ComDayCqDamCoreImplServletResourceCollectionServletProperties::unsetDownload_config()
{
    m_Download_configIsSet = false;
}
ConfigNodePropertyString ComDayCqDamCoreImplServletResourceCollectionServletProperties::getViewSelector() const
{
    return m_View_selector;
}
void ComDayCqDamCoreImplServletResourceCollectionServletProperties::setViewSelector(ConfigNodePropertyString const& value)
{
    m_View_selector = value;
    m_View_selectorIsSet = true;
}
bool ComDayCqDamCoreImplServletResourceCollectionServletProperties::viewSelectorIsSet() const
{
    return m_View_selectorIsSet;
}
void ComDayCqDamCoreImplServletResourceCollectionServletProperties::unsetView_selector()
{
    m_View_selectorIsSet = false;
}
ConfigNodePropertyBoolean ComDayCqDamCoreImplServletResourceCollectionServletProperties::getSendEmail() const
{
    return m_Send_email;
}
void ComDayCqDamCoreImplServletResourceCollectionServletProperties::setSendEmail(ConfigNodePropertyBoolean const& value)
{
    m_Send_email = value;
    m_Send_emailIsSet = true;
}
bool ComDayCqDamCoreImplServletResourceCollectionServletProperties::sendEmailIsSet() const
{
    return m_Send_emailIsSet;
}
void ComDayCqDamCoreImplServletResourceCollectionServletProperties::unsetSend_email()
{
    m_Send_emailIsSet = false;
}

}
}
}
}
