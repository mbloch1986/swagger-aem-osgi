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


#include "OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties()
{
    m_HomePathIsSet = false;
    
}

OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::~OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties()
{
}

void OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_HomePathIsSet)
    {
        val["homePath"] = ModelBase::toJson(m_HomePath);
    }
    

    return val;
}

void OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::fromJson(nlohmann::json& val)
{
    if(val.find("homePath") != val.end())
    {
        if(!val["homePath"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["homePath"]);
            setHomePath( newItem );
        }
        
    }
    
}


ConfigNodePropertyString OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::getHomePath() const
{
    return m_HomePath;
}
void OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::setHomePath(ConfigNodePropertyString const& value)
{
    m_HomePath = value;
    m_HomePathIsSet = true;
}
bool OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::homePathIsSet() const
{
    return m_HomePathIsSet;
}
void OrgApacheJackrabbitVaultPackagingRegistryImplFSPackageRegistryProperties::unsetHomePath()
{
    m_HomePathIsSet = false;
}

}
}
}
}

