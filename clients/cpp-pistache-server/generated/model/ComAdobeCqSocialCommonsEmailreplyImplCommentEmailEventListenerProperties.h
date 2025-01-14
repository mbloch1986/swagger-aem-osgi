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
 * ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties_H_
#define ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties();
    virtual ~ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getEventTopics() const;
    void setEventTopics(ConfigNodePropertyString const& value);
    bool eventTopicsIsSet() const;
    void unsetEvent_topics();

protected:
    ConfigNodePropertyString m_Event_topics;
    bool m_Event_topicsIsSet;
};

}
}
}
}

#endif /* ComAdobeCqSocialCommonsEmailreplyImplCommentEmailEventListenerProperties_H_ */
