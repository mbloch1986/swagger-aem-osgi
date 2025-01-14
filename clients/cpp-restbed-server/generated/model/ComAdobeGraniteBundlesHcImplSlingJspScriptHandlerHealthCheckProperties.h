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
 * ComAdobeGraniteBundlesHcImplSlingJspScriptHandlerHealthCheckProperties.h
 *
 * 
 */

#ifndef ComAdobeGraniteBundlesHcImplSlingJspScriptHandlerHealthCheckProperties_H_
#define ComAdobeGraniteBundlesHcImplSlingJspScriptHandlerHealthCheckProperties_H_



#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeGraniteBundlesHcImplSlingJspScriptHandlerHealthCheckProperties
{
public:
    ComAdobeGraniteBundlesHcImplSlingJspScriptHandlerHealthCheckProperties();
    virtual ~ComAdobeGraniteBundlesHcImplSlingJspScriptHandlerHealthCheckProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComAdobeGraniteBundlesHcImplSlingJspScriptHandlerHealthCheckProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getHcTags() const;
    void setHcTags(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Hc_tags;
};

}
}
}
}

#endif /* ComAdobeGraniteBundlesHcImplSlingJspScriptHandlerHealthCheckProperties_H_ */
