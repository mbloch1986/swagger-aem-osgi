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


#include "ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties::ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties()
{
    m_Xmphandler_cq_formatsIsSet = false;
    
}

ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties::~ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties()
{
}

void ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Xmphandler_cq_formatsIsSet)
    {
        val["xmphandler.cq.formats"] = ModelBase::toJson(m_Xmphandler_cq_formats);
    }
    

    return val;
}

void ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties::fromJson(nlohmann::json& val)
{
    if(val.find("xmphandler.cq.formats") != val.end())
    {
        if(!val["xmphandler.cq.formats"].is_null())
        {
            ConfigNodePropertyArray newItem;
            newItem.fromJson(val["xmphandler.cq.formats"]);
            setXmphandlerCqFormats( newItem );
        }
        
    }
    
}


ConfigNodePropertyArray ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties::getXmphandlerCqFormats() const
{
    return m_Xmphandler_cq_formats;
}
void ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties::setXmphandlerCqFormats(ConfigNodePropertyArray const& value)
{
    m_Xmphandler_cq_formats = value;
    m_Xmphandler_cq_formatsIsSet = true;
}
bool ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties::xmphandlerCqFormatsIsSet() const
{
    return m_Xmphandler_cq_formatsIsSet;
}
void ComDayCqDamCoreImplHandlerXmpNCommXMPHandlerProperties::unsetXmphandler_cq_formats()
{
    m_Xmphandler_cq_formatsIsSet = false;
}

}
}
}
}

