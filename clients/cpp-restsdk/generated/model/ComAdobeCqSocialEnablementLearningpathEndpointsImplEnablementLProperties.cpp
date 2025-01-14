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



#include "ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties::ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties()
{
    m_FieldWhitelistIsSet = false;
}

ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties::~ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties()
{
}

void ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_FieldWhitelistIsSet)
    {
        val[utility::conversions::to_string_t("fieldWhitelist")] = ModelBase::toJson(m_FieldWhitelist);
    }

    return val;
}

void ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("fieldWhitelist")))
    {
        if(!val[utility::conversions::to_string_t("fieldWhitelist")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("fieldWhitelist")]);
            setFieldWhitelist( newItem );
        }
    }
}

void ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_FieldWhitelistIsSet)
    {
        if (m_FieldWhitelist.get())
        {
            m_FieldWhitelist->toMultipart(multipart, utility::conversions::to_string_t("fieldWhitelist."));
        }
    }
}

void ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fieldWhitelist")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("fieldWhitelist")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("fieldWhitelist."));
            setFieldWhitelist( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties::getFieldWhitelist() const
{
    return m_FieldWhitelist;
}


void ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties::setFieldWhitelist(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_FieldWhitelist = value;
    m_FieldWhitelistIsSet = true;
}
bool ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties::fieldWhitelistIsSet() const
{
    return m_FieldWhitelistIsSet;
}

void ComAdobeCqSocialEnablementLearningpathEndpointsImplEnablementLProperties::unsetFieldWhitelist()
{
    m_FieldWhitelistIsSet = false;
}

}
}
}
}

