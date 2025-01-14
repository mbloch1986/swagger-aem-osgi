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



#include "OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties::OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties()
{
    m_Server_typeIsSet = false;
}

OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties::~OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties()
{
}

void OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Server_typeIsSet)
    {
        val[utility::conversions::to_string_t("server.type")] = ModelBase::toJson(m_Server_type);
    }

    return val;
}

void OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("server.type")))
    {
        if(!val[utility::conversions::to_string_t("server.type")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromJson(val[utility::conversions::to_string_t("server.type")]);
            setServerType( newItem );
        }
    }
}

void OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Server_typeIsSet)
    {
        if (m_Server_type.get())
        {
            m_Server_type->toMultipart(multipart, utility::conversions::to_string_t("server.type."));
        }
    }
}

void OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("server.type")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("server.type")))
        {
            std::shared_ptr<ConfigNodePropertyDropDown> newItem(new ConfigNodePropertyDropDown());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("server.type."));
            setServerType( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyDropDown> OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties::getServerType() const
{
    return m_Server_type;
}


void OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties::setServerType(std::shared_ptr<ConfigNodePropertyDropDown> value)
{
    m_Server_type = value;
    m_Server_typeIsSet = true;
}
bool OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties::serverTypeIsSet() const
{
    return m_Server_typeIsSet;
}

void OrgApacheJackrabbitOakPluginsIndexSolrOsgiSolrServerProviderSeProperties::unsetServer_type()
{
    m_Server_typeIsSet = false;
}

}
}
}
}

