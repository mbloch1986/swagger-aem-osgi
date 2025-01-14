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
 * ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties_H_
#define ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties_H_


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
class  ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties();
    virtual ~ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getAccepted() const;
    void setAccepted(ConfigNodePropertyBoolean const& value);
    bool acceptedIsSet() const;
    void unsetAccepted();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getRanked() const;
    void setRanked(ConfigNodePropertyInteger const& value);
    bool rankedIsSet() const;
    void unsetRanked();

protected:
    ConfigNodePropertyBoolean m_Accepted;
    bool m_AcceptedIsSet;
    ConfigNodePropertyInteger m_Ranked;
    bool m_RankedIsSet;
};

}
}
}
}

#endif /* ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties_H_ */
