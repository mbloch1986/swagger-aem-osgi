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
 * ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyInteger.h"

namespace org {
namespace openapitools {
namespace client {
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

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getAccepted() const;
    bool acceptedIsSet() const;
    void unsetAccepted();
    void setAccepted(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getRanked() const;
    bool rankedIsSet() const;
    void unsetRanked();
    void setRanked(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Accepted;
    bool m_AcceptedIsSet;
    std::shared_ptr<ConfigNodePropertyInteger> m_Ranked;
    bool m_RankedIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties_H_ */
