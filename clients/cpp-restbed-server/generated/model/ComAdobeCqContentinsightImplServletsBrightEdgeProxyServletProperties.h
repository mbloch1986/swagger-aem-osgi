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
 * ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties.h
 *
 * 
 */

#ifndef ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties_H_
#define ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties_H_



#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties
{
public:
    ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties();
    virtual ~ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getBrightedgeUrl() const;
    void setBrightedgeUrl(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Brightedge_url;
};

}
}
}
}

#endif /* ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties_H_ */
