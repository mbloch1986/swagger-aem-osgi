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



#include "ComDayCqContentsyncImplContentSyncManagerImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqContentsyncImplContentSyncManagerImplProperties::ComDayCqContentsyncImplContentSyncManagerImplProperties()
{
    m_Contentsync_fallback_authorizableIsSet = false;
    m_Contentsync_fallback_updateuserIsSet = false;
}

ComDayCqContentsyncImplContentSyncManagerImplProperties::~ComDayCqContentsyncImplContentSyncManagerImplProperties()
{
}

void ComDayCqContentsyncImplContentSyncManagerImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqContentsyncImplContentSyncManagerImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Contentsync_fallback_authorizableIsSet)
    {
        val[utility::conversions::to_string_t("contentsync.fallback.authorizable")] = ModelBase::toJson(m_Contentsync_fallback_authorizable);
    }
    if(m_Contentsync_fallback_updateuserIsSet)
    {
        val[utility::conversions::to_string_t("contentsync.fallback.updateuser")] = ModelBase::toJson(m_Contentsync_fallback_updateuser);
    }

    return val;
}

void ComDayCqContentsyncImplContentSyncManagerImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("contentsync.fallback.authorizable")))
    {
        if(!val[utility::conversions::to_string_t("contentsync.fallback.authorizable")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("contentsync.fallback.authorizable")]);
            setContentsyncFallbackAuthorizable( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contentsync.fallback.updateuser")))
    {
        if(!val[utility::conversions::to_string_t("contentsync.fallback.updateuser")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("contentsync.fallback.updateuser")]);
            setContentsyncFallbackUpdateuser( newItem );
        }
    }
}

void ComDayCqContentsyncImplContentSyncManagerImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Contentsync_fallback_authorizableIsSet)
    {
        if (m_Contentsync_fallback_authorizable.get())
        {
            m_Contentsync_fallback_authorizable->toMultipart(multipart, utility::conversions::to_string_t("contentsync.fallback.authorizable."));
        }
    }
    if(m_Contentsync_fallback_updateuserIsSet)
    {
        if (m_Contentsync_fallback_updateuser.get())
        {
            m_Contentsync_fallback_updateuser->toMultipart(multipart, utility::conversions::to_string_t("contentsync.fallback.updateuser."));
        }
    }
}

void ComDayCqContentsyncImplContentSyncManagerImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("contentsync.fallback.authorizable")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("contentsync.fallback.authorizable")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("contentsync.fallback.authorizable."));
            setContentsyncFallbackAuthorizable( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("contentsync.fallback.updateuser")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("contentsync.fallback.updateuser")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("contentsync.fallback.updateuser."));
            setContentsyncFallbackUpdateuser( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqContentsyncImplContentSyncManagerImplProperties::getContentsyncFallbackAuthorizable() const
{
    return m_Contentsync_fallback_authorizable;
}


void ComDayCqContentsyncImplContentSyncManagerImplProperties::setContentsyncFallbackAuthorizable(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Contentsync_fallback_authorizable = value;
    m_Contentsync_fallback_authorizableIsSet = true;
}
bool ComDayCqContentsyncImplContentSyncManagerImplProperties::contentsyncFallbackAuthorizableIsSet() const
{
    return m_Contentsync_fallback_authorizableIsSet;
}

void ComDayCqContentsyncImplContentSyncManagerImplProperties::unsetContentsync_fallback_authorizable()
{
    m_Contentsync_fallback_authorizableIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqContentsyncImplContentSyncManagerImplProperties::getContentsyncFallbackUpdateuser() const
{
    return m_Contentsync_fallback_updateuser;
}


void ComDayCqContentsyncImplContentSyncManagerImplProperties::setContentsyncFallbackUpdateuser(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Contentsync_fallback_updateuser = value;
    m_Contentsync_fallback_updateuserIsSet = true;
}
bool ComDayCqContentsyncImplContentSyncManagerImplProperties::contentsyncFallbackUpdateuserIsSet() const
{
    return m_Contentsync_fallback_updateuserIsSet;
}

void ComDayCqContentsyncImplContentSyncManagerImplProperties::unsetContentsync_fallback_updateuser()
{
    m_Contentsync_fallback_updateuserIsSet = false;
}

}
}
}
}

