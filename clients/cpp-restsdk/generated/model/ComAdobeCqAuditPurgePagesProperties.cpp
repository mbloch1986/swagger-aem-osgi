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



#include "ComAdobeCqAuditPurgePagesProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqAuditPurgePagesProperties::ComAdobeCqAuditPurgePagesProperties()
{
    m_Auditlog_rule_nameIsSet = false;
    m_Auditlog_rule_contentpathIsSet = false;
    m_Auditlog_rule_minimumageIsSet = false;
    m_Auditlog_rule_typesIsSet = false;
}

ComAdobeCqAuditPurgePagesProperties::~ComAdobeCqAuditPurgePagesProperties()
{
}

void ComAdobeCqAuditPurgePagesProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqAuditPurgePagesProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Auditlog_rule_nameIsSet)
    {
        val[utility::conversions::to_string_t("auditlog.rule.name")] = ModelBase::toJson(m_Auditlog_rule_name);
    }
    if(m_Auditlog_rule_contentpathIsSet)
    {
        val[utility::conversions::to_string_t("auditlog.rule.contentpath")] = ModelBase::toJson(m_Auditlog_rule_contentpath);
    }
    if(m_Auditlog_rule_minimumageIsSet)
    {
        val[utility::conversions::to_string_t("auditlog.rule.minimumage")] = ModelBase::toJson(m_Auditlog_rule_minimumage);
    }
    if(m_Auditlog_rule_typesIsSet)
    {
        val[utility::conversions::to_string_t("auditlog.rule.types")] = ModelBase::toJson(m_Auditlog_rule_types);
    }

    return val;
}

void ComAdobeCqAuditPurgePagesProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("auditlog.rule.name")))
    {
        if(!val[utility::conversions::to_string_t("auditlog.rule.name")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("auditlog.rule.name")]);
            setAuditlogRuleName( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auditlog.rule.contentpath")))
    {
        if(!val[utility::conversions::to_string_t("auditlog.rule.contentpath")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("auditlog.rule.contentpath")]);
            setAuditlogRuleContentpath( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auditlog.rule.minimumage")))
    {
        if(!val[utility::conversions::to_string_t("auditlog.rule.minimumage")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("auditlog.rule.minimumage")]);
            setAuditlogRuleMinimumage( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auditlog.rule.types")))
    {
        if(!val[utility::conversions::to_string_t("auditlog.rule.types")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("auditlog.rule.types")]);
            setAuditlogRuleTypes( newItem );
        }
    }
}

void ComAdobeCqAuditPurgePagesProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Auditlog_rule_nameIsSet)
    {
        if (m_Auditlog_rule_name.get())
        {
            m_Auditlog_rule_name->toMultipart(multipart, utility::conversions::to_string_t("auditlog.rule.name."));
        }
    }
    if(m_Auditlog_rule_contentpathIsSet)
    {
        if (m_Auditlog_rule_contentpath.get())
        {
            m_Auditlog_rule_contentpath->toMultipart(multipart, utility::conversions::to_string_t("auditlog.rule.contentpath."));
        }
    }
    if(m_Auditlog_rule_minimumageIsSet)
    {
        if (m_Auditlog_rule_minimumage.get())
        {
            m_Auditlog_rule_minimumage->toMultipart(multipart, utility::conversions::to_string_t("auditlog.rule.minimumage."));
        }
    }
    if(m_Auditlog_rule_typesIsSet)
    {
        if (m_Auditlog_rule_types.get())
        {
            m_Auditlog_rule_types->toMultipart(multipart, utility::conversions::to_string_t("auditlog.rule.types."));
        }
    }
}

void ComAdobeCqAuditPurgePagesProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("auditlog.rule.name")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auditlog.rule.name")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auditlog.rule.name."));
            setAuditlogRuleName( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auditlog.rule.contentpath")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auditlog.rule.contentpath")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auditlog.rule.contentpath."));
            setAuditlogRuleContentpath( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auditlog.rule.minimumage")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auditlog.rule.minimumage")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auditlog.rule.minimumage."));
            setAuditlogRuleMinimumage( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("auditlog.rule.types")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("auditlog.rule.types")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("auditlog.rule.types."));
            setAuditlogRuleTypes( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqAuditPurgePagesProperties::getAuditlogRuleName() const
{
    return m_Auditlog_rule_name;
}


void ComAdobeCqAuditPurgePagesProperties::setAuditlogRuleName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Auditlog_rule_name = value;
    m_Auditlog_rule_nameIsSet = true;
}
bool ComAdobeCqAuditPurgePagesProperties::auditlogRuleNameIsSet() const
{
    return m_Auditlog_rule_nameIsSet;
}

void ComAdobeCqAuditPurgePagesProperties::unsetAuditlog_rule_name()
{
    m_Auditlog_rule_nameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeCqAuditPurgePagesProperties::getAuditlogRuleContentpath() const
{
    return m_Auditlog_rule_contentpath;
}


void ComAdobeCqAuditPurgePagesProperties::setAuditlogRuleContentpath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Auditlog_rule_contentpath = value;
    m_Auditlog_rule_contentpathIsSet = true;
}
bool ComAdobeCqAuditPurgePagesProperties::auditlogRuleContentpathIsSet() const
{
    return m_Auditlog_rule_contentpathIsSet;
}

void ComAdobeCqAuditPurgePagesProperties::unsetAuditlog_rule_contentpath()
{
    m_Auditlog_rule_contentpathIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqAuditPurgePagesProperties::getAuditlogRuleMinimumage() const
{
    return m_Auditlog_rule_minimumage;
}


void ComAdobeCqAuditPurgePagesProperties::setAuditlogRuleMinimumage(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Auditlog_rule_minimumage = value;
    m_Auditlog_rule_minimumageIsSet = true;
}
bool ComAdobeCqAuditPurgePagesProperties::auditlogRuleMinimumageIsSet() const
{
    return m_Auditlog_rule_minimumageIsSet;
}

void ComAdobeCqAuditPurgePagesProperties::unsetAuditlog_rule_minimumage()
{
    m_Auditlog_rule_minimumageIsSet = false;
}

std::shared_ptr<ConfigNodePropertyDropDown> ComAdobeCqAuditPurgePagesProperties::getAuditlogRuleTypes() const
{
    return m_Auditlog_rule_types;
}


void ComAdobeCqAuditPurgePagesProperties::setAuditlogRuleTypes(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Auditlog_rule_types = value;
    m_Auditlog_rule_typesIsSet = true;
}
bool ComAdobeCqAuditPurgePagesProperties::auditlogRuleTypesIsSet() const
{
    return m_Auditlog_rule_typesIsSet;
}

void ComAdobeCqAuditPurgePagesProperties::unsetAuditlog_rule_types()
{
    m_Auditlog_rule_typesIsSet = false;
}

}
}
}
}

