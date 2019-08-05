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



#include "ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties()
{
    m_Omnisearch_suggestion_requiretext_minIsSet = false;
    m_Omnisearch_suggestion_spellcheck_requireIsSet = false;
}

ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::~ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties()
{
}

void ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Omnisearch_suggestion_requiretext_minIsSet)
    {
        val[utility::conversions::to_string_t("omnisearch.suggestion.requiretext.min")] = ModelBase::toJson(m_Omnisearch_suggestion_requiretext_min);
    }
    if(m_Omnisearch_suggestion_spellcheck_requireIsSet)
    {
        val[utility::conversions::to_string_t("omnisearch.suggestion.spellcheck.require")] = ModelBase::toJson(m_Omnisearch_suggestion_spellcheck_require);
    }

    return val;
}

void ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("omnisearch.suggestion.requiretext.min")))
    {
        if(!val[utility::conversions::to_string_t("omnisearch.suggestion.requiretext.min")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("omnisearch.suggestion.requiretext.min")]);
            setOmnisearchSuggestionRequiretextMin( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("omnisearch.suggestion.spellcheck.require")))
    {
        if(!val[utility::conversions::to_string_t("omnisearch.suggestion.spellcheck.require")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("omnisearch.suggestion.spellcheck.require")]);
            setOmnisearchSuggestionSpellcheckRequire( newItem );
        }
    }
}

void ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Omnisearch_suggestion_requiretext_minIsSet)
    {
        if (m_Omnisearch_suggestion_requiretext_min.get())
        {
            m_Omnisearch_suggestion_requiretext_min->toMultipart(multipart, utility::conversions::to_string_t("omnisearch.suggestion.requiretext.min."));
        }
    }
    if(m_Omnisearch_suggestion_spellcheck_requireIsSet)
    {
        if (m_Omnisearch_suggestion_spellcheck_require.get())
        {
            m_Omnisearch_suggestion_spellcheck_require->toMultipart(multipart, utility::conversions::to_string_t("omnisearch.suggestion.spellcheck.require."));
        }
    }
}

void ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("omnisearch.suggestion.requiretext.min")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("omnisearch.suggestion.requiretext.min")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("omnisearch.suggestion.requiretext.min."));
            setOmnisearchSuggestionRequiretextMin( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("omnisearch.suggestion.spellcheck.require")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("omnisearch.suggestion.spellcheck.require")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("omnisearch.suggestion.spellcheck.require."));
            setOmnisearchSuggestionSpellcheckRequire( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::getOmnisearchSuggestionRequiretextMin() const
{
    return m_Omnisearch_suggestion_requiretext_min;
}


void ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::setOmnisearchSuggestionRequiretextMin(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Omnisearch_suggestion_requiretext_min = value;
    m_Omnisearch_suggestion_requiretext_minIsSet = true;
}
bool ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::omnisearchSuggestionRequiretextMinIsSet() const
{
    return m_Omnisearch_suggestion_requiretext_minIsSet;
}

void ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::unsetOmnisearch_suggestion_requiretext_min()
{
    m_Omnisearch_suggestion_requiretext_minIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::getOmnisearchSuggestionSpellcheckRequire() const
{
    return m_Omnisearch_suggestion_spellcheck_require;
}


void ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::setOmnisearchSuggestionSpellcheckRequire(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Omnisearch_suggestion_spellcheck_require = value;
    m_Omnisearch_suggestion_spellcheck_requireIsSet = true;
}
bool ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::omnisearchSuggestionSpellcheckRequireIsSet() const
{
    return m_Omnisearch_suggestion_spellcheck_requireIsSet;
}

void ComAdobeGraniteOmnisearchImplCoreOmniSearchServiceImplProperties::unsetOmnisearch_suggestion_spellcheck_require()
{
    m_Omnisearch_suggestion_spellcheck_requireIsSet = false;
}

}
}
}
}
