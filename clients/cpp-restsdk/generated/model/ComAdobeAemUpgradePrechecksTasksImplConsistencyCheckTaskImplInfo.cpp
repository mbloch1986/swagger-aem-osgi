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



#include "ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo()
{
    m_Pid = utility::conversions::to_string_t("");
    m_PidIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
}

ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::~ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo()
{
}

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::toJson() const
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

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::fromJson(web::json::value& val)
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
            std::shared_ptr<ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties> newItem(new ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties());
            newItem->fromJson(val[utility::conversions::to_string_t("properties")]);
            setProperties( newItem );
        }
    }
}

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
            std::shared_ptr<ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties> newItem(new ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("properties."));
            setProperties( newItem );
        }
    }
}

utility::string_t ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::getPid() const
{
    return m_Pid;
}


void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::setPid(utility::string_t value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::pidIsSet() const
{
    return m_PidIsSet;
}

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::unsetPid()
{
    m_PidIsSet = false;
}

utility::string_t ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::getTitle() const
{
    return m_Title;
}


void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::setTitle(utility::string_t value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::titleIsSet() const
{
    return m_TitleIsSet;
}

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::unsetTitle()
{
    m_TitleIsSet = false;
}

utility::string_t ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::getDescription() const
{
    return m_Description;
}


void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}

std::shared_ptr<ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties> ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::getProperties() const
{
    return m_Properties;
}


void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::setProperties(std::shared_ptr<ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties> value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}

