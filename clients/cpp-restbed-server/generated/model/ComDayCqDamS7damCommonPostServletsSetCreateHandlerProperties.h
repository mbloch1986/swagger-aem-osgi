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
 * ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties.h
 *
 * 
 */

#ifndef ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties_H_
#define ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties_H_



#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties
{
public:
    ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties();
    virtual ~ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSlingPostOperation() const;
    void setSlingPostOperation(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getSlingServletMethods() const;
    void setSlingServletMethods(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Sling_post_operation;
    std::shared_ptr<ConfigNodePropertyString> m_Sling_servlet_methods;
};

}
}
}
}

#endif /* ComDayCqDamS7damCommonPostServletsSetCreateHandlerProperties_H_ */