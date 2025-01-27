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


#include "ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties()
{
    m_Dam_showexpiredIsSet = false;
    m_Dam_showhiddenIsSet = false;
    m_TagTitleSearchIsSet = false;
    m_GuessTotalIsSet = false;
    m_Dam_expiryPropertyIsSet = false;
    
}

ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::~ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties()
{
}

void ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Dam_showexpiredIsSet)
    {
        val["dam.showexpired"] = ModelBase::toJson(m_Dam_showexpired);
    }
    if(m_Dam_showhiddenIsSet)
    {
        val["dam.showhidden"] = ModelBase::toJson(m_Dam_showhidden);
    }
    if(m_TagTitleSearchIsSet)
    {
        val["tagTitleSearch"] = ModelBase::toJson(m_TagTitleSearch);
    }
    if(m_GuessTotalIsSet)
    {
        val["guessTotal"] = ModelBase::toJson(m_GuessTotal);
    }
    if(m_Dam_expiryPropertyIsSet)
    {
        val["dam.expiryProperty"] = ModelBase::toJson(m_Dam_expiryProperty);
    }
    

    return val;
}

void ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::fromJson(nlohmann::json& val)
{
    if(val.find("dam.showexpired") != val.end())
    {
        if(!val["dam.showexpired"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["dam.showexpired"]);
            setDamShowexpired( newItem );
        }
        
    }
    if(val.find("dam.showhidden") != val.end())
    {
        if(!val["dam.showhidden"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["dam.showhidden"]);
            setDamShowhidden( newItem );
        }
        
    }
    if(val.find("tagTitleSearch") != val.end())
    {
        if(!val["tagTitleSearch"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["tagTitleSearch"]);
            setTagTitleSearch( newItem );
        }
        
    }
    if(val.find("guessTotal") != val.end())
    {
        if(!val["guessTotal"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["guessTotal"]);
            setGuessTotal( newItem );
        }
        
    }
    if(val.find("dam.expiryProperty") != val.end())
    {
        if(!val["dam.expiryProperty"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["dam.expiryProperty"]);
            setDamExpiryProperty( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::getDamShowexpired() const
{
    return m_Dam_showexpired;
}
void ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::setDamShowexpired(ConfigNodePropertyBoolean const& value)
{
    m_Dam_showexpired = value;
    m_Dam_showexpiredIsSet = true;
}
bool ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::damShowexpiredIsSet() const
{
    return m_Dam_showexpiredIsSet;
}
void ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::unsetDam_showexpired()
{
    m_Dam_showexpiredIsSet = false;
}
ConfigNodePropertyBoolean ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::getDamShowhidden() const
{
    return m_Dam_showhidden;
}
void ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::setDamShowhidden(ConfigNodePropertyBoolean const& value)
{
    m_Dam_showhidden = value;
    m_Dam_showhiddenIsSet = true;
}
bool ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::damShowhiddenIsSet() const
{
    return m_Dam_showhiddenIsSet;
}
void ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::unsetDam_showhidden()
{
    m_Dam_showhiddenIsSet = false;
}
ConfigNodePropertyBoolean ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::getTagTitleSearch() const
{
    return m_TagTitleSearch;
}
void ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::setTagTitleSearch(ConfigNodePropertyBoolean const& value)
{
    m_TagTitleSearch = value;
    m_TagTitleSearchIsSet = true;
}
bool ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::tagTitleSearchIsSet() const
{
    return m_TagTitleSearchIsSet;
}
void ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::unsetTagTitleSearch()
{
    m_TagTitleSearchIsSet = false;
}
ConfigNodePropertyString ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::getGuessTotal() const
{
    return m_GuessTotal;
}
void ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::setGuessTotal(ConfigNodePropertyString const& value)
{
    m_GuessTotal = value;
    m_GuessTotalIsSet = true;
}
bool ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::guessTotalIsSet() const
{
    return m_GuessTotalIsSet;
}
void ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::unsetGuessTotal()
{
    m_GuessTotalIsSet = false;
}
ConfigNodePropertyString ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::getDamExpiryProperty() const
{
    return m_Dam_expiryProperty;
}
void ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::setDamExpiryProperty(ConfigNodePropertyString const& value)
{
    m_Dam_expiryProperty = value;
    m_Dam_expiryPropertyIsSet = true;
}
bool ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::damExpiryPropertyIsSet() const
{
    return m_Dam_expiryPropertyIsSet;
}
void ComDayCqWcmCoreImplServletsContentfinderAssetViewHandlerProperties::unsetDam_expiryProperty()
{
    m_Dam_expiryPropertyIsSet = false;
}

}
}
}
}

