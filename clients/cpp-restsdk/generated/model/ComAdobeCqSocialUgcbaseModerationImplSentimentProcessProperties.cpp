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



#include "ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties()
{
    m_Watchwords_positiveIsSet = false;
    m_Watchwords_negativeIsSet = false;
    m_Watchwords_pathIsSet = false;
    m_Sentiment_pathIsSet = false;
}

ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::~ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties()
{
}

void ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Watchwords_positiveIsSet)
    {
        val[utility::conversions::to_string_t("watchwords.positive")] = ModelBase::toJson(m_Watchwords_positive);
    }
    if(m_Watchwords_negativeIsSet)
    {
        val[utility::conversions::to_string_t("watchwords.negative")] = ModelBase::toJson(m_Watchwords_negative);
    }
    if(m_Watchwords_pathIsSet)
    {
        val[utility::conversions::to_string_t("watchwords.path")] = ModelBase::toJson(m_Watchwords_path);
    }
    if(m_Sentiment_pathIsSet)
    {
        val[utility::conversions::to_string_t("sentiment.path")] = ModelBase::toJson(m_Sentiment_path);
    }

    return val;
}

void ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("watchwords.positive")))
    {
        if(!val[utility::conversions::to_string_t("watchwords.positive")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("watchwords.positive")]);
            setWatchwordsPositive( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("watchwords.negative")))
    {
        if(!val[utility::conversions::to_string_t("watchwords.negative")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("watchwords.negative")]);
            setWatchwordsNegative( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("watchwords.path")))
    {
        if(!val[utility::conversions::to_string_t("watchwords.path")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("watchwords.path")]);
            setWatchwordsPath( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sentiment.path")))
    {
        if(!val[utility::conversions::to_string_t("sentiment.path")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("sentiment.path")]);
            setSentimentPath( newItem );
        }
    }
}

void ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Watchwords_positiveIsSet)
    {
        if (m_Watchwords_positive.get())
        {
            m_Watchwords_positive->toMultipart(multipart, utility::conversions::to_string_t("watchwords.positive."));
        }
    }
    if(m_Watchwords_negativeIsSet)
    {
        if (m_Watchwords_negative.get())
        {
            m_Watchwords_negative->toMultipart(multipart, utility::conversions::to_string_t("watchwords.negative."));
        }
    }
    if(m_Watchwords_pathIsSet)
    {
        if (m_Watchwords_path.get())
        {
            m_Watchwords_path->toMultipart(multipart, utility::conversions::to_string_t("watchwords.path."));
        }
    }
    if(m_Sentiment_pathIsSet)
    {
        if (m_Sentiment_path.get())
        {
            m_Sentiment_path->toMultipart(multipart, utility::conversions::to_string_t("sentiment.path."));
        }
    }
}

void ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("watchwords.positive")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("watchwords.positive")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("watchwords.positive."));
            setWatchwordsPositive( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("watchwords.negative")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("watchwords.negative")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("watchwords.negative."));
            setWatchwordsNegative( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("watchwords.path")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("watchwords.path")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("watchwords.path."));
            setWatchwordsPath( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sentiment.path")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("sentiment.path")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("sentiment.path."));
            setSentimentPath( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::getWatchwordsPositive() const
{
    return m_Watchwords_positive;
}


void ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::setWatchwordsPositive(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Watchwords_positive = value;
    m_Watchwords_positiveIsSet = true;
}
bool ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::watchwordsPositiveIsSet() const
{
    return m_Watchwords_positiveIsSet;
}

void ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::unsetWatchwords_positive()
{
    m_Watchwords_positiveIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::getWatchwordsNegative() const
{
    return m_Watchwords_negative;
}


void ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::setWatchwordsNegative(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Watchwords_negative = value;
    m_Watchwords_negativeIsSet = true;
}
bool ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::watchwordsNegativeIsSet() const
{
    return m_Watchwords_negativeIsSet;
}

void ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::unsetWatchwords_negative()
{
    m_Watchwords_negativeIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::getWatchwordsPath() const
{
    return m_Watchwords_path;
}


void ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::setWatchwordsPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Watchwords_path = value;
    m_Watchwords_pathIsSet = true;
}
bool ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::watchwordsPathIsSet() const
{
    return m_Watchwords_pathIsSet;
}

void ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::unsetWatchwords_path()
{
    m_Watchwords_pathIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::getSentimentPath() const
{
    return m_Sentiment_path;
}


void ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::setSentimentPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Sentiment_path = value;
    m_Sentiment_pathIsSet = true;
}
bool ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::sentimentPathIsSet() const
{
    return m_Sentiment_pathIsSet;
}

void ComAdobeCqSocialUgcbaseModerationImplSentimentProcessProperties::unsetSentiment_path()
{
    m_Sentiment_pathIsSet = false;
}

}
}
}
}

