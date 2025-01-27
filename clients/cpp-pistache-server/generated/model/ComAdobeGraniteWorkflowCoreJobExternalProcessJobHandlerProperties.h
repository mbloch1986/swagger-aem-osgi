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
 * ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties_H_
#define ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyInteger.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties
    : public ModelBase
{
public:
    ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties();
    virtual ~ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getDefaultTimeout() const;
    void setDefaultTimeout(ConfigNodePropertyInteger const& value);
    bool defaultTimeoutIsSet() const;
    void unsetDefault_timeout();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getMaxTimeout() const;
    void setMaxTimeout(ConfigNodePropertyInteger const& value);
    bool maxTimeoutIsSet() const;
    void unsetMax_timeout();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyInteger getDefaultPeriod() const;
    void setDefaultPeriod(ConfigNodePropertyInteger const& value);
    bool defaultPeriodIsSet() const;
    void unsetDefault_period();

protected:
    ConfigNodePropertyInteger m_Default_timeout;
    bool m_Default_timeoutIsSet;
    ConfigNodePropertyInteger m_Max_timeout;
    bool m_Max_timeoutIsSet;
    ConfigNodePropertyInteger m_Default_period;
    bool m_Default_periodIsSet;
};

}
}
}
}

#endif /* ComAdobeGraniteWorkflowCoreJobExternalProcessJobHandlerProperties_H_ */
