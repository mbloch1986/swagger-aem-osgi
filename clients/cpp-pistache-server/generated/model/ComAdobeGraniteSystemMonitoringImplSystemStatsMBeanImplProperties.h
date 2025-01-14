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
 * ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties_H_
#define ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties
    : public ModelBase
{
public:
    ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties();
    virtual ~ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getSchedulerExpression() const;
    void setSchedulerExpression(ConfigNodePropertyString const& value);
    bool schedulerExpressionIsSet() const;
    void unsetScheduler_expression();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getJmxObjectname() const;
    void setJmxObjectname(ConfigNodePropertyString const& value);
    bool jmxObjectnameIsSet() const;
    void unsetJmx_objectname();

protected:
    ConfigNodePropertyString m_Scheduler_expression;
    bool m_Scheduler_expressionIsSet;
    ConfigNodePropertyString m_Jmx_objectname;
    bool m_Jmx_objectnameIsSet;
};

}
}
}
}

#endif /* ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties_H_ */
