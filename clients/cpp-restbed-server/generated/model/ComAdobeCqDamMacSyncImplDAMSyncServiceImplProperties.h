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

/*
 * ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties.h
 *
 * 
 */

#ifndef ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties_H_
#define ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties
{
public:
    ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties();
    virtual ~ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getComAdobeCqDamMacSyncDamsyncserviceRegisteredPaths() const;
    void setComAdobeCqDamMacSyncDamsyncserviceRegisteredPaths(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getComAdobeCqDamMacSyncDamsyncserviceSyncRenditions() const;
    void setComAdobeCqDamMacSyncDamsyncserviceSyncRenditions(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getComAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs() const;
    void setComAdobeCqDamMacSyncDamsyncserviceReplicateThreadWaitMs(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getComAdobeCqDamMacSyncDamsyncservicePlatform() const;
    void setComAdobeCqDamMacSyncDamsyncservicePlatform(std::shared_ptr<ConfigNodePropertyDropDown> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions;
    std::shared_ptr<ConfigNodePropertyInteger> m_Com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms;
    std::shared_ptr<ConfigNodePropertyDropDown> m_Com_adobe_cq_dam_mac_sync_damsyncservice_platform;
};

}
}
}
}

#endif /* ComAdobeCqDamMacSyncImplDAMSyncServiceImplProperties_H_ */
