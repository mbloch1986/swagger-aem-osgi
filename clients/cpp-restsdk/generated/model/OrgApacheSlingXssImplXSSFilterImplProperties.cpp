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



#include "OrgApacheSlingXssImplXSSFilterImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingXssImplXSSFilterImplProperties::OrgApacheSlingXssImplXSSFilterImplProperties()
{
    m_PolicyPathIsSet = false;
}

OrgApacheSlingXssImplXSSFilterImplProperties::~OrgApacheSlingXssImplXSSFilterImplProperties()
{
}

void OrgApacheSlingXssImplXSSFilterImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingXssImplXSSFilterImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_PolicyPathIsSet)
    {
        val[utility::conversions::to_string_t("policyPath")] = ModelBase::toJson(m_PolicyPath);
    }

    return val;
}

void OrgApacheSlingXssImplXSSFilterImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("policyPath")))
    {
        if(!val[utility::conversions::to_string_t("policyPath")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("policyPath")]);
            setPolicyPath( newItem );
        }
    }
}

void OrgApacheSlingXssImplXSSFilterImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_PolicyPathIsSet)
    {
        if (m_PolicyPath.get())
        {
            m_PolicyPath->toMultipart(multipart, utility::conversions::to_string_t("policyPath."));
        }
    }
}

void OrgApacheSlingXssImplXSSFilterImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("policyPath")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("policyPath")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("policyPath."));
            setPolicyPath( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingXssImplXSSFilterImplProperties::getPolicyPath() const
{
    return m_PolicyPath;
}


void OrgApacheSlingXssImplXSSFilterImplProperties::setPolicyPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_PolicyPath = value;
    m_PolicyPathIsSet = true;
}
bool OrgApacheSlingXssImplXSSFilterImplProperties::policyPathIsSet() const
{
    return m_PolicyPathIsSet;
}

void OrgApacheSlingXssImplXSSFilterImplProperties::unsetPolicyPath()
{
    m_PolicyPathIsSet = false;
}

}
}
}
}

