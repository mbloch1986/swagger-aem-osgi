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
 * ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties_H_
#define ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties();
    virtual ~ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getPriorityOrder() const;
    void setPriorityOrder(ConfigNodePropertyInteger const& value);
    bool priorityOrderIsSet() const;
    void unsetPriorityOrder();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getReplyEmailPatterns() const;
    void setReplyEmailPatterns(ConfigNodePropertyArray const& value);
    bool replyEmailPatternsIsSet() const;
    void unsetReplyEmailPatterns();

protected:
    ConfigNodePropertyInteger m_PriorityOrder;
    bool m_PriorityOrderIsSet;
    ConfigNodePropertyArray m_ReplyEmailPatterns;
    bool m_ReplyEmailPatternsIsSet;
};

}
}
}
}

#endif /* ComAdobeCqSocialCommonsEmailreplyImplMacmailEmailClientProviderProperties_H_ */