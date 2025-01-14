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



#include "ComAdobeGraniteLoggingImplLogAnalyserImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteLoggingImplLogAnalyserImplProperties::ComAdobeGraniteLoggingImplLogAnalyserImplProperties()
{
    m_Messages_queue_sizeIsSet = false;
    m_Logger_configIsSet = false;
    m_Messages_sizeIsSet = false;
}

ComAdobeGraniteLoggingImplLogAnalyserImplProperties::~ComAdobeGraniteLoggingImplLogAnalyserImplProperties()
{
}

void ComAdobeGraniteLoggingImplLogAnalyserImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteLoggingImplLogAnalyserImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Messages_queue_sizeIsSet)
    {
        val[utility::conversions::to_string_t("messages.queue.size")] = ModelBase::toJson(m_Messages_queue_size);
    }
    if(m_Logger_configIsSet)
    {
        val[utility::conversions::to_string_t("logger.config")] = ModelBase::toJson(m_Logger_config);
    }
    if(m_Messages_sizeIsSet)
    {
        val[utility::conversions::to_string_t("messages.size")] = ModelBase::toJson(m_Messages_size);
    }

    return val;
}

void ComAdobeGraniteLoggingImplLogAnalyserImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("messages.queue.size")))
    {
        if(!val[utility::conversions::to_string_t("messages.queue.size")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("messages.queue.size")]);
            setMessagesQueueSize( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logger.config")))
    {
        if(!val[utility::conversions::to_string_t("logger.config")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("logger.config")]);
            setLoggerConfig( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("messages.size")))
    {
        if(!val[utility::conversions::to_string_t("messages.size")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("messages.size")]);
            setMessagesSize( newItem );
        }
    }
}

void ComAdobeGraniteLoggingImplLogAnalyserImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Messages_queue_sizeIsSet)
    {
        if (m_Messages_queue_size.get())
        {
            m_Messages_queue_size->toMultipart(multipart, utility::conversions::to_string_t("messages.queue.size."));
        }
    }
    if(m_Logger_configIsSet)
    {
        if (m_Logger_config.get())
        {
            m_Logger_config->toMultipart(multipart, utility::conversions::to_string_t("logger.config."));
        }
    }
    if(m_Messages_sizeIsSet)
    {
        if (m_Messages_size.get())
        {
            m_Messages_size->toMultipart(multipart, utility::conversions::to_string_t("messages.size."));
        }
    }
}

void ComAdobeGraniteLoggingImplLogAnalyserImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("messages.queue.size")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("messages.queue.size")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("messages.queue.size."));
            setMessagesQueueSize( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("logger.config")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("logger.config")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("logger.config."));
            setLoggerConfig( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("messages.size")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("messages.size")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("messages.size."));
            setMessagesSize( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteLoggingImplLogAnalyserImplProperties::getMessagesQueueSize() const
{
    return m_Messages_queue_size;
}


void ComAdobeGraniteLoggingImplLogAnalyserImplProperties::setMessagesQueueSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Messages_queue_size = value;
    m_Messages_queue_sizeIsSet = true;
}
bool ComAdobeGraniteLoggingImplLogAnalyserImplProperties::messagesQueueSizeIsSet() const
{
    return m_Messages_queue_sizeIsSet;
}

void ComAdobeGraniteLoggingImplLogAnalyserImplProperties::unsetMessages_queue_size()
{
    m_Messages_queue_sizeIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteLoggingImplLogAnalyserImplProperties::getLoggerConfig() const
{
    return m_Logger_config;
}


void ComAdobeGraniteLoggingImplLogAnalyserImplProperties::setLoggerConfig(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Logger_config = value;
    m_Logger_configIsSet = true;
}
bool ComAdobeGraniteLoggingImplLogAnalyserImplProperties::loggerConfigIsSet() const
{
    return m_Logger_configIsSet;
}

void ComAdobeGraniteLoggingImplLogAnalyserImplProperties::unsetLogger_config()
{
    m_Logger_configIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeGraniteLoggingImplLogAnalyserImplProperties::getMessagesSize() const
{
    return m_Messages_size;
}


void ComAdobeGraniteLoggingImplLogAnalyserImplProperties::setMessagesSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Messages_size = value;
    m_Messages_sizeIsSet = true;
}
bool ComAdobeGraniteLoggingImplLogAnalyserImplProperties::messagesSizeIsSet() const
{
    return m_Messages_sizeIsSet;
}

void ComAdobeGraniteLoggingImplLogAnalyserImplProperties::unsetMessages_size()
{
    m_Messages_sizeIsSet = false;
}

}
}
}
}

