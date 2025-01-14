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
 * ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties.h
 *
 * 
 */

#ifndef ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties_H_
#define ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties_H_



#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties
{
public:
    ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties();
    virtual ~ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getCommunitiesIntegrationLivefyreSlingEventFilter() const;
    void setCommunitiesIntegrationLivefyreSlingEventFilter(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Communities_integration_livefyre_sling_event_filter;
};

}
}
}
}

#endif /* ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties_H_ */
