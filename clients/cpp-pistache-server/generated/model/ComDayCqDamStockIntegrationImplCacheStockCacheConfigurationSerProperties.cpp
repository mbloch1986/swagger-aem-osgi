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


#include "ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties()
{
    m_GetCacheExpirationUnitIsSet = false;
    m_GetCacheExpirationValueIsSet = false;
    
}

ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::~ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties()
{
}

void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_GetCacheExpirationUnitIsSet)
    {
        val["getCacheExpirationUnit"] = ModelBase::toJson(m_GetCacheExpirationUnit);
    }
    if(m_GetCacheExpirationValueIsSet)
    {
        val["getCacheExpirationValue"] = ModelBase::toJson(m_GetCacheExpirationValue);
    }
    

    return val;
}

void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::fromJson(nlohmann::json& val)
{
    if(val.find("getCacheExpirationUnit") != val.end())
    {
        if(!val["getCacheExpirationUnit"].is_null())
        {
            ConfigNodePropertyDropDown newItem;
            newItem.fromJson(val["getCacheExpirationUnit"]);
            setGetCacheExpirationUnit( newItem );
        }
        
    }
    if(val.find("getCacheExpirationValue") != val.end())
    {
        if(!val["getCacheExpirationValue"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["getCacheExpirationValue"]);
            setGetCacheExpirationValue( newItem );
        }
        
    }
    
}


ConfigNodePropertyDropDown ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::getGetCacheExpirationUnit() const
{
    return m_GetCacheExpirationUnit;
}
void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::setGetCacheExpirationUnit(ConfigNodePropertyDropDown const& value)
{
    m_GetCacheExpirationUnit = value;
    m_GetCacheExpirationUnitIsSet = true;
}
bool ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::getCacheExpirationUnitIsSet() const
{
    return m_GetCacheExpirationUnitIsSet;
}
void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::unsetGetCacheExpirationUnit()
{
    m_GetCacheExpirationUnitIsSet = false;
}
ConfigNodePropertyInteger ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::getGetCacheExpirationValue() const
{
    return m_GetCacheExpirationValue;
}
void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::setGetCacheExpirationValue(ConfigNodePropertyInteger const& value)
{
    m_GetCacheExpirationValue = value;
    m_GetCacheExpirationValueIsSet = true;
}
bool ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::getCacheExpirationValueIsSet() const
{
    return m_GetCacheExpirationValueIsSet;
}
void ComDayCqDamStockIntegrationImplCacheStockCacheConfigurationSerProperties::unsetGetCacheExpirationValue()
{
    m_GetCacheExpirationValueIsSet = false;
}

}
}
}
}

