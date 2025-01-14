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
 * ComAdobeCqDamMacSyncHelperImplMACSyncClientImplProperties.h
 *
 * 
 */

#ifndef ComAdobeCqDamMacSyncHelperImplMACSyncClientImplProperties_H_
#define ComAdobeCqDamMacSyncHelperImplMACSyncClientImplProperties_H_



#include "ConfigNodePropertyInteger.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqDamMacSyncHelperImplMACSyncClientImplProperties
{
public:
    ComAdobeCqDamMacSyncHelperImplMACSyncClientImplProperties();
    virtual ~ComAdobeCqDamMacSyncHelperImplMACSyncClientImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqDamMacSyncHelperImplMACSyncClientImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getComAdobeDamMacSyncClientSoTimeout() const;
    void setComAdobeDamMacSyncClientSoTimeout(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Com_adobe_dam_mac_sync_client_so_timeout;
};

}
}
}
}

#endif /* ComAdobeCqDamMacSyncHelperImplMACSyncClientImplProperties_H_ */
