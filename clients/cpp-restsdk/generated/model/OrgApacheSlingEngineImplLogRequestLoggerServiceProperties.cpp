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



#include "OrgApacheSlingEngineImplLogRequestLoggerServiceProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::OrgApacheSlingEngineImplLogRequestLoggerServiceProperties()
{
    m_Request_log_service_formatIsSet = false;
    m_Request_log_service_outputIsSet = false;
    m_Request_log_service_outputtypeIsSet = false;
    m_Request_log_service_onentryIsSet = false;
}

OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::~OrgApacheSlingEngineImplLogRequestLoggerServiceProperties()
{
}

void OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Request_log_service_formatIsSet)
    {
        val[utility::conversions::to_string_t("request.log.service.format")] = ModelBase::toJson(m_Request_log_service_format);
    }
    if(m_Request_log_service_outputIsSet)
    {
        val[utility::conversions::to_string_t("request.log.service.output")] = ModelBase::toJson(m_Request_log_service_output);
    }
    if(m_Request_log_service_outputtypeIsSet)
    {
        val[utility::conversions::to_string_t("request.log.service.outputtype")] = ModelBase::toJson(m_Request_log_service_outputtype);
    }
    if(m_Request_log_service_onentryIsSet)
    {
        val[utility::conversions::to_string_t("request.log.service.onentry")] = ModelBase::toJson(m_Request_log_service_onentry);
    }

    return val;
}

void OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("request.log.service.format")))
    {
        if(!val[utility::conversions::to_string_t("request.log.service.format")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("request.log.service.format")]);
            setRequestLogServiceFormat( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request.log.service.output")))
    {
        if(!val[utility::conversions::to_string_t("request.log.service.output")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("request.log.service.output")]);
            setRequestLogServiceOutput( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request.log.service.outputtype")))
    {
        if(!val[utility::conversions::to_string_t("request.log.service.outputtype")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("request.log.service.outputtype")]);
            setRequestLogServiceOutputtype( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request.log.service.onentry")))
    {
        if(!val[utility::conversions::to_string_t("request.log.service.onentry")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("request.log.service.onentry")]);
            setRequestLogServiceOnentry( newItem );
        }
    }
}

void OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Request_log_service_formatIsSet)
    {
        if (m_Request_log_service_format.get())
        {
            m_Request_log_service_format->toMultipart(multipart, utility::conversions::to_string_t("request.log.service.format."));
        }
    }
    if(m_Request_log_service_outputIsSet)
    {
        if (m_Request_log_service_output.get())
        {
            m_Request_log_service_output->toMultipart(multipart, utility::conversions::to_string_t("request.log.service.output."));
        }
    }
    if(m_Request_log_service_outputtypeIsSet)
    {
        if (m_Request_log_service_outputtype.get())
        {
            m_Request_log_service_outputtype->toMultipart(multipart, utility::conversions::to_string_t("request.log.service.outputtype."));
        }
    }
    if(m_Request_log_service_onentryIsSet)
    {
        if (m_Request_log_service_onentry.get())
        {
            m_Request_log_service_onentry->toMultipart(multipart, utility::conversions::to_string_t("request.log.service.onentry."));
        }
    }
}

void OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("request.log.service.format")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("request.log.service.format")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("request.log.service.format."));
            setRequestLogServiceFormat( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("request.log.service.output")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("request.log.service.output")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("request.log.service.output."));
            setRequestLogServiceOutput( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("request.log.service.outputtype")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("request.log.service.outputtype")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("request.log.service.outputtype."));
            setRequestLogServiceOutputtype( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("request.log.service.onentry")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("request.log.service.onentry")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("request.log.service.onentry."));
            setRequestLogServiceOnentry( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::getRequestLogServiceFormat() const
{
    return m_Request_log_service_format;
}


void OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::setRequestLogServiceFormat(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Request_log_service_format = value;
    m_Request_log_service_formatIsSet = true;
}
bool OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::requestLogServiceFormatIsSet() const
{
    return m_Request_log_service_formatIsSet;
}

void OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::unsetRequest_log_service_format()
{
    m_Request_log_service_formatIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::getRequestLogServiceOutput() const
{
    return m_Request_log_service_output;
}


void OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::setRequestLogServiceOutput(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Request_log_service_output = value;
    m_Request_log_service_outputIsSet = true;
}
bool OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::requestLogServiceOutputIsSet() const
{
    return m_Request_log_service_outputIsSet;
}

void OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::unsetRequest_log_service_output()
{
    m_Request_log_service_outputIsSet = false;
}

std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::getRequestLogServiceOutputtype() const
{
    return m_Request_log_service_outputtype;
}


void OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::setRequestLogServiceOutputtype(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Request_log_service_outputtype = value;
    m_Request_log_service_outputtypeIsSet = true;
}
bool OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::requestLogServiceOutputtypeIsSet() const
{
    return m_Request_log_service_outputtypeIsSet;
}

void OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::unsetRequest_log_service_outputtype()
{
    m_Request_log_service_outputtypeIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::getRequestLogServiceOnentry() const
{
    return m_Request_log_service_onentry;
}


void OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::setRequestLogServiceOnentry(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Request_log_service_onentry = value;
    m_Request_log_service_onentryIsSet = true;
}
bool OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::requestLogServiceOnentryIsSet() const
{
    return m_Request_log_service_onentryIsSet;
}

void OrgApacheSlingEngineImplLogRequestLoggerServiceProperties::unsetRequest_log_service_onentry()
{
    m_Request_log_service_onentryIsSet = false;
}

}
}
}
}

