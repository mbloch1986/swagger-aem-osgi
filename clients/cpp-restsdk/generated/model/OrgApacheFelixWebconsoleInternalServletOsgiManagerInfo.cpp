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



#include "OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo()
{
    m_Pid = utility::conversions::to_string_t("");
    m_PidIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
}

OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::~OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo()
{
}

void OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::toJson() const
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

void OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::fromJson(web::json::value& val)
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
            std::shared_ptr<OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties> newItem(new OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties());
            newItem->fromJson(val[utility::conversions::to_string_t("properties")]);
            setProperties( newItem );
        }
    }
}

void OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

void OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
            std::shared_ptr<OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties> newItem(new OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("properties."));
            setProperties( newItem );
        }
    }
}

utility::string_t OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::getPid() const
{
    return m_Pid;
}


void OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::setPid(utility::string_t value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::pidIsSet() const
{
    return m_PidIsSet;
}

void OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::unsetPid()
{
    m_PidIsSet = false;
}

utility::string_t OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::getTitle() const
{
    return m_Title;
}


void OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::setTitle(utility::string_t value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::titleIsSet() const
{
    return m_TitleIsSet;
}

void OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::unsetTitle()
{
    m_TitleIsSet = false;
}

utility::string_t OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::getDescription() const
{
    return m_Description;
}


void OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}

std::shared_ptr<OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties> OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::getProperties() const
{
    return m_Properties;
}


void OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::setProperties(std::shared_ptr<OrgApacheFelixWebconsoleInternalServletOsgiManagerProperties> value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void OrgApacheFelixWebconsoleInternalServletOsgiManagerInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}

