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


#include "ComAdobeCqCommerceImplAssetVideoHandlerProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqCommerceImplAssetVideoHandlerProperties::ComAdobeCqCommerceImplAssetVideoHandlerProperties()
{
    m_Cq_commerce_asset_handler_activeIsSet = false;
    m_Cq_commerce_asset_handler_nameIsSet = false;
    
}

ComAdobeCqCommerceImplAssetVideoHandlerProperties::~ComAdobeCqCommerceImplAssetVideoHandlerProperties()
{
}

void ComAdobeCqCommerceImplAssetVideoHandlerProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqCommerceImplAssetVideoHandlerProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Cq_commerce_asset_handler_activeIsSet)
    {
        val["cq.commerce.asset.handler.active"] = ModelBase::toJson(m_Cq_commerce_asset_handler_active);
    }
    if(m_Cq_commerce_asset_handler_nameIsSet)
    {
        val["cq.commerce.asset.handler.name"] = ModelBase::toJson(m_Cq_commerce_asset_handler_name);
    }
    

    return val;
}

void ComAdobeCqCommerceImplAssetVideoHandlerProperties::fromJson(nlohmann::json& val)
{
    if(val.find("cq.commerce.asset.handler.active") != val.end())
    {
        if(!val["cq.commerce.asset.handler.active"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["cq.commerce.asset.handler.active"]);
            setCqCommerceAssetHandlerActive( newItem );
        }
        
    }
    if(val.find("cq.commerce.asset.handler.name") != val.end())
    {
        if(!val["cq.commerce.asset.handler.name"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["cq.commerce.asset.handler.name"]);
            setCqCommerceAssetHandlerName( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComAdobeCqCommerceImplAssetVideoHandlerProperties::getCqCommerceAssetHandlerActive() const
{
    return m_Cq_commerce_asset_handler_active;
}
void ComAdobeCqCommerceImplAssetVideoHandlerProperties::setCqCommerceAssetHandlerActive(ConfigNodePropertyBoolean const& value)
{
    m_Cq_commerce_asset_handler_active = value;
    m_Cq_commerce_asset_handler_activeIsSet = true;
}
bool ComAdobeCqCommerceImplAssetVideoHandlerProperties::cqCommerceAssetHandlerActiveIsSet() const
{
    return m_Cq_commerce_asset_handler_activeIsSet;
}
void ComAdobeCqCommerceImplAssetVideoHandlerProperties::unsetCq_commerce_asset_handler_active()
{
    m_Cq_commerce_asset_handler_activeIsSet = false;
}
ConfigNodePropertyString ComAdobeCqCommerceImplAssetVideoHandlerProperties::getCqCommerceAssetHandlerName() const
{
    return m_Cq_commerce_asset_handler_name;
}
void ComAdobeCqCommerceImplAssetVideoHandlerProperties::setCqCommerceAssetHandlerName(ConfigNodePropertyString const& value)
{
    m_Cq_commerce_asset_handler_name = value;
    m_Cq_commerce_asset_handler_nameIsSet = true;
}
bool ComAdobeCqCommerceImplAssetVideoHandlerProperties::cqCommerceAssetHandlerNameIsSet() const
{
    return m_Cq_commerce_asset_handler_nameIsSet;
}
void ComAdobeCqCommerceImplAssetVideoHandlerProperties::unsetCq_commerce_asset_handler_name()
{
    m_Cq_commerce_asset_handler_nameIsSet = false;
}

}
}
}
}

