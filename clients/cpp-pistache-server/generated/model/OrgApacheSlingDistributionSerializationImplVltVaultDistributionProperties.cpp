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


#include "OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties()
{
    m_NameIsSet = false;
    m_TypeIsSet = false;
    m_ImportModeIsSet = false;
    m_AclHandlingIsSet = false;
    m_Package_rootsIsSet = false;
    m_Package_filtersIsSet = false;
    m_Property_filtersIsSet = false;
    m_TempFsFolderIsSet = false;
    m_UseBinaryReferencesIsSet = false;
    m_AutoSaveThresholdIsSet = false;
    m_CleanupDelayIsSet = false;
    m_FileThresholdIsSet = false;
    m_MEGA_BYTESIsSet = false;
    m_UseOffHeapMemoryIsSet = false;
    m_DigestAlgorithmIsSet = false;
    m_MonitoringQueueSizeIsSet = false;
    m_PathsMappingIsSet = false;
    m_StrictImportIsSet = false;
    
}

OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::~OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties()
{
}

void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    if(m_TypeIsSet)
    {
        val["type"] = ModelBase::toJson(m_Type);
    }
    if(m_ImportModeIsSet)
    {
        val["importMode"] = ModelBase::toJson(m_ImportMode);
    }
    if(m_AclHandlingIsSet)
    {
        val["aclHandling"] = ModelBase::toJson(m_AclHandling);
    }
    if(m_Package_rootsIsSet)
    {
        val["package.roots"] = ModelBase::toJson(m_Package_roots);
    }
    if(m_Package_filtersIsSet)
    {
        val["package.filters"] = ModelBase::toJson(m_Package_filters);
    }
    if(m_Property_filtersIsSet)
    {
        val["property.filters"] = ModelBase::toJson(m_Property_filters);
    }
    if(m_TempFsFolderIsSet)
    {
        val["tempFsFolder"] = ModelBase::toJson(m_TempFsFolder);
    }
    if(m_UseBinaryReferencesIsSet)
    {
        val["useBinaryReferences"] = ModelBase::toJson(m_UseBinaryReferences);
    }
    if(m_AutoSaveThresholdIsSet)
    {
        val["autoSaveThreshold"] = ModelBase::toJson(m_AutoSaveThreshold);
    }
    if(m_CleanupDelayIsSet)
    {
        val["cleanupDelay"] = ModelBase::toJson(m_CleanupDelay);
    }
    if(m_FileThresholdIsSet)
    {
        val["fileThreshold"] = ModelBase::toJson(m_FileThreshold);
    }
    if(m_MEGA_BYTESIsSet)
    {
        val["MEGA_BYTES"] = ModelBase::toJson(m_MEGA_BYTES);
    }
    if(m_UseOffHeapMemoryIsSet)
    {
        val["useOffHeapMemory"] = ModelBase::toJson(m_UseOffHeapMemory);
    }
    if(m_DigestAlgorithmIsSet)
    {
        val["digestAlgorithm"] = ModelBase::toJson(m_DigestAlgorithm);
    }
    if(m_MonitoringQueueSizeIsSet)
    {
        val["monitoringQueueSize"] = ModelBase::toJson(m_MonitoringQueueSize);
    }
    if(m_PathsMappingIsSet)
    {
        val["pathsMapping"] = ModelBase::toJson(m_PathsMapping);
    }
    if(m_StrictImportIsSet)
    {
        val["strictImport"] = ModelBase::toJson(m_StrictImport);
    }
    

    return val;
}

