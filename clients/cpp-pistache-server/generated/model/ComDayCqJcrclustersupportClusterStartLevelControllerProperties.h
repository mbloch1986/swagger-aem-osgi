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
 * ComDayCqJcrclustersupportClusterStartLevelControllerProperties.h
 *
 * 
 */

#ifndef ComDayCqJcrclustersupportClusterStartLevelControllerProperties_H_
#define ComDayCqJcrclustersupportClusterStartLevelControllerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqJcrclustersupportClusterStartLevelControllerProperties
    : public ModelBase
{
public:
    ComDayCqJcrclustersupportClusterStartLevelControllerProperties();
    virtual ~ComDayCqJcrclustersupportClusterStartLevelControllerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqJcrclustersupportClusterStartLevelControllerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getClusterLevelEnable() const;
    void setClusterLevelEnable(ConfigNodePropertyBoolean const& value);
    bool clusterLevelEnableIsSet() const;
    void unsetCluster_level_enable();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getClusterMasterLevel() const;
    void setClusterMasterLevel(ConfigNodePropertyInteger const& value);
    bool clusterMasterLevelIsSet() const;
    void unsetCluster_master_level();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getClusterSlaveLevel() const;
    void setClusterSlaveLevel(ConfigNodePropertyInteger const& value);
    bool clusterSlaveLevelIsSet() const;
    void unsetCluster_slave_level();

protected:
    ConfigNodePropertyBoolean m_Cluster_level_enable;
    bool m_Cluster_level_enableIsSet;
    ConfigNodePropertyInteger m_Cluster_master_level;
    bool m_Cluster_master_levelIsSet;
    ConfigNodePropertyInteger m_Cluster_slave_level;
    bool m_Cluster_slave_levelIsSet;
};

}
}
}
}

#endif /* ComDayCqJcrclustersupportClusterStartLevelControllerProperties_H_ */
