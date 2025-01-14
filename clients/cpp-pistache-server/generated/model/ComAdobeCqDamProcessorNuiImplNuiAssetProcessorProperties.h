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
 * ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties.h
 *
 * 
 */

#ifndef ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties_H_
#define ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties
    : public ModelBase
{
public:
    ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties();
    virtual ~ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getNuiEnabled() const;
    void setNuiEnabled(ConfigNodePropertyBoolean const& value);
    bool nuiEnabledIsSet() const;
    void unsetNuiEnabled();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getNuiServiceUrl() const;
    void setNuiServiceUrl(ConfigNodePropertyString const& value);
    bool nuiServiceUrlIsSet() const;
    void unsetNuiServiceUrl();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getNuiApiKey() const;
    void setNuiApiKey(ConfigNodePropertyString const& value);
    bool nuiApiKeyIsSet() const;
    void unsetNuiApiKey();

protected:
    ConfigNodePropertyBoolean m_NuiEnabled;
    bool m_NuiEnabledIsSet;
    ConfigNodePropertyString m_NuiServiceUrl;
    bool m_NuiServiceUrlIsSet;
    ConfigNodePropertyString m_NuiApiKey;
    bool m_NuiApiKeyIsSet;
};

}
}
}
}

#endif /* ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties_H_ */
