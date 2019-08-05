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



#include "ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties()
{
    m_GroupIsSet = false;
    m_IdsIsSet = false;
}

ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::~ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties()
{
}

void ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_GroupIsSet)
    {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(m_Group);
    }
    if(m_IdsIsSet)
    {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(m_Ids);
    }

    return val;
}

void ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("group")))
    {
        if(!val[utility::conversions::to_string_t("group")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("group")]);
            setGroup( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ids")))
    {
        if(!val[utility::conversions::to_string_t("ids")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("ids")]);
            setIds( newItem );
        }
    }
}

void ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_GroupIsSet)
    {
        if (m_Group.get())
        {
            m_Group->toMultipart(multipart, utility::conversions::to_string_t("group."));
        }
    }
    if(m_IdsIsSet)
    {
        if (m_Ids.get())
        {
            m_Ids->toMultipart(multipart, utility::conversions::to_string_t("ids."));
        }
    }
}

void ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("group")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("group")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("group."));
            setGroup( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ids")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("ids")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("ids."));
            setIds( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::getGroup() const
{
    return m_Group;
}


void ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::setGroup(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Group = value;
    m_GroupIsSet = true;
}
bool ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::groupIsSet() const
{
    return m_GroupIsSet;
}

void ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::unsetGroup()
{
    m_GroupIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::getIds() const
{
    return m_Ids;
}


void ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::setIds(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Ids = value;
    m_IdsIsSet = true;
}
bool ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::idsIsSet() const
{
    return m_IdsIsSet;
}

void ComAdobeGraniteCompatrouterImplSwitchMappingConfigProperties::unsetIds()
{
    m_IdsIsSet = false;
}

}
}
}
}
