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



#include "ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties()
{
    m_ResourceType_filtersIsSet = false;
    m_PriorityIsSet = false;
}

ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::~ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties()
{
}

void ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ResourceType_filtersIsSet)
    {
        val[utility::conversions::to_string_t("resourceType.filters")] = ModelBase::toJson(m_ResourceType_filters);
    }
    if(m_PriorityIsSet)
    {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(m_Priority);
    }

    return val;
}

void ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("resourceType.filters")))
    {
        if(!val[utility::conversions::to_string_t("resourceType.filters")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("resourceType.filters")]);
            setResourceTypeFilters( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority")))
    {
        if(!val[utility::conversions::to_string_t("priority")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromJson(val[utility::conversions::to_string_t("priority")]);
            setPriority( newItem );
        }
    }
}

void ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ResourceType_filtersIsSet)
    {
        if (m_ResourceType_filters.get())
        {
            m_ResourceType_filters->toMultipart(multipart, utility::conversions::to_string_t("resourceType.filters."));
        }
    }
    if(m_PriorityIsSet)
    {
        if (m_Priority.get())
        {
            m_Priority->toMultipart(multipart, utility::conversions::to_string_t("priority."));
        }
    }
}

void ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("resourceType.filters")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("resourceType.filters")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("resourceType.filters."));
            setResourceTypeFilters( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("priority")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("priority")))
        {
            std::shared_ptr<ConfigNodePropertyInteger> newItem(new ConfigNodePropertyInteger());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("priority."));
            setPriority( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::getResourceTypeFilters() const
{
    return m_ResourceType_filters;
}


void ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::setResourceTypeFilters(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_ResourceType_filters = value;
    m_ResourceType_filtersIsSet = true;
}
bool ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::resourceTypeFiltersIsSet() const
{
    return m_ResourceType_filtersIsSet;
}

void ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::unsetResourceType_filters()
{
    m_ResourceType_filtersIsSet = false;
}

std::shared_ptr<ConfigNodePropertyInteger> ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::getPriority() const
{
    return m_Priority;
}


void ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::setPriority(std::shared_ptr<ConfigNodePropertyInteger> value)
{
    m_Priority = value;
    m_PriorityIsSet = true;
}
bool ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::priorityIsSet() const
{
    return m_PriorityIsSet;
}

void ComAdobeCqSocialModerationDashboardInternalImplFilterGroupSociProperties::unsetPriority()
{
    m_PriorityIsSet = false;
}

}
}
}
}

