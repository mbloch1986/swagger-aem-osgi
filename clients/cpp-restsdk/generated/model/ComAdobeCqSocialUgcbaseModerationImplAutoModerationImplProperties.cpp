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



#include "ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties()
{
    m_Automoderation_sequenceIsSet = false;
    m_Automoderation_onfailurestopIsSet = false;
}

ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::~ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties()
{
}

void ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Automoderation_sequenceIsSet)
    {
        val[utility::conversions::to_string_t("automoderation.sequence")] = ModelBase::toJson(m_Automoderation_sequence);
    }
    if(m_Automoderation_onfailurestopIsSet)
    {
        val[utility::conversions::to_string_t("automoderation.onfailurestop")] = ModelBase::toJson(m_Automoderation_onfailurestop);
    }

    return val;
}

void ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("automoderation.sequence")))
    {
        if(!val[utility::conversions::to_string_t("automoderation.sequence")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("automoderation.sequence")]);
            setAutomoderationSequence( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("automoderation.onfailurestop")))
    {
        if(!val[utility::conversions::to_string_t("automoderation.onfailurestop")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("automoderation.onfailurestop")]);
            setAutomoderationOnfailurestop( newItem );
        }
    }
}

void ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Automoderation_sequenceIsSet)
    {
        if (m_Automoderation_sequence.get())
        {
            m_Automoderation_sequence->toMultipart(multipart, utility::conversions::to_string_t("automoderation.sequence."));
        }
    }
    if(m_Automoderation_onfailurestopIsSet)
    {
        if (m_Automoderation_onfailurestop.get())
        {
            m_Automoderation_onfailurestop->toMultipart(multipart, utility::conversions::to_string_t("automoderation.onfailurestop."));
        }
    }
}

void ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("automoderation.sequence")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("automoderation.sequence")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("automoderation.sequence."));
            setAutomoderationSequence( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("automoderation.onfailurestop")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("automoderation.onfailurestop")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("automoderation.onfailurestop."));
            setAutomoderationOnfailurestop( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::getAutomoderationSequence() const
{
    return m_Automoderation_sequence;
}


void ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::setAutomoderationSequence(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Automoderation_sequence = value;
    m_Automoderation_sequenceIsSet = true;
}
bool ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::automoderationSequenceIsSet() const
{
    return m_Automoderation_sequenceIsSet;
}

void ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::unsetAutomoderation_sequence()
{
    m_Automoderation_sequenceIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::getAutomoderationOnfailurestop() const
{
    return m_Automoderation_onfailurestop;
}


void ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::setAutomoderationOnfailurestop(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Automoderation_onfailurestop = value;
    m_Automoderation_onfailurestopIsSet = true;
}
bool ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::automoderationOnfailurestopIsSet() const
{
    return m_Automoderation_onfailurestopIsSet;
}

void ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties::unsetAutomoderation_onfailurestop()
{
    m_Automoderation_onfailurestopIsSet = false;
}

}
}
}
}

