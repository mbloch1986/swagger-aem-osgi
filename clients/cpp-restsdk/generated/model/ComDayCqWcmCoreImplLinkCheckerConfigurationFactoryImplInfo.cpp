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



#include "ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo()
{
    m_Pid = utility::conversions::to_string_t("");
    m_PidIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_PropertiesIsSet = false;
}

ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::~ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo()
{
}

void ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::toJson() const
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

void ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::fromJson(web::json::value& val)
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
            std::shared_ptr<ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties> newItem(new ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties());
            newItem->fromJson(val[utility::conversions::to_string_t("properties")]);
            setProperties( newItem );
        }
    }
}

void ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

void ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
            std::shared_ptr<ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties> newItem(new ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("properties."));
            setProperties( newItem );
        }
    }
}

utility::string_t ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::getPid() const
{
    return m_Pid;
}


void ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::setPid(utility::string_t value)
{
    m_Pid = value;
    m_PidIsSet = true;
}
bool ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::pidIsSet() const
{
    return m_PidIsSet;
}

void ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::unsetPid()
{
    m_PidIsSet = false;
}

utility::string_t ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::getTitle() const
{
    return m_Title;
}


void ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::setTitle(utility::string_t value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::titleIsSet() const
{
    return m_TitleIsSet;
}

void ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::unsetTitle()
{
    m_TitleIsSet = false;
}

utility::string_t ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::getDescription() const
{
    return m_Description;
}


void ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::unsetDescription()
{
    m_DescriptionIsSet = false;
}

std::shared_ptr<ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties> ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::getProperties() const
{
    return m_Properties;
}


void ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::setProperties(std::shared_ptr<ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties> value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}
bool ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplInfo::unsetProperties()
{
    m_PropertiesIsSet = false;
}

}
}
}
}

