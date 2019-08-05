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
 * ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties_H_
#define ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties_H_


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
class  ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties();
    virtual ~ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getEnableScheduledPostsSearch() const;
    void setEnableScheduledPostsSearch(ConfigNodePropertyBoolean const& value);
    bool enableScheduledPostsSearchIsSet() const;
    void unsetEnableScheduledPostsSearch();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getNumberOfMinutes() const;
    void setNumberOfMinutes(ConfigNodePropertyInteger const& value);
    bool numberOfMinutesIsSet() const;
    void unsetNumberOfMinutes();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getMaxSearchLimit() const;
    void setMaxSearchLimit(ConfigNodePropertyInteger const& value);
    bool maxSearchLimitIsSet() const;
    void unsetMaxSearchLimit();

protected:
    ConfigNodePropertyBoolean m_EnableScheduledPostsSearch;
    bool m_EnableScheduledPostsSearchIsSet;
    ConfigNodePropertyInteger m_NumberOfMinutes;
    bool m_NumberOfMinutesIsSet;
    ConfigNodePropertyInteger m_MaxSearchLimit;
    bool m_MaxSearchLimitIsSet;
};

}
}
}
}

#endif /* ComAdobeCqSocialCommonsCommentsSchedulerImplSearchScheduledPosProperties_H_ */