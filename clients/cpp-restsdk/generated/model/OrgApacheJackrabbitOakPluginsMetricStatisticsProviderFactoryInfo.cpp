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



#include "OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo()
{
    m_Pid = utility::conversions::to_string_t("");
    m_PidIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
}

OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::~OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo()
{
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::toJson() const
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

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::fromJson(web::json::value& val)
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
            std::shared_ptr<OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties> newItem(new OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties());
            newItem->fromJson(val[utility::conversions::to_string_t("properties")]);
            setProperties( newItem );
        }
    }
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
            std::shared_ptr<OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties> newItem(new OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("properties."));
            setProperties( newItem );
        }
    }
}

utility::string_t OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::getPid() const
{
    return m_Pid;
}


void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::setPid(utility::string_t value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::pidIsSet() const
{
    return m_PidIsSet;
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::unsetPid()
{
    m_PidIsSet = false;
}

utility::string_t OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::getTitle() const
{
    return m_Title;
}


void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::setTitle(utility::string_t value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::titleIsSet() const
{
    return m_TitleIsSet;
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::unsetTitle()
{
    m_TitleIsSet = false;
}

utility::string_t OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::getDescription() const
{
    return m_Description;
}


void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}

std::shared_ptr<OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties> OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::getProperties() const
{
    return m_Properties;
}


void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::setProperties(std::shared_ptr<OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryProperties> value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void OrgApacheJackrabbitOakPluginsMetricStatisticsProviderFactoryInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}
