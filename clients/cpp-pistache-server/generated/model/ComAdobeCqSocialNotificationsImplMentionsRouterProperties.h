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
 * ComAdobeCqSocialNotificationsImplMentionsRouterProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialNotificationsImplMentionsRouterProperties_H_
#define ComAdobeCqSocialNotificationsImplMentionsRouterProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialNotificationsImplMentionsRouterProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialNotificationsImplMentionsRouterProperties();
    virtual ~ComAdobeCqSocialNotificationsImplMentionsRouterProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialNotificationsImplMentionsRouterProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getEventTopics() const;
    void setEventTopics(ConfigNodePropertyString const& value);
    bool eventTopicsIsSet() const;
    void unsetEvent_topics();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getEventFilter() const;
    void setEventFilter(ConfigNodePropertyString const& value);
    bool eventFilterIsSet() const;
    void unsetEvent_filter();

protected:
    ConfigNodePropertyString m_Event_topics;
    bool m_Event_topicsIsSet;
    ConfigNodePropertyString m_Event_filter;
    bool m_Event_filterIsSet;
};

}
}
}
}

#endif /* ComAdobeCqSocialNotificationsImplMentionsRouterProperties_H_ */
