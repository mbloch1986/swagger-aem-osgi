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



#include "ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties::ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties()
{
    m_DisabledIsSet = false;
}

ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties::~ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties()
{
}

void ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_DisabledIsSet)
    {
        val[utility::conversions::to_string_t("disabled")] = ModelBase::toJson(m_Disabled);
    }

    return val;
}

void ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("disabled")))
    {
        if(!val[utility::conversions::to_string_t("disabled")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("disabled")]);
            setDisabled( newItem );
        }
    }
}

void ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_DisabledIsSet)
    {
        if (m_Disabled.get())
        {
            m_Disabled->toMultipart(multipart, utility::conversions::to_string_t("disabled."));
        }
    }
}

void ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("disabled")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("disabled")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("disabled."));
            setDisabled( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties::getDisabled() const
{
    return m_Disabled;
}


void ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties::setDisabled(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Disabled = value;
    m_DisabledIsSet = true;
}
bool ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties::disabledIsSet() const
{
    return m_DisabledIsSet;
}

void ComAdobeGraniteAnalyzerScriptsCompileAllScriptsCompilerServletProperties::unsetDisabled()
{
    m_DisabledIsSet = false;
}

}
}
}
}

