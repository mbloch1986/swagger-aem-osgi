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



#include "ComAdobeCqScheduledExporterImplScheduledExporterImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::ComAdobeCqScheduledExporterImplScheduledExporterImplProperties()
{
    m_Include_pathsIsSet = false;
    m_Exporter_userIsSet = false;
}

ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::~ComAdobeCqScheduledExporterImplScheduledExporterImplProperties()
{
}

void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Include_pathsIsSet)
    {
        val[utility::conversions::to_string_t("include.paths")] = ModelBase::toJson(m_Include_paths);
    }
    if(m_Exporter_userIsSet)
    {
        val[utility::conversions::to_string_t("exporter.user")] = ModelBase::toJson(m_Exporter_user);
    }

    return val;
}

void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("include.paths")))
    {
        if(!val[utility::conversions::to_string_t("include.paths")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("include.paths")]);
            setIncludePaths( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exporter.user")))
    {
        if(!val[utility::conversions::to_string_t("exporter.user")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("exporter.user")]);
            setExporterUser( newItem );
        }
    }
}

void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Include_pathsIsSet)
    {
        if (m_Include_paths.get())
        {
            m_Include_paths->toMultipart(multipart, utility::conversions::to_string_t("include.paths."));
        }
    }
    if(m_Exporter_userIsSet)
    {
        if (m_Exporter_user.get())
        {
            m_Exporter_user->toMultipart(multipart, utility::conversions::to_string_t("exporter.user."));
        }
    }
}

void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("include.paths")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("include.paths")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("include.paths."));
            setIncludePaths( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("exporter.user")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("exporter.user")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("exporter.user."));
            setExporterUser( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::getIncludePaths() const
{
    return m_Include_paths;
}


void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::setIncludePaths(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Include_paths = value;
    m_Include_pathsIsSet = true;
}
bool ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::includePathsIsSet() const
{
    return m_Include_pathsIsSet;
}

void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::unsetInclude_paths()
{
    m_Include_pathsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::getExporterUser() const
{
    return m_Exporter_user;
}


void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::setExporterUser(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Exporter_user = value;
    m_Exporter_userIsSet = true;
}
bool ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::exporterUserIsSet() const
{
    return m_Exporter_userIsSet;
}

void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::unsetExporter_user()
{
    m_Exporter_userIsSet = false;
}

}
}
}
}

