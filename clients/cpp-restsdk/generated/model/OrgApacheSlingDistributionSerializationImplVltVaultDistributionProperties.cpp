/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties.h"

namespace org {
namespace openapitools {
namespace client {
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

web::json::value OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_ImportModeIsSet)
    {
        val[utility::conversions::to_string_t("importMode")] = ModelBase::toJson(m_ImportMode);
    }
    if(m_AclHandlingIsSet)
    {
        val[utility::conversions::to_string_t("aclHandling")] = ModelBase::toJson(m_AclHandling);
    }
    if(m_Package_rootsIsSet)
    {
        val[utility::conversions::to_string_t("package.roots")] = ModelBase::toJson(m_Package_roots);
    }
    if(m_Package_filtersIsSet)
    {
        val[utility::conversions::to_string_t("package.filters")] = ModelBase::toJson(m_Package_filters);
    }
    if(m_Property_filtersIsSet)
    {
        val[utility::conversions::to_string_t("property.filters")] = ModelBase::toJson(m_Property_filters);
    }
    if(m_TempFsFolderIsSet)
    {
        val[utility::conversions::to_string_t("tempFsFolder")] = ModelBase::toJson(m_TempFsFolder);
    }
    if(m_UseBinaryReferencesIsSet)
    {
        val[utility::conversions::to_string_t("useBinaryReferences")] = ModelBase::toJson(m_UseBinaryReferences);
    }
    if(m_AutoSaveThresholdIsSet)
    {
        val[utility::conversions::to_string_t("autoSaveThreshold")] = ModelBase::toJson(m_AutoSaveThreshold);
    }
    if(m_CleanupDelayIsSet)
    {
        val[utility::conversions::to_string_t("cleanupDelay")] = ModelBase::toJson(m_CleanupDelay);
    }
    if(m_FileThresholdIsSet)
    {
        val[utility::conversions::to_string_t("fileThreshold")] = ModelBase::toJson(m_FileThreshold);
    }
    if(m_MEGA_BYTESIsSet)
    {
        val[utility::conversions::to_string_t("MEGA_BYTES")] = ModelBase::toJson(m_MEGA_BYTES);
    }
    if(m_UseOffHeapMemoryIsSet)
    {
        val[utility::conversions::to_string_t("useOffHeapMemory")] = ModelBase::toJson(m_UseOffHeapMemory);
    }
    if(m_DigestAlgorithmIsSet)
    {
        val[utility::conversions::to_string_t("digestAlgorithm")] = ModelBase::toJson(m_DigestAlgorithm);
    }
    if(m_MonitoringQueueSizeIsSet)
    {
        val[utility::conversions::to_string_t("monitoringQueueSize")] = ModelBase::toJson(m_MonitoringQueueSize);
    }
    if(m_PathsMappingIsSet)
    {
        val[utility::conversions::to_string_t("pathsMapping")] = ModelBase::toJson(m_PathsMapping);
    }
    if(m_StrictImportIsSet)
    {
        val[utility::conversions::to_string_t("strictImport")] = ModelBase::toJson(m_StrictImport);
    }

