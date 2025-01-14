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
 * ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties.h
 *
 * 
 */

#ifndef ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties_H_
#define ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties
    : public ModelBase
{
public:
    ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties();
    virtual ~ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getCqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled() const;
    void setCqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabled(ConfigNodePropertyBoolean const& value);
    bool cqAnalyticsTestandtargetDeleteauthoractivitylistenerEnabledIsSet() const;
    void unsetCq_analytics_testandtarget_deleteauthoractivitylistener_enabled();

protected:
    ConfigNodePropertyBoolean m_Cq_analytics_testandtarget_deleteauthoractivitylistener_enabled;
    bool m_Cq_analytics_testandtarget_deleteauthoractivitylistener_enabledIsSet;
};

}
}
}
}

#endif /* ComDayCqAnalyticsTestandtargetImplDeleteAuthorActivityListenerProperties_H_ */
