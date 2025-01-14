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


#include "ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties::ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties()
{
    m_Cq_dam_drm_enableIsSet = false;
    
}

ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties::~ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties()
{
}

void ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Cq_dam_drm_enableIsSet)
    {
        val["cq.dam.drm.enable"] = ModelBase::toJson(m_Cq_dam_drm_enable);
    }
    

    return val;
}

void ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties::fromJson(nlohmann::json& val)
{
    if(val.find("cq.dam.drm.enable") != val.end())
    {
        if(!val["cq.dam.drm.enable"].is_null())
        {
            ConfigNodePropertyBoolean newItem;
            newItem.fromJson(val["cq.dam.drm.enable"]);
            setCqDamDrmEnable( newItem );
        }
        
    }
    
}


ConfigNodePropertyBoolean ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties::getCqDamDrmEnable() const
{
    return m_Cq_dam_drm_enable;
}
void ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties::setCqDamDrmEnable(ConfigNodePropertyBoolean const& value)
{
    m_Cq_dam_drm_enable = value;
    m_Cq_dam_drm_enableIsSet = true;
}
bool ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties::cqDamDrmEnableIsSet() const
{
    return m_Cq_dam_drm_enableIsSet;
}
void ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties::unsetCq_dam_drm_enable()
{
    m_Cq_dam_drm_enableIsSet = false;
}

}
}
}
}

