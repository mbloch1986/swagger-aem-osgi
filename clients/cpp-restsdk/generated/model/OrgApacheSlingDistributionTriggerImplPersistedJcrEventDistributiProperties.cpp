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



#include "OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties()
{
    m_NameIsSet = false;
    m_PathIsSet = false;
    m_ServiceNameIsSet = false;
    m_NuggetsPathIsSet = false;
}

OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::~OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties()
{
}

void OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_PathIsSet)
    {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(m_Path);
    }
    if(m_ServiceNameIsSet)
    {
        val[utility::conversions::to_string_t("serviceName")] = ModelBase::toJson(m_ServiceName);
    }
    if(m_NuggetsPathIsSet)
    {
        val[utility::conversions::to_string_t("nuggetsPath")] = ModelBase::toJson(m_NuggetsPath);
    }

    return val;
}

void OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::fromJson(web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("path")))
    {
        if(!val[utility::conversions::to_string_t("path")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("path")]);
            setPath( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serviceName")))
    {
        if(!val[utility::conversions::to_string_t("serviceName")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("serviceName")]);
            setServiceName( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nuggetsPath")))
    {
        if(!val[utility::conversions::to_string_t("nuggetsPath")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("nuggetsPath")]);
            setNuggetsPath( newItem );
        }
    }
}

void OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_PathIsSet)
    {
        if (m_Path.get())
        {
            m_Path->toMultipart(multipart, utility::conversions::to_string_t("path."));
        }
    }
    if(m_ServiceNameIsSet)
    {
        if (m_ServiceName.get())
        {
            m_ServiceName->toMultipart(multipart, utility::conversions::to_string_t("serviceName."));
        }
    }
    if(m_NuggetsPathIsSet)
    {
        if (m_NuggetsPath.get())
        {
            m_NuggetsPath->toMultipart(multipart, utility::conversions::to_string_t("nuggetsPath."));
        }
    }
}

void OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("path")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("path")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("path."));
            setPath( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("serviceName")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("serviceName")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("serviceName."));
            setServiceName( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nuggetsPath")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("nuggetsPath")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("nuggetsPath."));
            setNuggetsPath( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::getName() const
{
    return m_Name;
}


void OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::setName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::nameIsSet() const
{
    return m_NameIsSet;
}

void OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::unsetName()
{
    m_NameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::getPath() const
{
    return m_Path;
}


void OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::setPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Path = value;
    m_PathIsSet = true;
}
bool OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::pathIsSet() const
{
    return m_PathIsSet;
}

void OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::unsetPath()
{
    m_PathIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::getServiceName() const
{
    return m_ServiceName;
}


void OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::setServiceName(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_ServiceName = value;
    m_ServiceNameIsSet = true;
}
bool OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::serviceNameIsSet() const
{
    return m_ServiceNameIsSet;
}

void OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::unsetServiceName()
{
    m_ServiceNameIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::getNuggetsPath() const
{
    return m_NuggetsPath;
}


void OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::setNuggetsPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_NuggetsPath = value;
    m_NuggetsPathIsSet = true;
}
bool OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::nuggetsPathIsSet() const
{
    return m_NuggetsPathIsSet;
}

void OrgApacheSlingDistributionTriggerImplPersistedJcrEventDistributiProperties::unsetNuggetsPath()
{
    m_NuggetsPathIsSet = false;
}

}
}
}
}

