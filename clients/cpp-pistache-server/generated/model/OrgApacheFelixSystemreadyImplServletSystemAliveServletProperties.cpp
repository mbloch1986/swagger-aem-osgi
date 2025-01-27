/**
* Adobe Experience Manager OSGI config (AEM) API
* Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
*
* OpenAPI spec version: 1.0.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties.h"

namespace org {
namespace openapitools {
namespace server {
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

nlohmann::json OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Osgi_http_whiteboard_servlet_patternIsSet)
    {
        val["osgi.http.whiteboard.servlet.pattern"] = ModelBase::toJson(m_Osgi_http_whiteboard_servlet_pattern);
    }
    if(m_Osgi_http_whiteboard_context_selectIsSet)
    {
        val["osgi.http.whiteboard.context.select"] = ModelBase::toJson(m_Osgi_http_whiteboard_context_select);
    }
    

    return val;
}

void OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::fromJson(nlohmann::json& val)
{
    if(val.find("osgi.http.whiteboard.servlet.pattern") != val.end())
    {
        if(!val["osgi.http.whiteboard.servlet.pattern"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["osgi.http.whiteboard.servlet.pattern"]);
            setOsgiHttpWhiteboardServletPattern( newItem );
        }
        
    }
    if(val.find("osgi.http.whiteboard.context.select") != val.end())
    {
        if(!val["osgi.http.whiteboard.context.select"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["osgi.http.whiteboard.context.select"]);
            setOsgiHttpWhiteboardContextSelect( newItem );
        }
        
    }
    
}


ConfigNodePropertyString OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::getOsgiHttpWhiteboardServletPattern() const
{
    return m_Osgi_http_whiteboard_servlet_pattern;
}
void OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::setOsgiHttpWhiteboardServletPattern(ConfigNodePropertyString const& value)
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
ConfigNodePropertyString OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::getOsgiHttpWhiteboardContextSelect() const
{
    return m_Osgi_http_whiteboard_context_select;
}
void OrgApacheFelixSystemreadyImplServletSystemAliveServletProperties::setOsgiHttpWhiteboardContextSelect(ConfigNodePropertyString const& value)
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

