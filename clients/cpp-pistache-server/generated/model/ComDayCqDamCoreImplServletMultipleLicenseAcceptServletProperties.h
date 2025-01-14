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
/*
 * ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties.h
 *
 * 
 */

#ifndef ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties_H_
#define ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties
    : public ModelBase
{
public:
    ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties();
    virtual ~ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getCqDamDrmEnable() const;
    void setCqDamDrmEnable(ConfigNodePropertyBoolean const& value);
    bool cqDamDrmEnableIsSet() const;
    void unsetCq_dam_drm_enable();

protected:
    ConfigNodePropertyBoolean m_Cq_dam_drm_enable;
    bool m_Cq_dam_drm_enableIsSet;
};

}
}
}
}

#endif /* ComDayCqDamCoreImplServletMultipleLicenseAcceptServletProperties_H_ */
