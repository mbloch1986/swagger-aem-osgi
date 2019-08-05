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



#include "ComAdobeCqCdnRewriterImplCDNRewriterProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqCdnRewriterImplCDNRewriterProperties::ComAdobeCqCdnRewriterImplCDNRewriterProperties()
{
    m_Service_rankingIsSet = false;
    m_Cdnrewriter_attributesIsSet = false;
    m_Cdn_rewriter_distribution_domainIsSet = false;
}

ComAdobeCqCdnRewriterImplCDNRewriterProperties::~ComAdobeCqCdnRewriterImplCDNRewriterProperties()
{
}

void ComAdobeCqCdnRewriterImplCDNRewriterProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqCdnRewriterImplCDNRewriterProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Service_rankingIsSet)
    {
        val[utility::conversions::to_string_t("service.ranking")] = ModelBase::toJson(m_Service_ranking);
    }
    if(m_Cdnrewriter_attributesIsSet)
    {
        val[utility::conversions::to_string_t("cdnrewriter.attributes")] = ModelBase::toJson(m_Cdnrewriter_attributes);
    }
    if(m_Cdn_rewriter_distribution_domainIsSet)
    {
        val[utility::conversions::to_string_t("cdn.rewriter.distribution.domain")] = ModelBase::toJson(m_Cdn_rewriter_distribution_domain);
    }

    return val;
}

void ComAdobeCqCdnRewriterImplCDNRewriterProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("service.ranking")))
    {
        if(!val[utility::conversions::to_string_t("service.ranking")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("service.ranking")]);
            setServiceRanking( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cdnrewriter.attributes")))
    {
        if(!val[utility::conversions::to_string_t("cdnrewriter.attributes")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("cdnrewriter.attributes")]);
            setCdnrewriterAttributes( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cdn.rewriter.distribution.domain")))
    {
        if(!val[utility::conversions::to_string_t("cdn.rewriter.distribution.domain")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("cdn.rewriter.distribution.domain")]);
            setCdnRewriterDistributionDomain( newItem );
        }
    }
}

void ComAdobeCqCdnRewriterImplCDNRewriterProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Service_rankingIsSet)
    {
        if (m_Service_ranking.get())
        {
            m_Service_ranking->toMultipart(multipart, utility::conversions::to_string_t("service.ranking."));
        }
    }
    if(m_Cdnrewriter_attributesIsSet)
    {
        if (m_Cdnrewriter_attributes.get())
        {
            m_Cdnrewriter_attributes->toMultipart(multipart, utility::conversions::to_string_t("cdnrewriter.attributes."));
        }
    }
    if(m_Cdn_rewriter_distribution_domainIsSet)
    {
        if (m_Cdn_rewriter_distribution_domain.get())
        {
            m_Cdn_rewriter_distribution_domain->toMultipart(multipart, utility::conversions::to_string_t("cdn.rewriter.distribution.domain."));
        }
    }
}

void ComAdobeCqCdnRewriterImplCDNRewriterProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("service.ranking")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("service.ranking")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("service.ranking."));
            setServiceRanking( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cdnrewriter.attributes")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cdnrewriter.attributes")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cdnrewriter.attributes."));
            setCdnrewriterAttributes( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cdn.rewriter.distribution.domain")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("cdn.rewriter.distribution.domain")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("cdn.rewriter.distribution.domain."));
            setCdnRewriterDistributionDomain( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqCdnRewriterImplCDNRewriterProperties::getServiceRanking() const
{
    return m_Service_ranking;
}


void ComAdobeCqCdnRewriterImplCDNRewriterProperties::setServiceRanking(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Service_ranking = value;
    m_Service_rankingIsSet = true;
}
bool ComAdobeCqCdnRewriterImplCDNRewriterProperties::serviceRankingIsSet() const
{
    return m_Service_rankingIsSet;
}

void ComAdobeCqCdnRewriterImplCDNRewriterProperties::unsetService_ranking()
{
    m_Service_rankingIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqCdnRewriterImplCDNRewriterProperties::getCdnrewriterAttributes() const
{
    return m_Cdnrewriter_attributes;
}


void ComAdobeCqCdnRewriterImplCDNRewriterProperties::setCdnrewriterAttributes(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Cdnrewriter_attributes = value;
    m_Cdnrewriter_attributesIsSet = true;
}
bool ComAdobeCqCdnRewriterImplCDNRewriterProperties::cdnrewriterAttributesIsSet() const
{
    return m_Cdnrewriter_attributesIsSet;
}

void ComAdobeCqCdnRewriterImplCDNRewriterProperties::unsetCdnrewriter_attributes()
{
    m_Cdnrewriter_attributesIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqCdnRewriterImplCDNRewriterProperties::getCdnRewriterDistributionDomain() const
{
    return m_Cdn_rewriter_distribution_domain;
}


void ComAdobeCqCdnRewriterImplCDNRewriterProperties::setCdnRewriterDistributionDomain(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Cdn_rewriter_distribution_domain = value;
    m_Cdn_rewriter_distribution_domainIsSet = true;
}
bool ComAdobeCqCdnRewriterImplCDNRewriterProperties::cdnRewriterDistributionDomainIsSet() const
{
    return m_Cdn_rewriter_distribution_domainIsSet;
}

void ComAdobeCqCdnRewriterImplCDNRewriterProperties::unsetCdn_rewriter_distribution_domain()
{
    m_Cdn_rewriter_distribution_domainIsSet = false;
}

}
}
}
}
