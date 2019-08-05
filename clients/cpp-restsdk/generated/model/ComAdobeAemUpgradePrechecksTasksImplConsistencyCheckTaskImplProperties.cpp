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



#include "ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties()
{
    m_Root_pathIsSet = false;
    m_Fix_inconsistenciesIsSet = false;
}

ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::~ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties()
{
}

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Root_pathIsSet)
    {
        val[utility::conversions::to_string_t("root.path")] = ModelBase::toJson(m_Root_path);
    }
    if(m_Fix_inconsistenciesIsSet)
    {
        val[utility::conversions::to_string_t("fix.inconsistencies")] = ModelBase::toJson(m_Fix_inconsistencies);
    }

    return val;
}

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("root.path")))
    {
        if(!val[utility::conversions::to_string_t("root.path")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("root.path")]);
            setRootPath( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fix.inconsistencies")))
    {
        if(!val[utility::conversions::to_string_t("fix.inconsistencies")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("fix.inconsistencies")]);
            setFixInconsistencies( newItem );
        }
    }
}

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Root_pathIsSet)
    {
        if (m_Root_path.get())
        {
            m_Root_path->toMultipart(multipart, utility::conversions::to_string_t("root.path."));
        }
    }
    if(m_Fix_inconsistenciesIsSet)
    {
        if (m_Fix_inconsistencies.get())
        {
            m_Fix_inconsistencies->toMultipart(multipart, utility::conversions::to_string_t("fix.inconsistencies."));
        }
    }
}

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("root.path")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("root.path")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("root.path."));
            setRootPath( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fix.inconsistencies")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("fix.inconsistencies")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("fix.inconsistencies."));
            setFixInconsistencies( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::getRootPath() const
{
    return m_Root_path;
}


void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::setRootPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Root_path = value;
    m_Root_pathIsSet = true;
}
bool ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::rootPathIsSet() const
{
    return m_Root_pathIsSet;
}

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::unsetRoot_path()
{
    m_Root_pathIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::getFixInconsistencies() const
{
    return m_Fix_inconsistencies;
}


void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::setFixInconsistencies(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Fix_inconsistencies = value;
    m_Fix_inconsistenciesIsSet = true;
}
bool ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::fixInconsistenciesIsSet() const
{
    return m_Fix_inconsistenciesIsSet;
}

void ComAdobeAemUpgradePrechecksTasksImplConsistencyCheckTaskImplProperties::unsetFix_inconsistencies()
{
    m_Fix_inconsistenciesIsSet = false;
}

}
}
}
}
