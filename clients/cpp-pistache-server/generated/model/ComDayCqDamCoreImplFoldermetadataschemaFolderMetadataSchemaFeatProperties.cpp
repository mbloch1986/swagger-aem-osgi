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


#include "ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties::ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties()
{
    m_IsEnabledIsSet = false;
    
}

ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties::~ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties()
{
}

void ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_IsEnabledIsSet)
    {
        val["isEnabled"] = ModelBase::toJson(m_IsEnabled);
    }
    

    return val;
}

void ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties::fromJson(nlohmann::json& val)
{
    if(val.find("isEnabled") != val.end())
    {
        if(!val["isEnabled"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["isEnabled"]);
            setIsEnabled( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties::getIsEnabled() const
{
    return m_IsEnabled;
}
void ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties::setIsEnabled(ConfigNodePropertyBoolean const& value)
{
    m_IsEnabled = value;
    m_IsEnabledIsSet = true;
}
bool ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties::isEnabledIsSet() const
{
    return m_IsEnabledIsSet;
}
void ComDayCqDamCoreImplFoldermetadataschemaFolderMetadataSchemaFeatProperties::unsetIsEnabled()
{
    m_IsEnabledIsSet = false;
}

}
}
}
}
