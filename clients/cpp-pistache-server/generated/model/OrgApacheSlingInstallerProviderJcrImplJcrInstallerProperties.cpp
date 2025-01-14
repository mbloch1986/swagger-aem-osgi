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


#include "OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties()
{
    m_Handler_schemesIsSet = false;
    m_Sling_jcrinstall_folder_name_regexpIsSet = false;
    m_Sling_jcrinstall_folder_max_depthIsSet = false;
    m_Sling_jcrinstall_search_pathIsSet = false;
    m_Sling_jcrinstall_new_config_pathIsSet = false;
    m_Sling_jcrinstall_signal_pathIsSet = false;
    m_Sling_jcrinstall_enable_writebackIsSet = false;
    
}

OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::~OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties()
{
}

void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Handler_schemesIsSet)
    {
        val["handler.schemes"] = ModelBase::toJson(m_Handler_schemes);
    }
    if(m_Sling_jcrinstall_folder_name_regexpIsSet)
    {
        val["sling.jcrinstall.folder.name.regexp"] = ModelBase::toJson(m_Sling_jcrinstall_folder_name_regexp);
    }
    if(m_Sling_jcrinstall_folder_max_depthIsSet)
    {
        val["sling.jcrinstall.folder.max.depth"] = ModelBase::toJson(m_Sling_jcrinstall_folder_max_depth);
    }
    if(m_Sling_jcrinstall_search_pathIsSet)
    {
        val["sling.jcrinstall.search.path"] = ModelBase::toJson(m_Sling_jcrinstall_search_path);
    }
    if(m_Sling_jcrinstall_new_config_pathIsSet)
    {
        val["sling.jcrinstall.new.config.path"] = ModelBase::toJson(m_Sling_jcrinstall_new_config_path);
    }
    if(m_Sling_jcrinstall_signal_pathIsSet)
    {
        val["sling.jcrinstall.signal.path"] = ModelBase::toJson(m_Sling_jcrinstall_signal_path);
    }
    if(m_Sling_jcrinstall_enable_writebackIsSet)
    {
        val["sling.jcrinstall.enable.writeback"] = ModelBase::toJson(m_Sling_jcrinstall_enable_writeback);
    }
    

    return val;
}

