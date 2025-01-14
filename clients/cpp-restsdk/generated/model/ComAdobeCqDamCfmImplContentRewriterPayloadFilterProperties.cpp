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



#include "ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties::ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties()
{
    m_Pipeline_typeIsSet = false;
}

ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties::~ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties()
{
}

void ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Pipeline_typeIsSet)
    {
        val[utility::conversions::to_string_t("pipeline.type")] = ModelBase::toJson(m_Pipeline_type);
    }

    return val;
}

void ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("pipeline.type")))
    {
        if(!val[utility::conversions::to_string_t("pipeline.type")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("pipeline.type")]);
            setPipelineType( newItem );
        }
    }
}

void ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Pipeline_typeIsSet)
    {
        if (m_Pipeline_type.get())
        {
            m_Pipeline_type->toMultipart(multipart, utility::conversions::to_string_t("pipeline.type."));
        }
    }
}

void ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("pipeline.type")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("pipeline.type")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("pipeline.type."));
            setPipelineType( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties::getPipelineType() const
{
    return m_Pipeline_type;
}


void ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties::setPipelineType(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Pipeline_type = value;
    m_Pipeline_typeIsSet = true;
}
bool ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties::pipelineTypeIsSet() const
{
    return m_Pipeline_typeIsSet;
}

void ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties::unsetPipeline_type()
{
    m_Pipeline_typeIsSet = false;
}

}
}
}
}

