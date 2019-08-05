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



#include "ComDayCqWcmCoreImplLanguageManagerImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqWcmCoreImplLanguageManagerImplProperties::ComDayCqWcmCoreImplLanguageManagerImplProperties()
{
    m_Langmgr_list_pathIsSet = false;
    m_Langmgr_country_defaultIsSet = false;
}

ComDayCqWcmCoreImplLanguageManagerImplProperties::~ComDayCqWcmCoreImplLanguageManagerImplProperties()
{
}

void ComDayCqWcmCoreImplLanguageManagerImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqWcmCoreImplLanguageManagerImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Langmgr_list_pathIsSet)
    {
        val[utility::conversions::to_string_t("langmgr.list.path")] = ModelBase::toJson(m_Langmgr_list_path);
    }
    if(m_Langmgr_country_defaultIsSet)
    {
        val[utility::conversions::to_string_t("langmgr.country.default")] = ModelBase::toJson(m_Langmgr_country_default);
    }

    return val;
}

void ComDayCqWcmCoreImplLanguageManagerImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("langmgr.list.path")))
    {
        if(!val[utility::conversions::to_string_t("langmgr.list.path")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("langmgr.list.path")]);
            setLangmgrListPath( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("langmgr.country.default")))
    {
        if(!val[utility::conversions::to_string_t("langmgr.country.default")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("langmgr.country.default")]);
            setLangmgrCountryDefault( newItem );
        }
    }
}

void ComDayCqWcmCoreImplLanguageManagerImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Langmgr_list_pathIsSet)
    {
        if (m_Langmgr_list_path.get())
        {
            m_Langmgr_list_path->toMultipart(multipart, utility::conversions::to_string_t("langmgr.list.path."));
        }
    }
    if(m_Langmgr_country_defaultIsSet)
    {
        if (m_Langmgr_country_default.get())
        {
            m_Langmgr_country_default->toMultipart(multipart, utility::conversions::to_string_t("langmgr.country.default."));
        }
    }
}

void ComDayCqWcmCoreImplLanguageManagerImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("langmgr.list.path")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("langmgr.list.path")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("langmgr.list.path."));
            setLangmgrListPath( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("langmgr.country.default")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("langmgr.country.default")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("langmgr.country.default."));
            setLangmgrCountryDefault( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqWcmCoreImplLanguageManagerImplProperties::getLangmgrListPath() const
{
    return m_Langmgr_list_path;
}


void ComDayCqWcmCoreImplLanguageManagerImplProperties::setLangmgrListPath(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Langmgr_list_path = value;
    m_Langmgr_list_pathIsSet = true;
}
bool ComDayCqWcmCoreImplLanguageManagerImplProperties::langmgrListPathIsSet() const
{
    return m_Langmgr_list_pathIsSet;
}

void ComDayCqWcmCoreImplLanguageManagerImplProperties::unsetLangmgr_list_path()
{
    m_Langmgr_list_pathIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqWcmCoreImplLanguageManagerImplProperties::getLangmgrCountryDefault() const
{
    return m_Langmgr_country_default;
}


void ComDayCqWcmCoreImplLanguageManagerImplProperties::setLangmgrCountryDefault(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Langmgr_country_default = value;
    m_Langmgr_country_defaultIsSet = true;
}
bool ComDayCqWcmCoreImplLanguageManagerImplProperties::langmgrCountryDefaultIsSet() const
{
    return m_Langmgr_country_defaultIsSet;
}

void ComDayCqWcmCoreImplLanguageManagerImplProperties::unsetLangmgr_country_default()
{
    m_Langmgr_country_defaultIsSet = false;
}

}
}
}
}
