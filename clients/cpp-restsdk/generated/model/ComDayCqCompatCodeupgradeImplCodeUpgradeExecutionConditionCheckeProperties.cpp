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



#include "ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties()
{
    m_CodeupgradetasksIsSet = false;
    m_CodeupgradetaskfiltersIsSet = false;
}

ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::~ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties()
{
}

void ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CodeupgradetasksIsSet)
    {
        val[utility::conversions::to_string_t("codeupgradetasks")] = ModelBase::toJson(m_Codeupgradetasks);
    }
    if(m_CodeupgradetaskfiltersIsSet)
    {
        val[utility::conversions::to_string_t("codeupgradetaskfilters")] = ModelBase::toJson(m_Codeupgradetaskfilters);
    }

    return val;
}

void ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("codeupgradetasks")))
    {
        if(!val[utility::conversions::to_string_t("codeupgradetasks")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("codeupgradetasks")]);
            setCodeupgradetasks( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codeupgradetaskfilters")))
    {
        if(!val[utility::conversions::to_string_t("codeupgradetaskfilters")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("codeupgradetaskfilters")]);
            setCodeupgradetaskfilters( newItem );
        }
    }
}

void ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CodeupgradetasksIsSet)
    {
        if (m_Codeupgradetasks.get())
        {
            m_Codeupgradetasks->toMultipart(multipart, utility::conversions::to_string_t("codeupgradetasks."));
        }
    }
    if(m_CodeupgradetaskfiltersIsSet)
    {
        if (m_Codeupgradetaskfilters.get())
        {
            m_Codeupgradetaskfilters->toMultipart(multipart, utility::conversions::to_string_t("codeupgradetaskfilters."));
        }
    }
}

void ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("codeupgradetasks")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("codeupgradetasks")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("codeupgradetasks."));
            setCodeupgradetasks( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("codeupgradetaskfilters")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("codeupgradetaskfilters")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("codeupgradetaskfilters."));
            setCodeupgradetaskfilters( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::getCodeupgradetasks() const
{
    return m_Codeupgradetasks;
}


void ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::setCodeupgradetasks(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Codeupgradetasks = value;
    m_CodeupgradetasksIsSet = true;
}
bool ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::codeupgradetasksIsSet() const
{
    return m_CodeupgradetasksIsSet;
}

void ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::unsetCodeupgradetasks()
{
    m_CodeupgradetasksIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::getCodeupgradetaskfilters() const
{
    return m_Codeupgradetaskfilters;
}


void ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::setCodeupgradetaskfilters(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_Codeupgradetaskfilters = value;
    m_CodeupgradetaskfiltersIsSet = true;
}
bool ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::codeupgradetaskfiltersIsSet() const
{
    return m_CodeupgradetaskfiltersIsSet;
}

void ComDayCqCompatCodeupgradeImplCodeUpgradeExecutionConditionCheckeProperties::unsetCodeupgradetaskfilters()
{
    m_CodeupgradetaskfiltersIsSet = false;
}

}
}
}
}