    return val;
}

void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        if(!val[utility::conversions::to_string_t("name")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("name")]);
            setName( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        if(!val[utility::conversions::to_string_t("type")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("type")]);
            setType( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("importMode")))
    {
        if(!val[utility::conversions::to_string_t("importMode")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("importMode")]);
            setImportMode( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aclHandling")))
    {
        if(!val[utility::conversions::to_string_t("aclHandling")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("aclHandling")]);
            setAclHandling( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package.roots")))
    {
        if(!val[utility::conversions::to_string_t("package.roots")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("package.roots")]);
            setPackageRoots( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package.filters")))
    {
        if(!val[utility::conversions::to_string_t("package.filters")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("package.filters")]);
            setPackageFilters( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("property.filters")))
    {
        if(!val[utility::conversions::to_string_t("property.filters")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("property.filters")]);
            setPropertyFilters( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tempFsFolder")))
    {
        if(!val[utility::conversions::to_string_t("tempFsFolder")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("tempFsFolder")]);
            setTempFsFolder( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("useBinaryReferences")))
    {
        if(!val[utility::conversions::to_string_t("useBinaryReferences")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("useBinaryReferences")]);
            setUseBinaryReferences( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("autoSaveThreshold")))
    {
        if(!val[utility::conversions::to_string_t("autoSaveThreshold")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("autoSaveThreshold")]);
            setAutoSaveThreshold( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cleanupDelay")))
    {
        if(!val[utility::conversions::to_string_t("cleanupDelay")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("cleanupDelay")]);
            setCleanupDelay( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fileThreshold")))
    {
        if(!val[utility::conversions::to_string_t("fileThreshold")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("fileThreshold")]);
            setFileThreshold( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("MEGA_BYTES")))
    {
        if(!val[utility::conversions::to_string_t("MEGA_BYTES")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("MEGA_BYTES")]);
            setMEGABYTES( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("useOffHeapMemory")))
    {
        if(!val[utility::conversions::to_string_t("useOffHeapMemory")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("useOffHeapMemory")]);
            setUseOffHeapMemory( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("digestAlgorithm")))
    {
        if(!val[utility::conversions::to_string_t("digestAlgorithm")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("digestAlgorithm")]);
            setDigestAlgorithm( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("monitoringQueueSize")))
    {
        if(!val[utility::conversions::to_string_t("monitoringQueueSize")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("monitoringQueueSize")]);
            setMonitoringQueueSize( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pathsMapping")))
    {
        if(!val[utility::conversions::to_string_t("pathsMapping")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("pathsMapping")]);
            setPathsMapping( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("strictImport")))
    {
        if(!val[utility::conversions::to_string_t("strictImport")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("strictImport")]);
            setStrictImport( newItem );
        }
    }
}

void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_NameIsSet)
    {
        if (m_Name.get())
        {
            m_Name->toMultipart(multipart, utility::conversions::to_string_t("name."));
        }
    }
    if(m_TypeIsSet)
    {
        if (m_Type.get())
        {
            m_Type->toMultipart(multipart, utility::conversions::to_string_t("type."));
        }
    }
    if(m_ImportModeIsSet)
    {
        if (m_ImportMode.get())
        {
            m_ImportMode->toMultipart(multipart, utility::conversions::to_string_t("importMode."));
        }
    }
    if(m_AclHandlingIsSet)
    {
        if (m_AclHandling.get())
        {
            m_AclHandling->toMultipart(multipart, utility::conversions::to_string_t("aclHandling."));
        }
    }
    if(m_Package_rootsIsSet)
    {
        if (m_Package_roots.get())
        {
            m_Package_roots->toMultipart(multipart, utility::conversions::to_string_t("package.roots."));
        }
    }
    if(m_Package_filtersIsSet)
    {
        if (m_Package_filters.get())
        {
            m_Package_filters->toMultipart(multipart, utility::conversions::to_string_t("package.filters."));
        }
    }
    if(m_Property_filtersIsSet)
    {
        if (m_Property_filters.get())
        {
            m_Property_filters->toMultipart(multipart, utility::conversions::to_string_t("property.filters."));
        }
    }
    if(m_TempFsFolderIsSet)
    {
        if (m_TempFsFolder.get())
        {
            m_TempFsFolder->toMultipart(multipart, utility::conversions::to_string_t("tempFsFolder."));
        }
    }
    if(m_UseBinaryReferencesIsSet)
    {
        if (m_UseBinaryReferences.get())
        {
            m_UseBinaryReferences->toMultipart(multipart, utility::conversions::to_string_t("useBinaryReferences."));
        }
    }
    if(m_AutoSaveThresholdIsSet)
    {
        if (m_AutoSaveThreshold.get())
        {
            m_AutoSaveThreshold->toMultipart(multipart, utility::conversions::to_string_t("autoSaveThreshold."));
        }
    }
    if(m_CleanupDelayIsSet)
    {
        if (m_CleanupDelay.get())
        {
            m_CleanupDelay->toMultipart(multipart, utility::conversions::to_string_t("cleanupDelay."));
        }
    }
    if(m_FileThresholdIsSet)
    {
        if (m_FileThreshold.get())
        {
            m_FileThreshold->toMultipart(multipart, utility::conversions::to_string_t("fileThreshold."));
        }
    }
    if(m_MEGA_BYTESIsSet)
    {
        if (m_MEGA_BYTES.get())
        {
            m_MEGA_BYTES->toMultipart(multipart, utility::conversions::to_string_t("MEGA_BYTES."));
        }
    }
    if(m_UseOffHeapMemoryIsSet)
    {
        if (m_UseOffHeapMemory.get())
        {
            m_UseOffHeapMemory->toMultipart(multipart, utility::conversions::to_string_t("useOffHeapMemory."));
        }
    }
    if(m_DigestAlgorithmIsSet)
    {
        if (m_DigestAlgorithm.get())
        {
            m_DigestAlgorithm->toMultipart(multipart, utility::conversions::to_string_t("digestAlgorithm."));
        }
    }
    if(m_MonitoringQueueSizeIsSet)
    {
        if (m_MonitoringQueueSize.get())
        {
            m_MonitoringQueueSize->toMultipart(multipart, utility::conversions::to_string_t("monitoringQueueSize."));
        }
    }
    if(m_PathsMappingIsSet)
    {
        if (m_PathsMapping.get())
        {
            m_PathsMapping->toMultipart(multipart, utility::conversions::to_string_t("pathsMapping."));
        }
    }
    if(m_StrictImportIsSet)
    {
        if (m_StrictImport.get())
        {
            m_StrictImport->toMultipart(multipart, utility::conversions::to_string_t("strictImport."));
        }
    }
}

void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("name")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("name."));
            setName( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("type")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("type."));
            setType( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("importMode")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("importMode")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("importMode."));
            setImportMode( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("aclHandling")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("aclHandling")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("aclHandling."));
            setAclHandling( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("package.roots")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("package.roots")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("package.roots."));
            setPackageRoots( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("package.filters")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("package.filters")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("package.filters."));
            setPackageFilters( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("property.filters")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("property.filters")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("property.filters."));
            setPropertyFilters( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tempFsFolder")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("tempFsFolder")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("tempFsFolder."));
            setTempFsFolder( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("useBinaryReferences")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("useBinaryReferences")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("useBinaryReferences."));
            setUseBinaryReferences( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("autoSaveThreshold")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("autoSaveThreshold")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("autoSaveThreshold."));
            setAutoSaveThreshold( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cleanupDelay")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cleanupDelay")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cleanupDelay."));
            setCleanupDelay( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fileThreshold")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("fileThreshold")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("fileThreshold."));
            setFileThreshold( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("MEGA_BYTES")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("MEGA_BYTES")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("MEGA_BYTES."));
            setMEGABYTES( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("useOffHeapMemory")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("useOffHeapMemory")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("useOffHeapMemory."));
            setUseOffHeapMemory( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("digestAlgorithm")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("digestAlgorithm")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("digestAlgorithm."));
            setDigestAlgorithm( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("monitoringQueueSize")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("monitoringQueueSize")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("monitoringQueueSize."));
            setMonitoringQueueSize( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pathsMapping")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("pathsMapping")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("pathsMapping."));
            setPathsMapping( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("strictImport")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("strictImport")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("strictImport."));
            setStrictImport( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getName() const
{
    return m_Name;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setName(std::shared_ptr<ConfigNodePropertyString> value)
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

std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getType() const
{
    return m_Type;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setType(std::shared_ptr<ConfigNodePropertyDropDown> value)
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

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getImportMode() const
{
    return m_ImportMode;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setImportMode(std::shared_ptr<ConfigNodePropertyString> value)
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

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getAclHandling() const
{
    return m_AclHandling;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setAclHandling(std::shared_ptr<ConfigNodePropertyString> value)
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

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getPackageRoots() const
{
    return m_Package_roots;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setPackageRoots(std::shared_ptr<ConfigNodePropertyString> value)
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

std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getPackageFilters() const
{
    return m_Package_filters;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setPackageFilters(std::shared_ptr<ConfigNodePropertyArray> value)
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

std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getPropertyFilters() const
{
    return m_Property_filters;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setPropertyFilters(std::shared_ptr<ConfigNodePropertyArray> value)
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

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getTempFsFolder() const
{
    return m_TempFsFolder;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setTempFsFolder(std::shared_ptr<ConfigNodePropertyString> value)
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

std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getUseBinaryReferences() const
{
    return m_UseBinaryReferences;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setUseBinaryReferences(std::shared_ptr<ConfigNodePropertyBoolean> value)
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

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getAutoSaveThreshold() const
{
    return m_AutoSaveThreshold;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setAutoSaveThreshold(std::shared_ptr<ConfigNodePropertyInteger> value)
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

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getCleanupDelay() const
{
    return m_CleanupDelay;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setCleanupDelay(std::shared_ptr<ConfigNodePropertyInteger> value)
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

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getFileThreshold() const
{
    return m_FileThreshold;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setFileThreshold(std::shared_ptr<ConfigNodePropertyInteger> value)
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

std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getMEGABYTES() const
{
    return m_MEGA_BYTES;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setMEGABYTES(std::shared_ptr<ConfigNodePropertyDropDown> value)
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

std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getUseOffHeapMemory() const
{
    return m_UseOffHeapMemory;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setUseOffHeapMemory(std::shared_ptr<ConfigNodePropertyBoolean> value)
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

std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getDigestAlgorithm() const
{
    return m_DigestAlgorithm;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setDigestAlgorithm(std::shared_ptr<ConfigNodePropertyDropDown> value)
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

std::shared_ptr<ConfigNodePropertyInteger> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getMonitoringQueueSize() const
{
    return m_MonitoringQueueSize;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setMonitoringQueueSize(std::shared_ptr<ConfigNodePropertyInteger> value)
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

std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getPathsMapping() const
{
    return m_PathsMapping;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setPathsMapping(std::shared_ptr<ConfigNodePropertyArray> value)
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

std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::getStrictImport() const
{
    return m_StrictImport;
}


void OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties::setStrictImport(std::shared_ptr<ConfigNodePropertyBoolean> value)
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

