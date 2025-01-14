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
 * ComDayCqDamS7damCommonServletsS7damProductInfoServletProperties.h
 *
 * 
 */

#ifndef ComDayCqDamS7damCommonServletsS7damProductInfoServletProperties_H_
#define ComDayCqDamS7damCommonServletsS7damProductInfoServletProperties_H_



#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamS7damCommonServletsS7damProductInfoServletProperties
{
public:
    ComDayCqDamS7damCommonServletsS7damProductInfoServletProperties();
    virtual ~ComDayCqDamS7damCommonServletsS7damProductInfoServletProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqDamS7damCommonServletsS7damProductInfoServletProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSlingServletPaths() const;
    void setSlingServletPaths(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSlingServletMethods() const;
    void setSlingServletMethods(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Sling_servlet_paths;
    std::shared_ptr<ConfigNodePropertyString> m_Sling_servlet_methods;
};

}
}
}
}

#endif /* ComDayCqDamS7damCommonServletsS7damProductInfoServletProperties_H_ */
