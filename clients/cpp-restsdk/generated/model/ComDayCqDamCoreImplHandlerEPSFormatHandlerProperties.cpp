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



#include "ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties::ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties()
{
    m_MimetypeIsSet = false;
}

ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties::~ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties()
{
}

void ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_MimetypeIsSet)
    {
        val[utility::conversions::to_string_t("mimetype")] = ModelBase::toJson(m_Mimetype);
    }

    return val;
}

void ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("mimetype")))
    {
        if(!val[utility::conversions::to_string_t("mimetype")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("mimetype")]);
            setMimetype( newItem );
        }
    }
}

void ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_MimetypeIsSet)
    {
        if (m_Mimetype.get())
        {
            m_Mimetype->toMultipart(multipart, utility::conversions::to_string_t("mimetype."));
        }
    }
}

void ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("mimetype")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("mimetype")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("mimetype."));
            setMimetype( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties::getMimetype() const
{
    return m_Mimetype;
}


void ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties::setMimetype(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Mimetype = value;
    m_MimetypeIsSet = true;
}
bool ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties::mimetypeIsSet() const
{
    return m_MimetypeIsSet;
}

void ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties::unsetMimetype()
{
    m_MimetypeIsSet = false;
}

}
}
}
}

