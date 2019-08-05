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



#include "ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties()
{
    m_Notify_onupdateIsSet = false;
    m_Notify_oncompleteIsSet = false;
}

ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::~ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties()
{
}

void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Notify_onupdateIsSet)
    {
        val[utility::conversions::to_string_t("notify.onupdate")] = ModelBase::toJson(m_Notify_onupdate);
    }
    if(m_Notify_oncompleteIsSet)
    {
        val[utility::conversions::to_string_t("notify.oncomplete")] = ModelBase::toJson(m_Notify_oncomplete);
    }

    return val;
}

void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("notify.onupdate")))
    {
        if(!val[utility::conversions::to_string_t("notify.onupdate")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("notify.onupdate")]);
            setNotifyOnupdate( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notify.oncomplete")))
    {
        if(!val[utility::conversions::to_string_t("notify.oncomplete")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("notify.oncomplete")]);
            setNotifyOncomplete( newItem );
        }
    }
}

void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Notify_onupdateIsSet)
    {
        if (m_Notify_onupdate.get())
        {
            m_Notify_onupdate->toMultipart(multipart, utility::conversions::to_string_t("notify.onupdate."));
        }
    }
    if(m_Notify_oncompleteIsSet)
    {
        if (m_Notify_oncomplete.get())
        {
            m_Notify_oncomplete->toMultipart(multipart, utility::conversions::to_string_t("notify.oncomplete."));
        }
    }
}

void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("notify.onupdate")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("notify.onupdate")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("notify.onupdate."));
            setNotifyOnupdate( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("notify.oncomplete")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("notify.oncomplete")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("notify.oncomplete."));
            setNotifyOncomplete( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::getNotifyOnupdate() const
{
    return m_Notify_onupdate;
}


void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::setNotifyOnupdate(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Notify_onupdate = value;
    m_Notify_onupdateIsSet = true;
}
bool ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::notifyOnupdateIsSet() const
{
    return m_Notify_onupdateIsSet;
}

void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::unsetNotify_onupdate()
{
    m_Notify_onupdateIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::getNotifyOncomplete() const
{
    return m_Notify_oncomplete;
}


void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::setNotifyOncomplete(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Notify_oncomplete = value;
    m_Notify_oncompleteIsSet = true;
}
bool ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::notifyOncompleteIsSet() const
{
    return m_Notify_oncompleteIsSet;
}

void ComDayCqWorkflowImplEmailTaskEMailNotificationServiceProperties::unsetNotify_oncomplete()
{
    m_Notify_oncompleteIsSet = false;
}

}
}
}
}
