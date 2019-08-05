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



#include "ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties()
{
    m_IllegalCharMappingIsSet = false;
    m_PageSubTreeActivationCheckIsSet = false;
}

ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::~ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties()
{
}

void ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IllegalCharMappingIsSet)
    {
        val[utility::conversions::to_string_t("illegalCharMapping")] = ModelBase::toJson(m_IllegalCharMapping);
    }
    if(m_PageSubTreeActivationCheckIsSet)
    {
        val[utility::conversions::to_string_t("pageSubTreeActivationCheck")] = ModelBase::toJson(m_PageSubTreeActivationCheck);
    }

    return val;
}

void ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("illegalCharMapping")))
    {
        if(!val[utility::conversions::to_string_t("illegalCharMapping")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("illegalCharMapping")]);
            setIllegalCharMapping( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageSubTreeActivationCheck")))
    {
        if(!val[utility::conversions::to_string_t("pageSubTreeActivationCheck")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromJson(val[utility::conversions::to_string_t("pageSubTreeActivationCheck")]);
            setPageSubTreeActivationCheck( newItem );
        }
    }
}

void ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IllegalCharMappingIsSet)
    {
        if (m_IllegalCharMapping.get())
        {
            m_IllegalCharMapping->toMultipart(multipart, utility::conversions::to_string_t("illegalCharMapping."));
        }
    }
    if(m_PageSubTreeActivationCheckIsSet)
    {
        if (m_PageSubTreeActivationCheck.get())
        {
            m_PageSubTreeActivationCheck->toMultipart(multipart, utility::conversions::to_string_t("pageSubTreeActivationCheck."));
        }
    }
}

void ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("illegalCharMapping")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("illegalCharMapping")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("illegalCharMapping."));
            setIllegalCharMapping( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pageSubTreeActivationCheck")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("pageSubTreeActivationCheck")))
        {
            std::shared_ptr<ConfigNodePropertyBoolean> newItem(new ConfigNodePropertyBoolean());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("pageSubTreeActivationCheck."));
            setPageSubTreeActivationCheck( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::getIllegalCharMapping() const
{
    return m_IllegalCharMapping;
}


void ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::setIllegalCharMapping(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_IllegalCharMapping = value;
    m_IllegalCharMappingIsSet = true;
}
bool ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::illegalCharMappingIsSet() const
{
    return m_IllegalCharMappingIsSet;
}

void ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::unsetIllegalCharMapping()
{
    m_IllegalCharMappingIsSet = false;
}

std::shared_ptr<ConfigNodePropertyBoolean> ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::getPageSubTreeActivationCheck() const
{
    return m_PageSubTreeActivationCheck;
}


void ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::setPageSubTreeActivationCheck(std::shared_ptr<ConfigNodePropertyBoolean> value)
{
    m_PageSubTreeActivationCheck = value;
    m_PageSubTreeActivationCheckIsSet = true;
}
bool ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::pageSubTreeActivationCheckIsSet() const
{
    return m_PageSubTreeActivationCheckIsSet;
}

void ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties::unsetPageSubTreeActivationCheck()
{
    m_PageSubTreeActivationCheckIsSet = false;
}

}
}
}
}
