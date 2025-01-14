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



#include "ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties()
{
    m_MinThreadPoolSizeIsSet = false;
    m_MaxThreadPoolSizeIsSet = false;
}

ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::~ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties()
{
}

void ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_MinThreadPoolSizeIsSet)
    {
        val[utility::conversions::to_string_t("minThreadPoolSize")] = ModelBase::toJson(m_MinThreadPoolSize);
    }
    if(m_MaxThreadPoolSizeIsSet)
    {
        val[utility::conversions::to_string_t("maxThreadPoolSize")] = ModelBase::toJson(m_MaxThreadPoolSize);
    }

    return val;
}

void ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("minThreadPoolSize")))
    {
        if(!val[utility::conversions::to_string_t("minThreadPoolSize")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("minThreadPoolSize")]);
            setMinThreadPoolSize( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxThreadPoolSize")))
    {
        if(!val[utility::conversions::to_string_t("maxThreadPoolSize")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("maxThreadPoolSize")]);
            setMaxThreadPoolSize( newItem );
        }
    }
}

void ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_MinThreadPoolSizeIsSet)
    {
        if (m_MinThreadPoolSize.get())
        {
            m_MinThreadPoolSize->toMultipart(multipart, utility::conversions::to_string_t("minThreadPoolSize."));
        }
    }
    if(m_MaxThreadPoolSizeIsSet)
    {
        if (m_MaxThreadPoolSize.get())
        {
            m_MaxThreadPoolSize->toMultipart(multipart, utility::conversions::to_string_t("maxThreadPoolSize."));
        }
    }
}

void ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("minThreadPoolSize")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("minThreadPoolSize")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("minThreadPoolSize."));
            setMinThreadPoolSize( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxThreadPoolSize")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("maxThreadPoolSize")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("maxThreadPoolSize."));
            setMaxThreadPoolSize( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::getMinThreadPoolSize() const
{
    return m_MinThreadPoolSize;
}


void ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::setMinThreadPoolSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_MinThreadPoolSize = value;
    m_MinThreadPoolSizeIsSet = true;
}
bool ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::minThreadPoolSizeIsSet() const
{
    return m_MinThreadPoolSizeIsSet;
}

void ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::unsetMinThreadPoolSize()
{
    m_MinThreadPoolSizeIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::getMaxThreadPoolSize() const
{
    return m_MaxThreadPoolSize;
}


void ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::setMaxThreadPoolSize(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_MaxThreadPoolSize = value;
    m_MaxThreadPoolSizeIsSet = true;
}
bool ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::maxThreadPoolSizeIsSet() const
{
    return m_MaxThreadPoolSizeIsSet;
}

void ComDayCqWcmDesignimporterImplCanvasPageDeleteHandlerProperties::unsetMaxThreadPoolSize()
{
    m_MaxThreadPoolSizeIsSet = false;
}

}
}
}
}

