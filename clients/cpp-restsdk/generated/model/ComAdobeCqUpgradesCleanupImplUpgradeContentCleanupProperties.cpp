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



#include "ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties()
{
    m_Delete_path_regexpsIsSet = false;
    m_Delete_sql2_queryIsSet = false;
}

ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::~ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties()
{
}

void ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Delete_path_regexpsIsSet)
    {
        val[utility::conversions::to_string_t("delete.path.regexps")] = ModelBase::toJson(m_Delete_path_regexps);
    }
    if(m_Delete_sql2_queryIsSet)
    {
        val[utility::conversions::to_string_t("delete.sql2.query")] = ModelBase::toJson(m_Delete_sql2_query);
    }

    return val;
}

void ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("delete.path.regexps")))
    {
        if(!val[utility::conversions::to_string_t("delete.path.regexps")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("delete.path.regexps")]);
            setDeletePathRegexps( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete.sql2.query")))
    {
        if(!val[utility::conversions::to_string_t("delete.sql2.query")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("delete.sql2.query")]);
            setDeleteSql2Query( newItem );
        }
    }
}

void ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Delete_path_regexpsIsSet)
    {
        if (m_Delete_path_regexps.get())
        {
            m_Delete_path_regexps->toMultipart(multipart, utility::conversions::to_string_t("delete.path.regexps."));
        }
    }
    if(m_Delete_sql2_queryIsSet)
    {
        if (m_Delete_sql2_query.get())
        {
            m_Delete_sql2_query->toMultipart(multipart, utility::conversions::to_string_t("delete.sql2.query."));
        }
    }
}

void ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("delete.path.regexps")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("delete.path.regexps")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("delete.path.regexps."));
            setDeletePathRegexps( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("delete.sql2.query")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("delete.sql2.query")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("delete.sql2.query."));
            setDeleteSql2Query( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::getDeletePathRegexps() const
{
    return m_Delete_path_regexps;
}


void ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::setDeletePathRegexps(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Delete_path_regexps = value;
    m_Delete_path_regexpsIsSet = true;
}
bool ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::deletePathRegexpsIsSet() const
{
    return m_Delete_path_regexpsIsSet;
}

void ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::unsetDelete_path_regexps()
{
    m_Delete_path_regexpsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::getDeleteSql2Query() const
{
    return m_Delete_sql2_query;
}


void ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::setDeleteSql2Query(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Delete_sql2_query = value;
    m_Delete_sql2_queryIsSet = true;
}
bool ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::deleteSql2QueryIsSet() const
{
    return m_Delete_sql2_queryIsSet;
}

void ComAdobeCqUpgradesCleanupImplUpgradeContentCleanupProperties::unsetDelete_sql2_query()
{
    m_Delete_sql2_queryIsSet = false;
}

}
}
}
}
