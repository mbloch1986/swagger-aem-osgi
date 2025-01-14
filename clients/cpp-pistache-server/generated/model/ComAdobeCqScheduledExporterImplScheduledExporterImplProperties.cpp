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


#include "ComAdobeCqScheduledExporterImplScheduledExporterImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::ComAdobeCqScheduledExporterImplScheduledExporterImplProperties()
{
    m_Include_pathsIsSet = false;
    m_Exporter_userIsSet = false;
    
}

ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::~ComAdobeCqScheduledExporterImplScheduledExporterImplProperties()
{
}

void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Include_pathsIsSet)
    {
        val["include.paths"] = ModelBase::toJson(m_Include_paths);
    }
    if(m_Exporter_userIsSet)
    {
        val["exporter.user"] = ModelBase::toJson(m_Exporter_user);
    }
    

    return val;
}

void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("include.paths") != val.end())
    {
        if(!val["include.paths"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["include.paths"]);
            setIncludePaths( newItem );
        }
        
    }
    if(val.find("exporter.user") != val.end())
    {
        if(!val["exporter.user"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["exporter.user"]);
            setExporterUser( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::getIncludePaths() const
{
    return m_Include_paths;
}
void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::setIncludePaths(ConfigNodePropertyArray const& value)
{
    m_Include_paths = value;
    m_Include_pathsIsSet = true;
}
bool ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::includePathsIsSet() const
{
    return m_Include_pathsIsSet;
}
void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::unsetInclude_paths()
{
    m_Include_pathsIsSet = false;
}
ConfigNodePropertyString ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::getExporterUser() const
{
    return m_Exporter_user;
}
void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::setExporterUser(ConfigNodePropertyString const& value)
{
    m_Exporter_user = value;
    m_Exporter_userIsSet = true;
}
bool ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::exporterUserIsSet() const
{
    return m_Exporter_userIsSet;
}
void ComAdobeCqScheduledExporterImplScheduledExporterImplProperties::unsetExporter_user()
{
    m_Exporter_userIsSet = false;
}

}
}
}
}

