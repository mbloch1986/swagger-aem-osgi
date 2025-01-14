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



#include "ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties()
{
    m_Default_attachment_type_blacklistIsSet = false;
    m_Baseline_attachment_type_blacklistIsSet = false;
}

ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::~ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties()
{
}

void ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Default_attachment_type_blacklistIsSet)
    {
        val[utility::conversions::to_string_t("default.attachment.type.blacklist")] = ModelBase::toJson(m_Default_attachment_type_blacklist);
    }
    if(m_Baseline_attachment_type_blacklistIsSet)
    {
        val[utility::conversions::to_string_t("baseline.attachment.type.blacklist")] = ModelBase::toJson(m_Baseline_attachment_type_blacklist);
    }

    return val;
}

void ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("default.attachment.type.blacklist")))
    {
        if(!val[utility::conversions::to_string_t("default.attachment.type.blacklist")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("default.attachment.type.blacklist")]);
            setDefaultAttachmentTypeBlacklist( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("baseline.attachment.type.blacklist")))
    {
        if(!val[utility::conversions::to_string_t("baseline.attachment.type.blacklist")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("baseline.attachment.type.blacklist")]);
            setBaselineAttachmentTypeBlacklist( newItem );
        }
    }
}

void ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Default_attachment_type_blacklistIsSet)
    {
        if (m_Default_attachment_type_blacklist.get())
        {
            m_Default_attachment_type_blacklist->toMultipart(multipart, utility::conversions::to_string_t("default.attachment.type.blacklist."));
        }
    }
    if(m_Baseline_attachment_type_blacklistIsSet)
    {
        if (m_Baseline_attachment_type_blacklist.get())
        {
            m_Baseline_attachment_type_blacklist->toMultipart(multipart, utility::conversions::to_string_t("baseline.attachment.type.blacklist."));
        }
    }
}

void ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("default.attachment.type.blacklist")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("default.attachment.type.blacklist")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("default.attachment.type.blacklist."));
            setDefaultAttachmentTypeBlacklist( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("baseline.attachment.type.blacklist")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("baseline.attachment.type.blacklist")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("baseline.attachment.type.blacklist."));
            setBaselineAttachmentTypeBlacklist( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::getDefaultAttachmentTypeBlacklist() const
{
    return m_Default_attachment_type_blacklist;
}


void ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::setDefaultAttachmentTypeBlacklist(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Default_attachment_type_blacklist = value;
    m_Default_attachment_type_blacklistIsSet = true;
}
bool ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::defaultAttachmentTypeBlacklistIsSet() const
{
    return m_Default_attachment_type_blacklistIsSet;
}

void ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::unsetDefault_attachment_type_blacklist()
{
    m_Default_attachment_type_blacklistIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::getBaselineAttachmentTypeBlacklist() const
{
    return m_Baseline_attachment_type_blacklist;
}


void ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::setBaselineAttachmentTypeBlacklist(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Baseline_attachment_type_blacklist = value;
    m_Baseline_attachment_type_blacklistIsSet = true;
}
bool ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::baselineAttachmentTypeBlacklistIsSet() const
{
    return m_Baseline_attachment_type_blacklistIsSet;
}

void ComAdobeCqSocialUgcbaseSecurityImplDefaultAttachmentTypeBlackliProperties::unsetBaseline_attachment_type_blacklist()
{
    m_Baseline_attachment_type_blacklistIsSet = false;
}

}
}
}
}

