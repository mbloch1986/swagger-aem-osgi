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



#include "OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties()
{
    m_Osgi_http_whiteboard_servlet_patternIsSet = false;
    m_Osgi_http_whiteboard_context_selectIsSet = false;
}

OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::~OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties()
{
}

void OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::validate()
{
    // TODO: implement validation
}

web::json::value OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Osgi_http_whiteboard_servlet_patternIsSet)
    {
        val[utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern")] = ModelBase::toJson(m_Osgi_http_whiteboard_servlet_pattern);
    }
    if(m_Osgi_http_whiteboard_context_selectIsSet)
    {
        val[utility::conversions::to_string_t("osgi.http.whiteboard.context.select")] = ModelBase::toJson(m_Osgi_http_whiteboard_context_select);
    }

    return val;
}

void OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern")))
    {
        if(!val[utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern")]);
            setOsgiHttpWhiteboardServletPattern( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("osgi.http.whiteboard.context.select")))
    {
        if(!val[utility::conversions::to_string_t("osgi.http.whiteboard.context.select")].is_null())
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromJson(val[utility::conversions::to_string_t("osgi.http.whiteboard.context.select")]);
            setOsgiHttpWhiteboardContextSelect( newItem );
        }
    }
}

void OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Osgi_http_whiteboard_servlet_patternIsSet)
    {
        if (m_Osgi_http_whiteboard_servlet_pattern.get())
        {
            m_Osgi_http_whiteboard_servlet_pattern->toMultipart(multipart, utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern."));
        }
    }
    if(m_Osgi_http_whiteboard_context_selectIsSet)
    {
        if (m_Osgi_http_whiteboard_context_select.get())
        {
            m_Osgi_http_whiteboard_context_select->toMultipart(multipart, utility::conversions::to_string_t("osgi.http.whiteboard.context.select."));
        }
    }
}

void OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("osgi.http.whiteboard.servlet.pattern."));
            setOsgiHttpWhiteboardServletPattern( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("osgi.http.whiteboard.context.select")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("osgi.http.whiteboard.context.select")))
        {
            std::shared_ptr<ConfigNodePropertyString> newItem(new ConfigNodePropertyString());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("osgi.http.whiteboard.context.select."));
            setOsgiHttpWhiteboardContextSelect( newItem );
        }
    }
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::getOsgiHttpWhiteboardServletPattern() const
{
    return m_Osgi_http_whiteboard_servlet_pattern;
}


void OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::setOsgiHttpWhiteboardServletPattern(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Osgi_http_whiteboard_servlet_pattern = value;
    m_Osgi_http_whiteboard_servlet_patternIsSet = true;
}
bool OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::osgiHttpWhiteboardServletPatternIsSet() const
{
    return m_Osgi_http_whiteboard_servlet_patternIsSet;
}

void OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::unsetOsgi_http_whiteboard_servlet_pattern()
{
    m_Osgi_http_whiteboard_servlet_patternIsSet = false;
}

std::shared_ptr<ConfigNodePropertyString> OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::getOsgiHttpWhiteboardContextSelect() const
{
    return m_Osgi_http_whiteboard_context_select;
}


void OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::setOsgiHttpWhiteboardContextSelect(std::shared_ptr<ConfigNodePropertyString> value)
{
    m_Osgi_http_whiteboard_context_select = value;
    m_Osgi_http_whiteboard_context_selectIsSet = true;
}
bool OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::osgiHttpWhiteboardContextSelectIsSet() const
{
    return m_Osgi_http_whiteboard_context_selectIsSet;
}

void OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::unsetOsgi_http_whiteboard_context_select()
{
    m_Osgi_http_whiteboard_context_selectIsSet = false;
}

}
}
}
}