void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::fromJson(nlohmann::json& val)
{
    if(val.find("handler.schemes") != val.end())
    {
        if(!val["handler.schemes"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["handler.schemes"]);
            setHandlerSchemes( newItem );
        }
        
    }
    if(val.find("sling.jcrinstall.folder.name.regexp") != val.end())
    {
        if(!val["sling.jcrinstall.folder.name.regexp"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["sling.jcrinstall.folder.name.regexp"]);
            setSlingJcrinstallFolderNameRegexp( newItem );
        }
        
    }
    if(val.find("sling.jcrinstall.folder.max.depth") != val.end())
    {
        if(!val["sling.jcrinstall.folder.max.depth"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["sling.jcrinstall.folder.max.depth"]);
            setSlingJcrinstallFolderMaxDepth( newItem );
        }
        
    }
    if(val.find("sling.jcrinstall.search.path") != val.end())
    {
        if(!val["sling.jcrinstall.search.path"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["sling.jcrinstall.search.path"]);
            setSlingJcrinstallSearchPath( newItem );
        }
        
    }
    if(val.find("sling.jcrinstall.new.config.path") != val.end())
    {
        if(!val["sling.jcrinstall.new.config.path"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["sling.jcrinstall.new.config.path"]);
            setSlingJcrinstallNewConfigPath( newItem );
        }
        
    }
    if(val.find("sling.jcrinstall.signal.path") != val.end())
    {
        if(!val["sling.jcrinstall.signal.path"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["sling.jcrinstall.signal.path"]);
            setSlingJcrinstallSignalPath( newItem );
        }
        
    }
    if(val.find("sling.jcrinstall.enable.writeback") != val.end())
    {
        if(!val["sling.jcrinstall.enable.writeback"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["sling.jcrinstall.enable.writeback"]);
            setSlingJcrinstallEnableWriteback( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getHandlerSchemes() const
{
    return m_Handler_schemes;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setHandlerSchemes(ConfigNodePropertyArray const& value)
{
    m_Handler_schemes = value;
    m_Handler_schemesIsSet = true;
}
bool OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::handlerSchemesIsSet() const
{
    return m_Handler_schemesIsSet;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::unsetHandler_schemes()
{
    m_Handler_schemesIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getSlingJcrinstallFolderNameRegexp() const
{
    return m_Sling_jcrinstall_folder_name_regexp;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setSlingJcrinstallFolderNameRegexp(ConfigNodePropertyString const& value)
{
    m_Sling_jcrinstall_folder_name_regexp = value;
    m_Sling_jcrinstall_folder_name_regexpIsSet = true;
}
bool OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::slingJcrinstallFolderNameRegexpIsSet() const
{
    return m_Sling_jcrinstall_folder_name_regexpIsSet;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::unsetSling_jcrinstall_folder_name_regexp()
{
    m_Sling_jcrinstall_folder_name_regexpIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getSlingJcrinstallFolderMaxDepth() const
{
    return m_Sling_jcrinstall_folder_max_depth;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setSlingJcrinstallFolderMaxDepth(ConfigNodePropertyInteger const& value)
{
    m_Sling_jcrinstall_folder_max_depth = value;
    m_Sling_jcrinstall_folder_max_depthIsSet = true;
}
bool OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::slingJcrinstallFolderMaxDepthIsSet() const
{
    return m_Sling_jcrinstall_folder_max_depthIsSet;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::unsetSling_jcrinstall_folder_max_depth()
{
    m_Sling_jcrinstall_folder_max_depthIsSet = false;
}
ConfigNodePropertyArray OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getSlingJcrinstallSearchPath() const
{
    return m_Sling_jcrinstall_search_path;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setSlingJcrinstallSearchPath(ConfigNodePropertyArray const& value)
{
    m_Sling_jcrinstall_search_path = value;
    m_Sling_jcrinstall_search_pathIsSet = true;
}
bool OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::slingJcrinstallSearchPathIsSet() const
{
    return m_Sling_jcrinstall_search_pathIsSet;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::unsetSling_jcrinstall_search_path()
{
    m_Sling_jcrinstall_search_pathIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getSlingJcrinstallNewConfigPath() const
{
    return m_Sling_jcrinstall_new_config_path;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setSlingJcrinstallNewConfigPath(ConfigNodePropertyString const& value)
{
    m_Sling_jcrinstall_new_config_path = value;
    m_Sling_jcrinstall_new_config_pathIsSet = true;
}
bool OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::slingJcrinstallNewConfigPathIsSet() const
{
    return m_Sling_jcrinstall_new_config_pathIsSet;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::unsetSling_jcrinstall_new_config_path()
{
    m_Sling_jcrinstall_new_config_pathIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getSlingJcrinstallSignalPath() const
{
    return m_Sling_jcrinstall_signal_path;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setSlingJcrinstallSignalPath(ConfigNodePropertyString const& value)
{
    m_Sling_jcrinstall_signal_path = value;
    m_Sling_jcrinstall_signal_pathIsSet = true;
}
bool OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::slingJcrinstallSignalPathIsSet() const
{
    return m_Sling_jcrinstall_signal_pathIsSet;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::unsetSling_jcrinstall_signal_path()
{
    m_Sling_jcrinstall_signal_pathIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::getSlingJcrinstallEnableWriteback() const
{
    return m_Sling_jcrinstall_enable_writeback;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::setSlingJcrinstallEnableWriteback(ConfigNodePropertyBoolean const& value)
{
    m_Sling_jcrinstall_enable_writeback = value;
    m_Sling_jcrinstall_enable_writebackIsSet = true;
}
bool OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::slingJcrinstallEnableWritebackIsSet() const
{
    return m_Sling_jcrinstall_enable_writebackIsSet;
}
void OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties::unsetSling_jcrinstall_enable_writeback()
{
    m_Sling_jcrinstall_enable_writebackIsSet = false;
}

}
}
}
}

