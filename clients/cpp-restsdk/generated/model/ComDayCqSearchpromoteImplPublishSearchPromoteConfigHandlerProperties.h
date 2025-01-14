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
 * ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties
    : public ModelBase
{
public:
    ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties();
    virtual ~ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getCqSearchpromoteConfighandlerEnabled() const;
    bool cqSearchpromoteConfighandlerEnabledIsSet() const;
    void unsetCq_searchpromote_confighandler_enabled();
    void setCqSearchpromoteConfighandlerEnabled(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyBoolean> m_Cq_searchpromote_confighandler_enabled;
    bool m_Cq_searchpromote_confighandler_enabledIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqSearchpromoteImplPublishSearchPromoteConfigHandlerProperties_H_ */
