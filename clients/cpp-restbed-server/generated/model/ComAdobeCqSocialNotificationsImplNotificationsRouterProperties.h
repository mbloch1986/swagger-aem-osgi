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
 * ComAdobeCqSocialNotificationsImplNotificationsRouterProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialNotificationsImplNotificationsRouterProperties_H_
#define ComAdobeCqSocialNotificationsImplNotificationsRouterProperties_H_



#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialNotificationsImplNotificationsRouterProperties
{
public:
    ComAdobeCqSocialNotificationsImplNotificationsRouterProperties();
    virtual ~ComAdobeCqSocialNotificationsImplNotificationsRouterProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqSocialNotificationsImplNotificationsRouterProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEventTopics() const;
    void setEventTopics(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEventFilter() const;
    void setEventFilter(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Event_topics;
    std::shared_ptr<ConfigNodePropertyString> m_Event_filter;
};

}
}
}
}

#endif /* ComAdobeCqSocialNotificationsImplNotificationsRouterProperties_H_ */
