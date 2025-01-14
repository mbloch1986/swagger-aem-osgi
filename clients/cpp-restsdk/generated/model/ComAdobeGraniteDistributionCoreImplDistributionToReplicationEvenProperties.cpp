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



#include "ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties::ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties()
{
    m_Importer_nameIsSet = false;
}

ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties::~ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties()
{
}

void ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Importer_nameIsSet)
    {
        val[utility::conversions::to_string_t("importer.name")] = ModelBase::toJson(m_Importer_name);
    }

    return val;
}

void ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("importer.name")))
    {
        if(!val[utility::conversions::to_string_t("importer.name")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("importer.name")]);
            setImporterName( newItem );
        }
    }
}

void ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Importer_nameIsSet)
    {
        if (m_Importer_name.get())
        {
            m_Importer_name->toMultipart(multipart, utility::conversions::to_string_t("importer.name."));
        }
    }
}

void ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("importer.name")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("importer.name")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("importer.name."));
            setImporterName( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties::getImporterName() const
{
    return m_Importer_name;
}


void ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties::setImporterName(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Importer_name = value;
    m_Importer_nameIsSet = true;
}
bool ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties::importerNameIsSet() const
{
    return m_Importer_nameIsSet;
}

void ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties::unsetImporter_name()
{
    m_Importer_nameIsSet = false;
}

}
}
}
}

