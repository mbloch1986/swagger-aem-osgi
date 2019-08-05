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
 * ComDayCqMcmCampaignImplIntegrationConfigImplProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqMcmCampaignImplIntegrationConfigImplProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqMcmCampaignImplIntegrationConfigImplProperties_H_


#include "../ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqMcmCampaignImplIntegrationConfigImplProperties
    : public ModelBase
{
public:
    ComDayCqMcmCampaignImplIntegrationConfigImplProperties();
    virtual ~ComDayCqMcmCampaignImplIntegrationConfigImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComDayCqMcmCampaignImplIntegrationConfigImplProperties members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getAemMcmCampaignFormConstraints() const;
    bool aemMcmCampaignFormConstraintsIsSet() const;
    void unsetAem_mcm_campaign_formConstraints();
    void setAemMcmCampaignFormConstraints(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getAemMcmCampaignPublicUrl() const;
    bool aemMcmCampaignPublicUrlIsSet() const;
    void unsetAem_mcm_campaign_publicUrl();
    void setAemMcmCampaignPublicUrl(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getAemMcmCampaignRelaxedSSL() const;
    bool aemMcmCampaignRelaxedSSLIsSet() const;
    void unsetAem_mcm_campaign_relaxedSSL();
    void setAemMcmCampaignRelaxedSSL(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Aem_mcm_campaign_formConstraints;
    bool m_Aem_mcm_campaign_formConstraintsIsSet;
    std::shared_ptr<ConfigNodePropertyString> m_Aem_mcm_campaign_publicUrl;
    bool m_Aem_mcm_campaign_publicUrlIsSet;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Aem_mcm_campaign_relaxedSSL;
    bool m_Aem_mcm_campaign_relaxedSSLIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComDayCqMcmCampaignImplIntegrationConfigImplProperties_H_ */