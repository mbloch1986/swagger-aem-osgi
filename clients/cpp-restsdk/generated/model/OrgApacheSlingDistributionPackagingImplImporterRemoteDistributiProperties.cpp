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



#include "OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties()
{
    m_NameIsSet = false;
    m_EndpointsIsSet = false;
    m_TransportSecretProvider_targetIsSet = false;
}

OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::~OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties()
{
}

void OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_EndpointsIsSet)
    {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(m_Endpoints);
    }
    if(m_TransportSecretProvider_targetIsSet)
    {
        val[utility::conversions::to_string_t("transportSecretProvider.target")] = ModelBase::toJson(m_TransportSecretProvider_target);
    }

    return val;
}

void OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        if(!val[utility::conversions::to_string_t("name")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("name")]);
            setName( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoints")))
    {
        if(!val[utility::conversions::to_string_t("endpoints")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("endpoints")]);
            setEndpoints( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transportSecretProvider.target")))
    {
        if(!val[utility::conversions::to_string_t("transportSecretProvider.target")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("transportSecretProvider.target")]);
            setTransportSecretProviderTarget( newItem );
        }
    }
}

void OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_NameIsSet)
    {
        if (m_Name.get())
        {
            m_Name->toMultipart(multipart, utility::conversions::to_string_t("name."));
        }
    }
    if(m_EndpointsIsSet)
    {
        if (m_Endpoints.get())
        {
            m_Endpoints->toMultipart(multipart, utility::conversions::to_string_t("endpoints."));
        }
    }
    if(m_TransportSecretProvider_targetIsSet)
    {
        if (m_TransportSecretProvider_target.get())
        {
            m_TransportSecretProvider_target->toMultipart(multipart, utility::conversions::to_string_t("transportSecretProvider.target."));
        }
    }
}

void OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("name")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("name."));
            setName( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("endpoints")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("endpoints")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("endpoints."));
            setEndpoints( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("transportSecretProvider.target")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("transportSecretProvider.target")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("transportSecretProvider.target."));
            setTransportSecretProviderTarget( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::getName() const
{
    return m_Name;
}


void OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::setName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::nameIsSet() const
{
    return m_NameIsSet;
}

void OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::unsetName()
{
    m_NameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::getEndpoints() const
{
    return m_Endpoints;
}


void OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::setEndpoints(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Endpoints = value;
    m_EndpointsIsSet = true;
}
bool OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::endpointsIsSet() const
{
    return m_EndpointsIsSet;
}

void OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::unsetEndpoints()
{
    m_EndpointsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::getTransportSecretProviderTarget() const
{
    return m_TransportSecretProvider_target;
}


void OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::setTransportSecretProviderTarget(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_TransportSecretProvider_target = value;
    m_TransportSecretProvider_targetIsSet = true;
}
bool OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::transportSecretProviderTargetIsSet() const
{
    return m_TransportSecretProvider_targetIsSet;
}

void OrgApacheSlingDistributionPackagingImplImporterRemoteDistributiProperties::unsetTransportSecretProvider_target()
{
    m_TransportSecretProvider_targetIsSet = false;
}

}
}
}
}
