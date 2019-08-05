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



#include "ComDayCqDamHandlerStandardPdfPdfHandlerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqDamHandlerStandardPdfPdfHandlerProperties::ComDayCqDamHandlerStandardPdfPdfHandlerProperties()
{
    m_Raster_annotationIsSet = false;
}

ComDayCqDamHandlerStandardPdfPdfHandlerProperties::~ComDayCqDamHandlerStandardPdfPdfHandlerProperties()
{
}

void ComDayCqDamHandlerStandardPdfPdfHandlerProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqDamHandlerStandardPdfPdfHandlerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Raster_annotationIsSet)
    {
        val[utility::conversions::to_string_t("raster.annotation")] = ModelBase::toJson(m_Raster_annotation);
    }

    return val;
}

void ComDayCqDamHandlerStandardPdfPdfHandlerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("raster.annotation")))
    {
        if(!val[utility::conversions::to_string_t("raster.annotation")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("raster.annotation")]);
            setRasterAnnotation( newItem );
        }
    }
}

void ComDayCqDamHandlerStandardPdfPdfHandlerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Raster_annotationIsSet)
    {
        if (m_Raster_annotation.get())
        {
            m_Raster_annotation->toMultipart(multipart, utility::conversions::to_string_t("raster.annotation."));
        }
    }
}

void ComDayCqDamHandlerStandardPdfPdfHandlerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("raster.annotation")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("raster.annotation")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("raster.annotation."));
            setRasterAnnotation( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqDamHandlerStandardPdfPdfHandlerProperties::getRasterAnnotation() const
{
    return m_Raster_annotation;
}


void ComDayCqDamHandlerStandardPdfPdfHandlerProperties::setRasterAnnotation(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Raster_annotation = value;
    m_Raster_annotationIsSet = true;
}
bool ComDayCqDamHandlerStandardPdfPdfHandlerProperties::rasterAnnotationIsSet() const
{
    return m_Raster_annotationIsSet;
}

void ComDayCqDamHandlerStandardPdfPdfHandlerProperties::unsetRaster_annotation()
{
    m_Raster_annotationIsSet = false;
}

}
}
}
}
