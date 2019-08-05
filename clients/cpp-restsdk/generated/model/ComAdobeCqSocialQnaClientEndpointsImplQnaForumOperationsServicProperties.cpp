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



#include "ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties()
{
    m_FieldWhitelistIsSet = false;
    m_AttachmentTypeBlacklistIsSet = false;
}

ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::~ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties()
{
}

void ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_FieldWhitelistIsSet)
    {
        val[utility::conversions::to_string_t("fieldWhitelist")] = ModelBase::toJson(m_FieldWhitelist);
    }
    if(m_AttachmentTypeBlacklistIsSet)
    {
        val[utility::conversions::to_string_t("attachmentTypeBlacklist")] = ModelBase::toJson(m_AttachmentTypeBlacklist);
    }

    return val;
}

void ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("fieldWhitelist")))
    {
        if(!val[utility::conversions::to_string_t("fieldWhitelist")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("fieldWhitelist")]);
            setFieldWhitelist( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachmentTypeBlacklist")))
    {
        if(!val[utility::conversions::to_string_t("attachmentTypeBlacklist")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("attachmentTypeBlacklist")]);
            setAttachmentTypeBlacklist( newItem );
        }
    }
}

void ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_FieldWhitelistIsSet)
    {
        if (m_FieldWhitelist.get())
        {
            m_FieldWhitelist->toMultipart(multipart, utility::conversions::to_string_t("fieldWhitelist."));
        }
    }
    if(m_AttachmentTypeBlacklistIsSet)
    {
        if (m_AttachmentTypeBlacklist.get())
        {
            m_AttachmentTypeBlacklist->toMultipart(multipart, utility::conversions::to_string_t("attachmentTypeBlacklist."));
        }
    }
}

void ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fieldWhitelist")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("fieldWhitelist")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("fieldWhitelist."));
            setFieldWhitelist( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("attachmentTypeBlacklist")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("attachmentTypeBlacklist")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("attachmentTypeBlacklist."));
            setAttachmentTypeBlacklist( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::getFieldWhitelist() const
{
    return m_FieldWhitelist;
}


void ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::setFieldWhitelist(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_FieldWhitelist = value;
    m_FieldWhitelistIsSet = true;
}
bool ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::fieldWhitelistIsSet() const
{
    return m_FieldWhitelistIsSet;
}

void ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::unsetFieldWhitelist()
{
    m_FieldWhitelistIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::getAttachmentTypeBlacklist() const
{
    return m_AttachmentTypeBlacklist;
}


void ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::setAttachmentTypeBlacklist(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_AttachmentTypeBlacklist = value;
    m_AttachmentTypeBlacklistIsSet = true;
}
bool ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::attachmentTypeBlacklistIsSet() const
{
    return m_AttachmentTypeBlacklistIsSet;
}

void ComAdobeCqSocialQnaClientEndpointsImplQnaForumOperationsServicProperties::unsetAttachmentTypeBlacklist()
{
    m_AttachmentTypeBlacklistIsSet = false;
}

}
}
}
}
