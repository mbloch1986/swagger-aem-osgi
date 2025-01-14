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



#include "ComAdobeGraniteSecurityUserUserPropertiesServiceProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::ComAdobeGraniteSecurityUserUserPropertiesServiceProperties()
{
    m_Adapter_conditionIsSet = false;
    m_Granite_userproperties_nodetypesIsSet = false;
    m_Granite_userproperties_resourcetypesIsSet = false;
}

ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::~ComAdobeGraniteSecurityUserUserPropertiesServiceProperties()
{
}

void ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Adapter_conditionIsSet)
    {
        val[utility::conversions::to_string_t("adapter.condition")] = ModelBase::toJson(m_Adapter_condition);
    }
    if(m_Granite_userproperties_nodetypesIsSet)
    {
        val[utility::conversions::to_string_t("granite.userproperties.nodetypes")] = ModelBase::toJson(m_Granite_userproperties_nodetypes);
    }
    if(m_Granite_userproperties_resourcetypesIsSet)
    {
        val[utility::conversions::to_string_t("granite.userproperties.resourcetypes")] = ModelBase::toJson(m_Granite_userproperties_resourcetypes);
    }

    return val;
}

void ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("adapter.condition")))
    {
        if(!val[utility::conversions::to_string_t("adapter.condition")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("adapter.condition")]);
            setAdapterCondition( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("granite.userproperties.nodetypes")))
    {
        if(!val[utility::conversions::to_string_t("granite.userproperties.nodetypes")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("granite.userproperties.nodetypes")]);
            setGraniteUserpropertiesNodetypes( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("granite.userproperties.resourcetypes")))
    {
        if(!val[utility::conversions::to_string_t("granite.userproperties.resourcetypes")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("granite.userproperties.resourcetypes")]);
            setGraniteUserpropertiesResourcetypes( newItem );
        }
    }
}

void ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Adapter_conditionIsSet)
    {
        if (m_Adapter_condition.get())
        {
            m_Adapter_condition->toMultipart(multipart, utility::conversions::to_string_t("adapter.condition."));
        }
    }
    if(m_Granite_userproperties_nodetypesIsSet)
    {
        if (m_Granite_userproperties_nodetypes.get())
        {
            m_Granite_userproperties_nodetypes->toMultipart(multipart, utility::conversions::to_string_t("granite.userproperties.nodetypes."));
        }
    }
    if(m_Granite_userproperties_resourcetypesIsSet)
    {
        if (m_Granite_userproperties_resourcetypes.get())
        {
            m_Granite_userproperties_resourcetypes->toMultipart(multipart, utility::conversions::to_string_t("granite.userproperties.resourcetypes."));
        }
    }
}

void ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("adapter.condition")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("adapter.condition")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("adapter.condition."));
            setAdapterCondition( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("granite.userproperties.nodetypes")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("granite.userproperties.nodetypes")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("granite.userproperties.nodetypes."));
            setGraniteUserpropertiesNodetypes( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("granite.userproperties.resourcetypes")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("granite.userproperties.resourcetypes")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("granite.userproperties.resourcetypes."));
            setGraniteUserpropertiesResourcetypes( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::getAdapterCondition() const
{
    return m_Adapter_condition;
}


void ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::setAdapterCondition(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Adapter_condition = value;
    m_Adapter_conditionIsSet = true;
}
bool ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::adapterConditionIsSet() const
{
    return m_Adapter_conditionIsSet;
}

void ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::unsetAdapter_condition()
{
    m_Adapter_conditionIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::getGraniteUserpropertiesNodetypes() const
{
    return m_Granite_userproperties_nodetypes;
}


void ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::setGraniteUserpropertiesNodetypes(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Granite_userproperties_nodetypes = value;
    m_Granite_userproperties_nodetypesIsSet = true;
}
bool ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::graniteUserpropertiesNodetypesIsSet() const
{
    return m_Granite_userproperties_nodetypesIsSet;
}

void ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::unsetGranite_userproperties_nodetypes()
{
    m_Granite_userproperties_nodetypesIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::getGraniteUserpropertiesResourcetypes() const
{
    return m_Granite_userproperties_resourcetypes;
}


void ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::setGraniteUserpropertiesResourcetypes(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Granite_userproperties_resourcetypes = value;
    m_Granite_userproperties_resourcetypesIsSet = true;
}
bool ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::graniteUserpropertiesResourcetypesIsSet() const
{
    return m_Granite_userproperties_resourcetypesIsSet;
}

void ComAdobeGraniteSecurityUserUserPropertiesServiceProperties::unsetGranite_userproperties_resourcetypes()
{
    m_Granite_userproperties_resourcetypesIsSet = false;
}

}
}
}
}

