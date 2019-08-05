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
/*
 * OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties_H_
#define OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties
    : public ModelBase
{
public:
    OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties();
    virtual ~OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getName() const;
    void setName(ConfigNodePropertyString const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyDropDown getType() const;
    void setType(ConfigNodePropertyDropDown const& value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getImportMode() const;
    void setImportMode(ConfigNodePropertyString const& value);
    bool importModeIsSet() const;
    void unsetImportMode();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getAclHandling() const;
    void setAclHandling(ConfigNodePropertyString const& value);
    bool aclHandlingIsSet() const;
    void unsetAclHandling();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPackageRoots() const;
    void setPackageRoots(ConfigNodePropertyString const& value);
    bool packageRootsIsSet() const;
    void unsetPackage_roots();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getPackageFilters() const;
    void setPackageFilters(ConfigNodePropertyArray const& value);
    bool packageFiltersIsSet() const;
    void unsetPackage_filters();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getPropertyFilters() const;
    void setPropertyFilters(ConfigNodePropertyArray const& value);
    bool propertyFiltersIsSet() const;
    void unsetProperty_filters();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getTempFsFolder() const;
    void setTempFsFolder(ConfigNodePropertyString const& value);
    bool tempFsFolderIsSet() const;
    void unsetTempFsFolder();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getUseBinaryReferences() const;
    void setUseBinaryReferences(ConfigNodePropertyBoolean const& value);
    bool useBinaryReferencesIsSet() const;
    void unsetUseBinaryReferences();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getAutoSaveThreshold() const;
    void setAutoSaveThreshold(ConfigNodePropertyInteger const& value);
    bool autoSaveThresholdIsSet() const;
    void unsetAutoSaveThreshold();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getCleanupDelay() const;
    void setCleanupDelay(ConfigNodePropertyInteger const& value);
    bool cleanupDelayIsSet() const;
    void unsetCleanupDelay();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getFileThreshold() const;
    void setFileThreshold(ConfigNodePropertyInteger const& value);
    bool fileThresholdIsSet() const;
    void unsetFileThreshold();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyDropDown getMEGABYTES() const;
    void setMEGABYTES(ConfigNodePropertyDropDown const& value);
    bool mEGABYTESIsSet() const;
    void unsetMEGA_BYTES();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getUseOffHeapMemory() const;
    void setUseOffHeapMemory(ConfigNodePropertyBoolean const& value);
    bool useOffHeapMemoryIsSet() const;
    void unsetUseOffHeapMemory();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyDropDown getDigestAlgorithm() const;
    void setDigestAlgorithm(ConfigNodePropertyDropDown const& value);
    bool digestAlgorithmIsSet() const;
    void unsetDigestAlgorithm();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getMonitoringQueueSize() const;
    void setMonitoringQueueSize(ConfigNodePropertyInteger const& value);
    bool monitoringQueueSizeIsSet() const;
    void unsetMonitoringQueueSize();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getPathsMapping() const;
    void setPathsMapping(ConfigNodePropertyArray const& value);
    bool pathsMappingIsSet() const;
    void unsetPathsMapping();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getStrictImport() const;
    void setStrictImport(ConfigNodePropertyBoolean const& value);
    bool strictImportIsSet() const;
    void unsetStrictImport();

protected:
    ConfigNodePropertyString m_Name;
    bool m_NameIsSet;
    ConfigNodePropertyDropDown m_Type;
    bool m_TypeIsSet;
    ConfigNodePropertyString m_ImportMode;
    bool m_ImportModeIsSet;
    ConfigNodePropertyString m_AclHandling;
    bool m_AclHandlingIsSet;
    ConfigNodePropertyString m_Package_roots;
    bool m_Package_rootsIsSet;
    ConfigNodePropertyArray m_Package_filters;
    bool m_Package_filtersIsSet;
    ConfigNodePropertyArray m_Property_filters;
    bool m_Property_filtersIsSet;
    ConfigNodePropertyString m_TempFsFolder;
    bool m_TempFsFolderIsSet;
    ConfigNodePropertyBoolean m_UseBinaryReferences;
    bool m_UseBinaryReferencesIsSet;
    ConfigNodePropertyInteger m_AutoSaveThreshold;
    bool m_AutoSaveThresholdIsSet;
    ConfigNodePropertyInteger m_CleanupDelay;
    bool m_CleanupDelayIsSet;
    ConfigNodePropertyInteger m_FileThreshold;
    bool m_FileThresholdIsSet;
    ConfigNodePropertyDropDown m_MEGA_BYTES;
    bool m_MEGA_BYTESIsSet;
    ConfigNodePropertyBoolean m_UseOffHeapMemory;
    bool m_UseOffHeapMemoryIsSet;
    ConfigNodePropertyDropDown m_DigestAlgorithm;
    bool m_DigestAlgorithmIsSet;
    ConfigNodePropertyInteger m_MonitoringQueueSize;
    bool m_MonitoringQueueSizeIsSet;
    ConfigNodePropertyArray m_PathsMapping;
    bool m_PathsMappingIsSet;
    ConfigNodePropertyBoolean m_StrictImport;
    bool m_StrictImportIsSet;
};

}
}
}
}

#endif /* OrgApacheSlingDistributionSerializationImplVltVaultDistributionProperties_H_ */