void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::fromJson(nlohmann::json& val)
{
    if(val.find("name") != val.end())
    {
        if(!val["name"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["name"]);
            setName( newItem );
        }
        
    }
    if(val.find("type") != val.end())
    {
        if(!val["type"].is_null())
        {
            ConfigNodePropertyDropDown newItem;
            newItem.fromJson(val["type"]);
            setType( newItem );
        }
        
    }
    if(val.find("importMode") != val.end())
    {
        if(!val["importMode"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["importMode"]);
            setImportMode( newItem );
        }
        
    }
    if(val.find("aclHandling") != val.end())
    {
        if(!val["aclHandling"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["aclHandling"]);
            setAclHandling( newItem );
        }
        
    }
    if(val.find("package.roots") != val.end())
    {
        if(!val["package.roots"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["package.roots"]);
            setPackageRoots( newItem );
        }
        
    }
    if(val.find("package.filters") != val.end())
    {
        if(!val["package.filters"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["package.filters"]);
            setPackageFilters( newItem );
        }
        
    }
    if(val.find("property.filters") != val.end())
    {
        if(!val["property.filters"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["property.filters"]);
            setPropertyFilters( newItem );
        }
        
    }
    if(val.find("tempFsFolder") != val.end())
    {
        if(!val["tempFsFolder"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["tempFsFolder"]);
            setTempFsFolder( newItem );
        }
        
    }
    if(val.find("useBinaryReferences") != val.end())
    {
        if(!val["useBinaryReferences"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["useBinaryReferences"]);
            setUseBinaryReferences( newItem );
        }
        
    }
    if(val.find("autoSaveThreshold") != val.end())
    {
        if(!val["autoSaveThreshold"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["autoSaveThreshold"]);
            setAutoSaveThreshold( newItem );
        }
        
    }
    if(val.find("cleanupDelay") != val.end())
    {
        if(!val["cleanupDelay"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["cleanupDelay"]);
            setCleanupDelay( newItem );
        }
        
    }
    if(val.find("fileThreshold") != val.end())
    {
        if(!val["fileThreshold"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["fileThreshold"]);
            setFileThreshold( newItem );
        }
        
    }
    if(val.find("MEGA_BYTES") != val.end())
    {
        if(!val["MEGA_BYTES"].is_null())
        {
            ConfigNodePropertyDropDown newItem;
            newItem.fromJson(val["MEGA_BYTES"]);
            setMEGABYTES( newItem );
        }
        
    }
    if(val.find("useOffHeapMemory") != val.end())
    {
        if(!val["useOffHeapMemory"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["useOffHeapMemory"]);
            setUseOffHeapMemory( newItem );
        }
        
    }
    if(val.find("digestAlgorithm") != val.end())
    {
        if(!val["digestAlgorithm"].is_null())
        {
            ConfigNodePropertyDropDown newItem;
            newItem.fromJson(val["digestAlgorithm"]);
            setDigestAlgorithm( newItem );
        }
        
    }
    if(val.find("monitoringQueueSize") != val.end())
    {
        if(!val["monitoringQueueSize"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["monitoringQueueSize"]);
            setMonitoringQueueSize( newItem );
        }
        
    }
    if(val.find("pathsMapping") != val.end())
    {
        if(!val["pathsMapping"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["pathsMapping"]);
            setPathsMapping( newItem );
        }
        
    }
    if(val.find("strictImport") != val.end())
    {
        if(!val["strictImport"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["strictImport"]);
            setStrictImport( newItem );
        }
        
    }
    
}


