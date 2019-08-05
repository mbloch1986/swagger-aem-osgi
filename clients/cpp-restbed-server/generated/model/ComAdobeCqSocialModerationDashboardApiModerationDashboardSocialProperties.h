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
 * ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties_H_
#define ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties_H_



#include "ConfigNodePropertyInteger.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties
{
public:
    ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties();
    virtual ~ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getPriority() const;
    void setPriority(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_Priority;
};

}
}
}
}

#endif /* ComAdobeCqSocialModerationDashboardApiModerationDashboardSocialProperties_H_ */