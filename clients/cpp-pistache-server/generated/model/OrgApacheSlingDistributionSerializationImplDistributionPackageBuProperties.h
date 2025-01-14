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
 * OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties.h
 *
 * 
 */

#ifndef OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties_H_
#define OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties_H_


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
class  OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties
    : public ModelBase
{
public:
    OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties();
    virtual ~OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties members

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
    ConfigNodePropertyString getFormatTarget() const;
    void setFormatTarget(ConfigNodePropertyString const& value);
    bool formatTargetIsSet() const;
    void unsetFormat_target();
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
    ConfigNodePropertyInteger getFileThreshold() const;
    void setFileThreshold(ConfigNodePropertyInteger const& value);
    bool fileThresholdIsSet() const;
    void unsetFileThreshold();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyDropDown getMemoryUnit() const;
    void setMemoryUnit(ConfigNodePropertyDropDown const& value);
    bool memoryUnitIsSet() const;
    void unsetMemoryUnit();
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
    ConfigNodePropertyInteger getCleanupDelay() const;
    void setCleanupDelay(ConfigNodePropertyInteger const& value);
    bool cleanupDelayIsSet() const;
    void unsetCleanupDelay();
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

protected:
    ConfigNodePropertyString m_Name;
    bool m_NameIsSet;
    ConfigNodePropertyDropDown m_Type;
    bool m_TypeIsSet;
    ConfigNodePropertyString m_Format_target;
    bool m_Format_targetIsSet;
    ConfigNodePropertyString m_TempFsFolder;
    bool m_TempFsFolderIsSet;
    ConfigNodePropertyInteger m_FileThreshold;
    bool m_FileThresholdIsSet;
    ConfigNodePropertyDropDown m_MemoryUnit;
    bool m_MemoryUnitIsSet;
    ConfigNodePropertyBoolean m_UseOffHeapMemory;
    bool m_UseOffHeapMemoryIsSet;
    ConfigNodePropertyDropDown m_DigestAlgorithm;
    bool m_DigestAlgorithmIsSet;
    ConfigNodePropertyInteger m_MonitoringQueueSize;
    bool m_MonitoringQueueSizeIsSet;
    ConfigNodePropertyInteger m_CleanupDelay;
    bool m_CleanupDelayIsSet;
    ConfigNodePropertyArray m_Package_filters;
    bool m_Package_filtersIsSet;
    ConfigNodePropertyArray m_Property_filters;
    bool m_Property_filtersIsSet;
};

}
}
}
}

#endif /* OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties_H_ */
