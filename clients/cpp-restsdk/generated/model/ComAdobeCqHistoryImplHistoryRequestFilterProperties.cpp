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



#include "ComAdobeCqHistoryImplHistoryRequestFilterProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ComAdobeCqHistoryImplHistoryRequestFilterProperties::ComAdobeCqHistoryImplHistoryRequestFilterProperties()
{
    m_History_requestFilter_excludedSelectorsIsSet = false;
    m_History_requestFilter_excludedExtensionsIsSet = false;
}

ComAdobeCqHistoryImplHistoryRequestFilterProperties::~ComAdobeCqHistoryImplHistoryRequestFilterProperties()
{
}

void ComAdobeCqHistoryImplHistoryRequestFilterProperties::validate()
{
    // TODO: implement validation
}

web::json::value ComAdobeCqHistoryImplHistoryRequestFilterProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_History_requestFilter_excludedSelectorsIsSet)
    {
        val[utility::conversions::to_string_t("history.requestFilter.excludedSelectors")] = ModelBase::toJson(m_History_requestFilter_excludedSelectors);
    }
    if(m_History_requestFilter_excludedExtensionsIsSet)
    {
        val[utility::conversions::to_string_t("history.requestFilter.excludedExtensions")] = ModelBase::toJson(m_History_requestFilter_excludedExtensions);
    }

    return val;
}

void ComAdobeCqHistoryImplHistoryRequestFilterProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("history.requestFilter.excludedSelectors")))
    {
        if(!val[utility::conversions::to_string_t("history.requestFilter.excludedSelectors")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("history.requestFilter.excludedSelectors")]);
            setHistoryRequestFilterExcludedSelectors( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("history.requestFilter.excludedExtensions")))
    {
        if(!val[utility::conversions::to_string_t("history.requestFilter.excludedExtensions")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromJson(val[utility::conversions::to_string_t("history.requestFilter.excludedExtensions")]);
            setHistoryRequestFilterExcludedExtensions( newItem );
        }
    }
}

void ComAdobeCqHistoryImplHistoryRequestFilterProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_History_requestFilter_excludedSelectorsIsSet)
    {
        if (m_History_requestFilter_excludedSelectors.get())
        {
            m_History_requestFilter_excludedSelectors->toMultipart(multipart, utility::conversions::to_string_t("history.requestFilter.excludedSelectors."));
        }
    }
    if(m_History_requestFilter_excludedExtensionsIsSet)
    {
        if (m_History_requestFilter_excludedExtensions.get())
        {
            m_History_requestFilter_excludedExtensions->toMultipart(multipart, utility::conversions::to_string_t("history.requestFilter.excludedExtensions."));
        }
    }
}

void ComAdobeCqHistoryImplHistoryRequestFilterProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("history.requestFilter.excludedSelectors")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("history.requestFilter.excludedSelectors")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("history.requestFilter.excludedSelectors."));
            setHistoryRequestFilterExcludedSelectors( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("history.requestFilter.excludedExtensions")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("history.requestFilter.excludedExtensions")))
        {
            std::shared_ptr<ConfigNodePropertyArray> newItem(new ConfigNodePropertyArray());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("history.requestFilter.excludedExtensions."));
            setHistoryRequestFilterExcludedExtensions( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqHistoryImplHistoryRequestFilterProperties::getHistoryRequestFilterExcludedSelectors() const
{
    return m_History_requestFilter_excludedSelectors;
}


void ComAdobeCqHistoryImplHistoryRequestFilterProperties::setHistoryRequestFilterExcludedSelectors(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_History_requestFilter_excludedSelectors = value;
    m_History_requestFilter_excludedSelectorsIsSet = true;
}
bool ComAdobeCqHistoryImplHistoryRequestFilterProperties::historyRequestFilterExcludedSelectorsIsSet() const
{
    return m_History_requestFilter_excludedSelectorsIsSet;
}

void ComAdobeCqHistoryImplHistoryRequestFilterProperties::unsetHistory_requestFilter_excludedSelectors()
{
    m_History_requestFilter_excludedSelectorsIsSet = false;
}

std::shared_ptr<ConfigNodePropertyArray> ComAdobeCqHistoryImplHistoryRequestFilterProperties::getHistoryRequestFilterExcludedExtensions() const
{
    return m_History_requestFilter_excludedExtensions;
}


void ComAdobeCqHistoryImplHistoryRequestFilterProperties::setHistoryRequestFilterExcludedExtensions(std::shared_ptr<ConfigNodePropertyArray> value)
{
    m_History_requestFilter_excludedExtensions = value;
    m_History_requestFilter_excludedExtensionsIsSet = true;
}
bool ComAdobeCqHistoryImplHistoryRequestFilterProperties::historyRequestFilterExcludedExtensionsIsSet() const
{
    return m_History_requestFilter_excludedExtensionsIsSet;
}

void ComAdobeCqHistoryImplHistoryRequestFilterProperties::unsetHistory_requestFilter_excludedExtensions()
{
    m_History_requestFilter_excludedExtensionsIsSet = false;
}

}
}
}
}

