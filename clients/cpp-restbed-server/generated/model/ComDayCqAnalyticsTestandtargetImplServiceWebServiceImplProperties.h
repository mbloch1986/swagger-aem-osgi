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
 * ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplProperties.h
 *
 * 
 */

#ifndef ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplProperties_H_
#define ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplProperties_H_



#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplProperties
{
public:
    ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplProperties();
    virtual ~ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getEndpointUri() const;
    void setEndpointUri(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getConnectionTimeout() const;
    void setConnectionTimeout(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getSocketTimeout() const;
    void setSocketTimeout(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_EndpointUri;
    std::shared_ptr<ConfigNodePropertyInteger> m_ConnectionTimeout;
    std::shared_ptr<ConfigNodePropertyInteger> m_SocketTimeout;
};

}
}
}
}

#endif /* ComDayCqAnalyticsTestandtargetImplServiceWebServiceImplProperties_H_ */