ConfigNodePropertyString OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getName() const
{
    return m_Name;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setName(ConfigNodePropertyString const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::nameIsSet() const
{
    return m_NameIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetName()
{
    m_NameIsSet = false;
}
ConfigNodePropertyDropDown OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getType() const
{
    return m_Type;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setType(ConfigNodePropertyDropDown const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::typeIsSet() const
{
    return m_TypeIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetType()
{
    m_TypeIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getImportMode() const
{
    return m_ImportMode;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setImportMode(ConfigNodePropertyString const& value)
{
    m_ImportMode = value;
    m_ImportModeIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::importModeIsSet() const
{
    return m_ImportModeIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetImportMode()
{
    m_ImportModeIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getAclHandling() const
{
    return m_AclHandling;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setAclHandling(ConfigNodePropertyString const& value)
{
    m_AclHandling = value;
    m_AclHandlingIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::aclHandlingIsSet() const
{
    return m_AclHandlingIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetAclHandling()
{
    m_AclHandlingIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getPackageRoots() const
{
    return m_Package_roots;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setPackageRoots(ConfigNodePropertyString const& value)
{
    m_Package_roots = value;
    m_Package_rootsIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::packageRootsIsSet() const
{
    return m_Package_rootsIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetPackage_roots()
{
    m_Package_rootsIsSet = false;
}
ConfigNodePropertyArray OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getPackageFilters() const
{
    return m_Package_filters;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setPackageFilters(ConfigNodePropertyArray const& value)
{
    m_Package_filters = value;
    m_Package_filtersIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::packageFiltersIsSet() const
{
    return m_Package_filtersIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetPackage_filters()
{
    m_Package_filtersIsSet = false;
}
ConfigNodePropertyArray OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getPropertyFilters() const
{
    return m_Property_filters;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setPropertyFilters(ConfigNodePropertyArray const& value)
{
    m_Property_filters = value;
    m_Property_filtersIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::propertyFiltersIsSet() const
{
    return m_Property_filtersIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetProperty_filters()
{
    m_Property_filtersIsSet = false;
}
ConfigNodePropertyString OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getTempFsFolder() const
{
    return m_TempFsFolder;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setTempFsFolder(ConfigNodePropertyString const& value)
{
    m_TempFsFolder = value;
    m_TempFsFolderIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::tempFsFolderIsSet() const
{
    return m_TempFsFolderIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetTempFsFolder()
{
    m_TempFsFolderIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getUseBinaryReferences() const
{
    return m_UseBinaryReferences;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setUseBinaryReferences(ConfigNodePropertyBoolean const& value)
{
    m_UseBinaryReferences = value;
    m_UseBinaryReferencesIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::useBinaryReferencesIsSet() const
{
    return m_UseBinaryReferencesIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetUseBinaryReferences()
{
    m_UseBinaryReferencesIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getAutoSaveThreshold() const
{
    return m_AutoSaveThreshold;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setAutoSaveThreshold(ConfigNodePropertyInteger const& value)
{
    m_AutoSaveThreshold = value;
    m_AutoSaveThresholdIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::autoSaveThresholdIsSet() const
{
    return m_AutoSaveThresholdIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetAutoSaveThreshold()
{
    m_AutoSaveThresholdIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getCleanupDelay() const
{
    return m_CleanupDelay;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setCleanupDelay(ConfigNodePropertyInteger const& value)
{
    m_CleanupDelay = value;
    m_CleanupDelayIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::cleanupDelayIsSet() const
{
    return m_CleanupDelayIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetCleanupDelay()
{
    m_CleanupDelayIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getFileThreshold() const
{
    return m_FileThreshold;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setFileThreshold(ConfigNodePropertyInteger const& value)
{
    m_FileThreshold = value;
    m_FileThresholdIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::fileThresholdIsSet() const
{
    return m_FileThresholdIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetFileThreshold()
{
    m_FileThresholdIsSet = false;
}
ConfigNodePropertyDropDown OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getMEGABYTES() const
{
    return m_MEGA_BYTES;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setMEGABYTES(ConfigNodePropertyDropDown const& value)
{
    m_MEGA_BYTES = value;
    m_MEGA_BYTESIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::mEGABYTESIsSet() const
{
    return m_MEGA_BYTESIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetMEGA_BYTES()
{
    m_MEGA_BYTESIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getUseOffHeapMemory() const
{
    return m_UseOffHeapMemory;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setUseOffHeapMemory(ConfigNodePropertyBoolean const& value)
{
    m_UseOffHeapMemory = value;
    m_UseOffHeapMemoryIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::useOffHeapMemoryIsSet() const
{
    return m_UseOffHeapMemoryIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetUseOffHeapMemory()
{
    m_UseOffHeapMemoryIsSet = false;
}
ConfigNodePropertyDropDown OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getDigestAlgorithm() const
{
    return m_DigestAlgorithm;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setDigestAlgorithm(ConfigNodePropertyDropDown const& value)
{
    m_DigestAlgorithm = value;
    m_DigestAlgorithmIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::digestAlgorithmIsSet() const
{
    return m_DigestAlgorithmIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetDigestAlgorithm()
{
    m_DigestAlgorithmIsSet = false;
}
ConfigNodePropertyInteger OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getMonitoringQueueSize() const
{
    return m_MonitoringQueueSize;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setMonitoringQueueSize(ConfigNodePropertyInteger const& value)
{
    m_MonitoringQueueSize = value;
    m_MonitoringQueueSizeIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::monitoringQueueSizeIsSet() const
{
    return m_MonitoringQueueSizeIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetMonitoringQueueSize()
{
    m_MonitoringQueueSizeIsSet = false;
}
ConfigNodePropertyArray OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getPathsMapping() const
{
    return m_PathsMapping;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setPathsMapping(ConfigNodePropertyArray const& value)
{
    m_PathsMapping = value;
    m_PathsMappingIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::pathsMappingIsSet() const
{
    return m_PathsMappingIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetPathsMapping()
{
    m_PathsMappingIsSet = false;
}
ConfigNodePropertyBoolean OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getStrictImport() const
{
    return m_StrictImport;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setStrictImport(ConfigNodePropertyBoolean const& value)
{
    m_StrictImport = value;
    m_StrictImportIsSet = true;
}
bool OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::strictImportIsSet() const
{
    return m_StrictImportIsSet;
}
void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::unsetStrictImport()
{
    m_StrictImportIsSet = false;
}

}
}
}
}

