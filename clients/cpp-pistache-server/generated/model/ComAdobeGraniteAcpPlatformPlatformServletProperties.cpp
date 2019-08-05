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


#include "ComAdobeGraniteAcpPlatformPlatformServletProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteAcpPlatformPlatformServletProperties::ComAdobeGraniteAcpPlatformPlatformServletProperties()
{
    m_Query_limitIsSet = false;
    m_File_type_extension_mapIsSet = false;
    
}

ComAdobeGraniteAcpPlatformPlatformServletProperties::~ComAdobeGraniteAcpPlatformPlatformServletProperties()
{
}

void ComAdobeGraniteAcpPlatformPlatformServletProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteAcpPlatformPlatformServletProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Query_limitIsSet)
    {
        val["query.limit"] = ModelBase::toJson(m_Query_limit);
    }
    if(m_File_type_extension_mapIsSet)
    {
        val["file.type.extension.map"] = ModelBase::toJson(m_File_type_extension_map);
    }
    

    return val;
}

void ComAdobeGraniteAcpPlatformPlatformServletProperties::fromJson(nlohmann::json& val)
{
    if(val.find("query.limit") != val.end())
    {
        if(!val["query.limit"].is_null())
        {
            ConfigNodePropertyInteger newItem;
            newItem.fromJson(val["query.limit"]);
            setQueryLimit( newItem );
        }
        
    }
    if(val.find("file.type.extension.map") != val.end())
    {
        if(!val["file.type.extension.map"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["file.type.extension.map"]);
            setFileTypeExtensionMap( newItem );
        }
        
    }
    
}


ConfigNodePropertyInteger ComAdobeGraniteAcpPlatformPlatformServletProperties::getQueryLimit() const
{
    return m_Query_limit;
}
void ComAdobeGraniteAcpPlatformPlatformServletProperties::setQueryLimit(ConfigNodePropertyInteger const& value)
{
    m_Query_limit = value;
    m_Query_limitIsSet = true;
}
bool ComAdobeGraniteAcpPlatformPlatformServletProperties::queryLimitIsSet() const
{
    return m_Query_limitIsSet;
}
void ComAdobeGraniteAcpPlatformPlatformServletProperties::unsetQuery_limit()
{
    m_Query_limitIsSet = false;
}
ConfigNodePropertyArray ComAdobeGraniteAcpPlatformPlatformServletProperties::getFileTypeExtensionMap() const
{
    return m_File_type_extension_map;
}
void ComAdobeGraniteAcpPlatformPlatformServletProperties::setFileTypeExtensionMap(ConfigNodePropertyArray const& value)
{
    m_File_type_extension_map = value;
    m_File_type_extension_mapIsSet = true;
}
bool ComAdobeGraniteAcpPlatformPlatformServletProperties::fileTypeExtensionMapIsSet() const
{
    return m_File_type_extension_mapIsSet;
}
void ComAdobeGraniteAcpPlatformPlatformServletProperties::unsetFile_type_extension_map()
{
    m_File_type_extension_mapIsSet = false;
}

}
}
}
}
