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



#include "ComDayCqMcmCampaignImplIntegrationConfigImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqMcmCampaignImplIntegrationConfigImplProperties::ComDayCqMcmCampaignImplIntegrationConfigImplProperties()
{
    m_Aem_mcm_campaign_formConstraintsIsSet = false;
    m_Aem_mcm_campaign_publicUrlIsSet = false;
    m_Aem_mcm_campaign_relaxedSSLIsSet = false;
}

ComDayCqMcmCampaignImplIntegrationConfigImplProperties::~ComDayCqMcmCampaignImplIntegrationConfigImplProperties()
{
}

void ComDayCqMcmCampaignImplIntegrationConfigImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqMcmCampaignImplIntegrationConfigImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Aem_mcm_campaign_formConstraintsIsSet)
    {
        val[utility::conversions::to_string_t("aem.mcm.campaign.formConstraints")] = ModelBase::toJson(m_Aem_mcm_campaign_formConstraints);
    }
    if(m_Aem_mcm_campaign_publicUrlIsSet)
    {
        val[utility::conversions::to_string_t("aem.mcm.campaign.publicUrl")] = ModelBase::toJson(m_Aem_mcm_campaign_publicUrl);
    }
    if(m_Aem_mcm_campaign_relaxedSSLIsSet)
    {
        val[utility::conversions::to_string_t("aem.mcm.campaign.relaxedSSL")] = ModelBase::toJson(m_Aem_mcm_campaign_relaxedSSL);
    }

    return val;
}

void ComDayCqMcmCampaignImplIntegrationConfigImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("aem.mcm.campaign.formConstraints")))
    {
        if(!val[utility::conversions::to_string_t("aem.mcm.campaign.formConstraints")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("aem.mcm.campaign.formConstraints")]);
            setAemMcmCampaignFormConstraints( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aem.mcm.campaign.publicUrl")))
    {
        if(!val[utility::conversions::to_string_t("aem.mcm.campaign.publicUrl")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("aem.mcm.campaign.publicUrl")]);
            setAemMcmCampaignPublicUrl( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aem.mcm.campaign.relaxedSSL")))
    {
        if(!val[utility::conversions::to_string_t("aem.mcm.campaign.relaxedSSL")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("aem.mcm.campaign.relaxedSSL")]);
            setAemMcmCampaignRelaxedSSL( newItem );
        }
    }
}

void ComDayCqMcmCampaignImplIntegrationConfigImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Aem_mcm_campaign_formConstraintsIsSet)
    {
        if (m_Aem_mcm_campaign_formConstraints.get())
        {
            m_Aem_mcm_campaign_formConstraints->toMultipart(multipart, utility::conversions::to_string_t("aem.mcm.campaign.formConstraints."));
        }
    }
    if(m_Aem_mcm_campaign_publicUrlIsSet)
    {
        if (m_Aem_mcm_campaign_publicUrl.get())
        {
            m_Aem_mcm_campaign_publicUrl->toMultipart(multipart, utility::conversions::to_string_t("aem.mcm.campaign.publicUrl."));
        }
    }
    if(m_Aem_mcm_campaign_relaxedSSLIsSet)
    {
        if (m_Aem_mcm_campaign_relaxedSSL.get())
        {
            m_Aem_mcm_campaign_relaxedSSL->toMultipart(multipart, utility::conversions::to_string_t("aem.mcm.campaign.relaxedSSL."));
        }
    }
}

void ComDayCqMcmCampaignImplIntegrationConfigImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("aem.mcm.campaign.formConstraints")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("aem.mcm.campaign.formConstraints")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("aem.mcm.campaign.formConstraints."));
            setAemMcmCampaignFormConstraints( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("aem.mcm.campaign.publicUrl")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("aem.mcm.campaign.publicUrl")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("aem.mcm.campaign.publicUrl."));
            setAemMcmCampaignPublicUrl( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("aem.mcm.campaign.relaxedSSL")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("aem.mcm.campaign.relaxedSSL")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("aem.mcm.campaign.relaxedSSL."));
            setAemMcmCampaignRelaxedSSL( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqMcmCampaignImplIntegrationConfigImplProperties::getAemMcmCampaignFormConstraints() const
{
    return m_Aem_mcm_campaign_formConstraints;
}


void ComDayCqMcmCampaignImplIntegrationConfigImplProperties::setAemMcmCampaignFormConstraints(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Aem_mcm_campaign_formConstraints = value;
    m_Aem_mcm_campaign_formConstraintsIsSet = true;
}
bool ComDayCqMcmCampaignImplIntegrationConfigImplProperties::aemMcmCampaignFormConstraintsIsSet() const
{
    return m_Aem_mcm_campaign_formConstraintsIsSet;
}

void ComDayCqMcmCampaignImplIntegrationConfigImplProperties::unsetAem_mcm_campaign_formConstraints()
{
    m_Aem_mcm_campaign_formConstraintsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqMcmCampaignImplIntegrationConfigImplProperties::getAemMcmCampaignPublicUrl() const
{
    return m_Aem_mcm_campaign_publicUrl;
}


void ComDayCqMcmCampaignImplIntegrationConfigImplProperties::setAemMcmCampaignPublicUrl(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Aem_mcm_campaign_publicUrl = value;
    m_Aem_mcm_campaign_publicUrlIsSet = true;
}
bool ComDayCqMcmCampaignImplIntegrationConfigImplProperties::aemMcmCampaignPublicUrlIsSet() const
{
    return m_Aem_mcm_campaign_publicUrlIsSet;
}

void ComDayCqMcmCampaignImplIntegrationConfigImplProperties::unsetAem_mcm_campaign_publicUrl()
{
    m_Aem_mcm_campaign_publicUrlIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqMcmCampaignImplIntegrationConfigImplProperties::getAemMcmCampaignRelaxedSSL() const
{
    return m_Aem_mcm_campaign_relaxedSSL;
}


void ComDayCqMcmCampaignImplIntegrationConfigImplProperties::setAemMcmCampaignRelaxedSSL(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Aem_mcm_campaign_relaxedSSL = value;
    m_Aem_mcm_campaign_relaxedSSLIsSet = true;
}
bool ComDayCqMcmCampaignImplIntegrationConfigImplProperties::aemMcmCampaignRelaxedSSLIsSet() const
{
    return m_Aem_mcm_campaign_relaxedSSLIsSet;
}

void ComDayCqMcmCampaignImplIntegrationConfigImplProperties::unsetAem_mcm_campaign_relaxedSSL()
{
    m_Aem_mcm_campaign_relaxedSSLIsSet = false;
}

}
}
}
}

