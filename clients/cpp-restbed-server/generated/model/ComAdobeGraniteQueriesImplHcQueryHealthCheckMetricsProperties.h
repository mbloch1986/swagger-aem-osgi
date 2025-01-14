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
 * ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties_H_
#define ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties_H_



#include "ConfigNodePropertyInteger.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties
{
public:
    ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties();
    virtual ~ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getGetPeriod() const;
    void setGetPeriod(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyInteger> m_GetPeriod;
};

}
}
}
}

#endif /* ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties_H_ */
