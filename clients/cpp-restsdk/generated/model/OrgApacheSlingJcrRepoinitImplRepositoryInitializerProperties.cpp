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



#include "OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties::OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties()
{
    m_ReferencesIsSet = false;
}

OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties::~OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties()
{
}

void OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ReferencesIsSet)
    {
        val[utility::conversions::to_string_t("references")] = ModelBase::toJson(m_References);
    }

    return val;
}

void OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("references")))
    {
        if(!val[utility::conversions::to_string_t("references")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("references")]);
            setReferences( newItem );
        }
    }
}

void OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ReferencesIsSet)
    {
        if (m_References.get())
        {
            m_References->toMultipart(multipart, utility::conversions::to_string_t("references."));
        }
    }
}

void OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("references")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("references")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("references."));
            setReferences( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties::getReferences() const
{
    return m_References;
}


void OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties::setReferences(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_References = value;
    m_ReferencesIsSet = true;
}
bool OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties::referencesIsSet() const
{
    return m_ReferencesIsSet;
}

void OrgApacheSlingJcrRepoinitImplRepositoryInitializerProperties::unsetReferences()
{
    m_ReferencesIsSet = false;
}

}
}
}
}

