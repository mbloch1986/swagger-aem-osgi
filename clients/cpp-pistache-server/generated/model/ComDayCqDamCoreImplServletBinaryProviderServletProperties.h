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
 * ComDayCqDamCoreImplServletBinaryProviderServletProperties.h
 *
 * 
 */

#ifndef ComDayCqDamCoreImplServletBinaryProviderServletProperties_H_
#define ComDayCqDamCoreImplServletBinaryProviderServletProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCoreImplServletBinaryProviderServletProperties
    : public ModelBase
{
public:
    ComDayCqDamCoreImplServletBinaryProviderServletProperties();
    virtual ~ComDayCqDamCoreImplServletBinaryProviderServletProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplServletBinaryProviderServletProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getSlingServletResourceTypes() const;
    void setSlingServletResourceTypes(ConfigNodePropertyArray const& value);
    bool slingServletResourceTypesIsSet() const;
    void unsetSling_servlet_resourceTypes();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getSlingServletMethods() const;
    void setSlingServletMethods(ConfigNodePropertyArray const& value);
    bool slingServletMethodsIsSet() const;
    void unsetSling_servlet_methods();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getCqDamDrmEnable() const;
    void setCqDamDrmEnable(ConfigNodePropertyBoolean const& value);
    bool cqDamDrmEnableIsSet() const;
    void unsetCq_dam_drm_enable();

protected:
    ConfigNodePropertyArray m_Sling_servlet_resourceTypes;
    bool m_Sling_servlet_resourceTypesIsSet;
    ConfigNodePropertyArray m_Sling_servlet_methods;
    bool m_Sling_servlet_methodsIsSet;
    ConfigNodePropertyBoolean m_Cq_dam_drm_enable;
    bool m_Cq_dam_drm_enableIsSet;
};

}
}
}
}

#endif /* ComDayCqDamCoreImplServletBinaryProviderServletProperties_H_ */
