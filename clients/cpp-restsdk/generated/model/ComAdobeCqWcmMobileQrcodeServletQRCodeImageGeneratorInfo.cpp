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



#include "ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo()
{
    m_Pid = utility::conversions::to_string_t("");
    m_PidIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
}

ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::~ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo()
{
}

void ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_PidIsSet)
    {
        val[utility::conversions::to_string_t("pid")] = ModelBase::toJson(m_Pid);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(m_Title);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_PropertiesIsSet)
    {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(m_Properties);
    }

    return val;
}

void ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("pid")))
    {
        setPid(ModelBase::stringFromJson(val[utility::conversions::to_string_t("pid")]));
    }
    if(val.has_field(utility::conversions::to_string_t("title")))
    {
        setTitle(ModelBase::stringFromJson(val[utility::conversions::to_string_t("title")]));
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        setDescription(ModelBase::stringFromJson(val[utility::conversions::to_string_t("description")]));
    }
    if(val.has_field(utility::conversions::to_string_t("properties")))
    {
        if(!val[utility::conversions::to_string_t("properties")].is_null())
        {
            std::shared_ptr<ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties> newItem(new ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties());
            newItem->fromJson(val[utility::conversions::to_string_t("properties")]);
            setProperties( newItem );
        }
    }
}

void ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_PidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pid"), m_Pid));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("title"), m_Title));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_PropertiesIsSet)
    {
        if (m_Properties.get())
        {
            m_Properties->toMultipart(multipart, utility::conversions::to_string_t("properties."));
        }
    }
}

void ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("pid")))
    {
        setPid(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("pid"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("title")))
    {
        setTitle(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("title"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("description"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("properties")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("properties")))
        {
            std::shared_ptr<ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties> newItem(new ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("properties."));
            setProperties( newItem );
        }
    }
}

utility::string_t ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::getPid() const
{
    return m_Pid;
}


void ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::setPid(utility::string_t value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::pidIsSet() const
{
    return m_PidIsSet;
}

void ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::unsetPid()
{
    m_PidIsSet = false;
}

utility::string_t ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::getTitle() const
{
    return m_Title;
}


void ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::setTitle(utility::string_t value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::titleIsSet() const
{
    return m_TitleIsSet;
}

void ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::unsetTitle()
{
    m_TitleIsSet = false;
}

utility::string_t ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::getDescription() const
{
    return m_Description;
}


void ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}

std::shared_ptr<ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties> ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::getProperties() const
{
    return m_Properties;
}


void ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::setProperties(std::shared_ptr<ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties> value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}

