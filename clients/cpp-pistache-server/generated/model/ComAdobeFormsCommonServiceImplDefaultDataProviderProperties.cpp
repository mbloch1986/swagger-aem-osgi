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


#include "ComAdobeFormsCommonServiceImplDefaultDataProviderProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeFormsCommonServiceImplDefaultDataProviderProperties::ComAdobeFormsCommonServiceImplDefaultDataProviderProperties()
{
    m_AlloweddataFileLocationsIsSet = false;
    
}

ComAdobeFormsCommonServiceImplDefaultDataProviderProperties::~ComAdobeFormsCommonServiceImplDefaultDataProviderProperties()
{
}

void ComAdobeFormsCommonServiceImplDefaultDataProviderProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeFormsCommonServiceImplDefaultDataProviderProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_AlloweddataFileLocationsIsSet)
    {
        val["alloweddataFileLocations"] = ModelBase::toJson(m_AlloweddataFileLocations);
    }
    

    return val;
}

void ComAdobeFormsCommonServiceImplDefaultDataProviderProperties::fromJson(nlohmann::json& val)
{
    if(val.find("alloweddataFileLocations") != val.end())
    {
        if(!val["alloweddataFileLocations"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["alloweddataFileLocations"]);
            setAlloweddataFileLocations( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray ComAdobeFormsCommonServiceImplDefaultDataProviderProperties::getAlloweddataFileLocations() const
{
    return m_AlloweddataFileLocations;
}
void ComAdobeFormsCommonServiceImplDefaultDataProviderProperties::setAlloweddataFileLocations(ConfigNodePropertyArray const& value)
{
    m_AlloweddataFileLocations = value;
    m_AlloweddataFileLocationsIsSet = true;
}
bool ComAdobeFormsCommonServiceImplDefaultDataProviderProperties::alloweddataFileLocationsIsSet() const
{
    return m_AlloweddataFileLocationsIsSet;
}
void ComAdobeFormsCommonServiceImplDefaultDataProviderProperties::unsetAlloweddataFileLocations()
{
    m_AlloweddataFileLocationsIsSet = false;
}

}
}
}
}

