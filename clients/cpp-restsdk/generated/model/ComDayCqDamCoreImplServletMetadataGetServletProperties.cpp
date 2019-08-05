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



#include "ComDayCqDamCoreImplServletMetadataGetServletProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqDamCoreImplServletMetadataGetServletProperties::ComDayCqDamCoreImplServletMetadataGetServletProperties()
{
    m_Sling_servlet_resourceTypesIsSet = false;
    m_Sling_servlet_methodsIsSet = false;
    m_Sling_servlet_extensionsIsSet = false;
    m_Sling_servlet_selectorsIsSet = false;
}

ComDayCqDamCoreImplServletMetadataGetServletProperties::~ComDayCqDamCoreImplServletMetadataGetServletProperties()
{
}

void ComDayCqDamCoreImplServletMetadataGetServletProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqDamCoreImplServletMetadataGetServletProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Sling_servlet_resourceTypesIsSet)
    {
        val[utility::conversions::to_string_t("sling.servlet.resourceTypes")] = ModelBase::toJson(m_Sling_servlet_resourceTypes);
    }
    if(m_Sling_servlet_methodsIsSet)
    {
        val[utility::conversions::to_string_t("sling.servlet.methods")] = ModelBase::toJson(m_Sling_servlet_methods);
    }
    if(m_Sling_servlet_extensionsIsSet)
    {
        val[utility::conversions::to_string_t("sling.servlet.extensions")] = ModelBase::toJson(m_Sling_servlet_extensions);
    }
    if(m_Sling_servlet_selectorsIsSet)
    {
        val[utility::conversions::to_string_t("sling.servlet.selectors")] = ModelBase::toJson(m_Sling_servlet_selectors);
    }

    return val;
}

void ComDayCqDamCoreImplServletMetadataGetServletProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("sling.servlet.resourceTypes")))
    {
        if(!val[utility::conversions::to_string_t("sling.servlet.resourceTypes")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("sling.servlet.resourceTypes")]);
            setSlingServletResourceTypes( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sling.servlet.methods")))
    {
        if(!val[utility::conversions::to_string_t("sling.servlet.methods")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("sling.servlet.methods")]);
            setSlingServletMethods( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sling.servlet.extensions")))
    {
        if(!val[utility::conversions::to_string_t("sling.servlet.extensions")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("sling.servlet.extensions")]);
            setSlingServletExtensions( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sling.servlet.selectors")))
    {
        if(!val[utility::conversions::to_string_t("sling.servlet.selectors")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("sling.servlet.selectors")]);
            setSlingServletSelectors( newItem );
        }
    }
}

void ComDayCqDamCoreImplServletMetadataGetServletProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Sling_servlet_resourceTypesIsSet)
    {
        if (m_Sling_servlet_resourceTypes.get())
        {
            m_Sling_servlet_resourceTypes->toMultipart(multipart, utility::conversions::to_string_t("sling.servlet.resourceTypes."));
        }
    }
    if(m_Sling_servlet_methodsIsSet)
    {
        if (m_Sling_servlet_methods.get())
        {
            m_Sling_servlet_methods->toMultipart(multipart, utility::conversions::to_string_t("sling.servlet.methods."));
        }
    }
    if(m_Sling_servlet_extensionsIsSet)
    {
        if (m_Sling_servlet_extensions.get())
        {
            m_Sling_servlet_extensions->toMultipart(multipart, utility::conversions::to_string_t("sling.servlet.extensions."));
        }
    }
    if(m_Sling_servlet_selectorsIsSet)
    {
        if (m_Sling_servlet_selectors.get())
        {
            m_Sling_servlet_selectors->toMultipart(multipart, utility::conversions::to_string_t("sling.servlet.selectors."));
        }
    }
}

void ComDayCqDamCoreImplServletMetadataGetServletProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("sling.servlet.resourceTypes")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("sling.servlet.resourceTypes")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("sling.servlet.resourceTypes."));
            setSlingServletResourceTypes( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sling.servlet.methods")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("sling.servlet.methods")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("sling.servlet.methods."));
            setSlingServletMethods( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sling.servlet.extensions")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("sling.servlet.extensions")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("sling.servlet.extensions."));
            setSlingServletExtensions( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sling.servlet.selectors")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("sling.servlet.selectors")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("sling.servlet.selectors."));
            setSlingServletSelectors( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqDamCoreImplServletMetadataGetServletProperties::getSlingServletResourceTypes() const
{
    return m_Sling_servlet_resourceTypes;
}


void ComDayCqDamCoreImplServletMetadataGetServletProperties::setSlingServletResourceTypes(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Sling_servlet_resourceTypes = value;
    m_Sling_servlet_resourceTypesIsSet = true;
}
bool ComDayCqDamCoreImplServletMetadataGetServletProperties::slingServletResourceTypesIsSet() const
{
    return m_Sling_servlet_resourceTypesIsSet;
}

void ComDayCqDamCoreImplServletMetadataGetServletProperties::unsetSling_servlet_resourceTypes()
{
    m_Sling_servlet_resourceTypesIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqDamCoreImplServletMetadataGetServletProperties::getSlingServletMethods() const
{
    return m_Sling_servlet_methods;
}


void ComDayCqDamCoreImplServletMetadataGetServletProperties::setSlingServletMethods(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Sling_servlet_methods = value;
    m_Sling_servlet_methodsIsSet = true;
}
bool ComDayCqDamCoreImplServletMetadataGetServletProperties::slingServletMethodsIsSet() const
{
    return m_Sling_servlet_methodsIsSet;
}

void ComDayCqDamCoreImplServletMetadataGetServletProperties::unsetSling_servlet_methods()
{
    m_Sling_servlet_methodsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqDamCoreImplServletMetadataGetServletProperties::getSlingServletExtensions() const
{
    return m_Sling_servlet_extensions;
}


void ComDayCqDamCoreImplServletMetadataGetServletProperties::setSlingServletExtensions(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Sling_servlet_extensions = value;
    m_Sling_servlet_extensionsIsSet = true;
}
bool ComDayCqDamCoreImplServletMetadataGetServletProperties::slingServletExtensionsIsSet() const
{
    return m_Sling_servlet_extensionsIsSet;
}

void ComDayCqDamCoreImplServletMetadataGetServletProperties::unsetSling_servlet_extensions()
{
    m_Sling_servlet_extensionsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqDamCoreImplServletMetadataGetServletProperties::getSlingServletSelectors() const
{
    return m_Sling_servlet_selectors;
}


void ComDayCqDamCoreImplServletMetadataGetServletProperties::setSlingServletSelectors(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Sling_servlet_selectors = value;
    m_Sling_servlet_selectorsIsSet = true;
}
bool ComDayCqDamCoreImplServletMetadataGetServletProperties::slingServletSelectorsIsSet() const
{
    return m_Sling_servlet_selectorsIsSet;
}

void ComDayCqDamCoreImplServletMetadataGetServletProperties::unsetSling_servlet_selectors()
{
    m_Sling_servlet_selectorsIsSet = false;
}

}
}
}
}
