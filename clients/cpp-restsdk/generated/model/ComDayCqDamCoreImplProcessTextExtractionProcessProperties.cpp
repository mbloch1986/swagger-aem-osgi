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



#include "ComDayCqDamCoreImplProcessTextExtractionProcessProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqDamCoreImplProcessTextExtractionProcessProperties::ComDayCqDamCoreImplProcessTextExtractionProcessProperties()
{
    m_MimeTypesIsSet = false;
    m_MaxExtractIsSet = false;
}

ComDayCqDamCoreImplProcessTextExtractionProcessProperties::~ComDayCqDamCoreImplProcessTextExtractionProcessProperties()
{
}

void ComDayCqDamCoreImplProcessTextExtractionProcessProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqDamCoreImplProcessTextExtractionProcessProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_MimeTypesIsSet)
    {
        val[utility::conversions::to_string_t("mimeTypes")] = ModelBase::toJson(m_MimeTypes);
    }
    if(m_MaxExtractIsSet)
    {
        val[utility::conversions::to_string_t("maxExtract")] = ModelBase::toJson(m_MaxExtract);
    }

    return val;
}

void ComDayCqDamCoreImplProcessTextExtractionProcessProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("mimeTypes")))
    {
        if(!val[utility::conversions::to_string_t("mimeTypes")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("mimeTypes")]);
            setMimeTypes( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxExtract")))
    {
        if(!val[utility::conversions::to_string_t("maxExtract")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("maxExtract")]);
            setMaxExtract( newItem );
        }
    }
}

void ComDayCqDamCoreImplProcessTextExtractionProcessProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_MimeTypesIsSet)
    {
        if (m_MimeTypes.get())
        {
            m_MimeTypes->toMultipart(multipart, utility::conversions::to_string_t("mimeTypes."));
        }
    }
    if(m_MaxExtractIsSet)
    {
        if (m_MaxExtract.get())
        {
            m_MaxExtract->toMultipart(multipart, utility::conversions::to_string_t("maxExtract."));
        }
    }
}

void ComDayCqDamCoreImplProcessTextExtractionProcessProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("mimeTypes")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("mimeTypes")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("mimeTypes."));
            setMimeTypes( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("maxExtract")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("maxExtract")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("maxExtract."));
            setMaxExtract( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqDamCoreImplProcessTextExtractionProcessProperties::getMimeTypes() const
{
    return m_MimeTypes;
}


void ComDayCqDamCoreImplProcessTextExtractionProcessProperties::setMimeTypes(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_MimeTypes = value;
    m_MimeTypesIsSet = true;
}
bool ComDayCqDamCoreImplProcessTextExtractionProcessProperties::mimeTypesIsSet() const
{
    return m_MimeTypesIsSet;
}

void ComDayCqDamCoreImplProcessTextExtractionProcessProperties::unsetMimeTypes()
{
    m_MimeTypesIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComDayCqDamCoreImplProcessTextExtractionProcessProperties::getMaxExtract() const
{
    return m_MaxExtract;
}


void ComDayCqDamCoreImplProcessTextExtractionProcessProperties::setMaxExtract(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_MaxExtract = value;
    m_MaxExtractIsSet = true;
}
bool ComDayCqDamCoreImplProcessTextExtractionProcessProperties::maxExtractIsSet() const
{
    return m_MaxExtractIsSet;
}

void ComDayCqDamCoreImplProcessTextExtractionProcessProperties::unsetMaxExtract()
{
    m_MaxExtractIsSet = false;
}

}
}
}
}

