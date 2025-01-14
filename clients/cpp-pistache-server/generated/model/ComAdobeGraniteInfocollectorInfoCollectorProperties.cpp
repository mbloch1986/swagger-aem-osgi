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


#include "ComAdobeGraniteInfocollectorInfoCollectorProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeGraniteInfocollectorInfoCollectorProperties::ComAdobeGraniteInfocollectorInfoCollectorProperties()
{
    m_Granite_infocollector_includeThreadDumpsIsSet = false;
    m_Granite_infocollector_includeHeapDumpIsSet = false;
    
}

ComAdobeGraniteInfocollectorInfoCollectorProperties::~ComAdobeGraniteInfocollectorInfoCollectorProperties()
{
}

void ComAdobeGraniteInfocollectorInfoCollectorProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeGraniteInfocollectorInfoCollectorProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Granite_infocollector_includeThreadDumpsIsSet)
    {
        val["granite.infocollector.includeThreadDumps"] = ModelBase::toJson(m_Granite_infocollector_includeThreadDumps);
    }
    if(m_Granite_infocollector_includeHeapDumpIsSet)
    {
        val["granite.infocollector.includeHeapDump"] = ModelBase::toJson(m_Granite_infocollector_includeHeapDump);
    }
    

    return val;
}

void ComAdobeGraniteInfocollectorInfoCollectorProperties::fromJson(nlohmann::json& val)
{
    if(val.find("granite.infocollector.includeThreadDumps") != val.end())
    {
        if(!val["granite.infocollector.includeThreadDumps"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["granite.infocollector.includeThreadDumps"]);
            setGraniteInfocollectorIncludeThreadDumps( newItem );
        }
        
    }
    if(val.find("granite.infocollector.includeHeapDump") != val.end())
    {
        if(!val["granite.infocollector.includeHeapDump"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["granite.infocollector.includeHeapDump"]);
            setGraniteInfocollectorIncludeHeapDump( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComAdobeGraniteInfocollectorInfoCollectorProperties::getGraniteInfocollectorIncludeThreadDumps() const
{
    return m_Granite_infocollector_includeThreadDumps;
}
void ComAdobeGraniteInfocollectorInfoCollectorProperties::setGraniteInfocollectorIncludeThreadDumps(ConfigNodePropertyBoolean const& value)
{
    m_Granite_infocollector_includeThreadDumps = value;
    m_Granite_infocollector_includeThreadDumpsIsSet = true;
}
bool ComAdobeGraniteInfocollectorInfoCollectorProperties::graniteInfocollectorIncludeThreadDumpsIsSet() const
{
    return m_Granite_infocollector_includeThreadDumpsIsSet;
}
void ComAdobeGraniteInfocollectorInfoCollectorProperties::unsetGranite_infocollector_includeThreadDumps()
{
    m_Granite_infocollector_includeThreadDumpsIsSet = false;
}
ConfigNodePropertyBoolean ComAdobeGraniteInfocollectorInfoCollectorProperties::getGraniteInfocollectorIncludeHeapDump() const
{
    return m_Granite_infocollector_includeHeapDump;
}
void ComAdobeGraniteInfocollectorInfoCollectorProperties::setGraniteInfocollectorIncludeHeapDump(ConfigNodePropertyBoolean const& value)
{
    m_Granite_infocollector_includeHeapDump = value;
    m_Granite_infocollector_includeHeapDumpIsSet = true;
}
bool ComAdobeGraniteInfocollectorInfoCollectorProperties::graniteInfocollectorIncludeHeapDumpIsSet() const
{
    return m_Granite_infocollector_includeHeapDumpIsSet;
}
void ComAdobeGraniteInfocollectorInfoCollectorProperties::unsetGranite_infocollector_includeHeapDump()
{
    m_Granite_infocollector_includeHeapDumpIsSet = false;
}

}
}
}
}

