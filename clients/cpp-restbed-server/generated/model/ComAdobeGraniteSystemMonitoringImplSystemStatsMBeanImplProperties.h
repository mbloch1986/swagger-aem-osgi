/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
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



#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties
{
public:
    ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties();
    virtual ~ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSchedulerExpression() const;
    void setSchedulerExpression(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getJmxObjectname() const;
    void setJmxObjectname(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Scheduler_expression;
    std::shared_ptr<ConfigNodePropertyString> m_Jmx_objectname;
};

}
}
}
}

#endif /* ComAdobeGraniteSystemMonitoringImplSystemStatsMBeanImplProperties_H_ */
