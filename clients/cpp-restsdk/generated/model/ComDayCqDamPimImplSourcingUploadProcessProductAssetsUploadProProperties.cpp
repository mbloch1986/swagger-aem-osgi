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



#include "ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties()
{
    m_Delete_zip_fileIsSet = false;
}

ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::~ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties()
{
}

void ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Delete_zip_fileIsSet)
    {
        val[utility::conversions::to_string_t("delete.zip.file")] = ModelBase::toJson(m_Delete_zip_file);
    }

    return val;
}

void ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("delete.zip.file")))
    {
        if(!val[utility::conversions::to_string_t("delete.zip.file")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("delete.zip.file")]);
            setDeleteZipFile( newItem );
        }
    }
}

void ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Delete_zip_fileIsSet)
    {
        if (m_Delete_zip_file.get())
        {
            m_Delete_zip_file->toMultipart(multipart, utility::conversions::to_string_t("delete.zip.file."));
        }
    }
}

void ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("delete.zip.file")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("delete.zip.file")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("delete.zip.file."));
            setDeleteZipFile( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::getDeleteZipFile() const
{
    return m_Delete_zip_file;
}


void ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::setDeleteZipFile(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_Delete_zip_file = value;
    m_Delete_zip_fileIsSet = true;
}
bool ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::deleteZipFileIsSet() const
{
    return m_Delete_zip_fileIsSet;
}

void ComDayCqDamPimImplSourcingUploadProcessProductAssetsUploadProProperties::unsetDelete_zip_file()
{
    m_Delete_zip_fileIsSet = false;
}

}
}
}
}

