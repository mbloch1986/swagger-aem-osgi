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
 * ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties.h
 *
 * 
 */

#ifndef ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties_H_
#define ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyDropDown.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties
    : public ModelBase
{
public:
    ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties();
    virtual ~ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyDropDown getTempStorageConfig() const;
    void setTempStorageConfig(ConfigNodePropertyDropDown const& value);
    bool tempStorageConfigIsSet() const;
    void unsetTempStorageConfig();

protected:
    ConfigNodePropertyDropDown m_TempStorageConfig;
    bool m_TempStorageConfigIsSet;
};

}
}
}
}

#endif /* ComAdobeFormsCommonServiceImplFormsCommonConfigurationServiceImpProperties_H_ */
