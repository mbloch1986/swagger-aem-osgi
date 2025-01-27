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
 * ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties.h
 *
 * 
 */

#ifndef ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties_H_
#define ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties_H_



#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties
{
public:
    ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties();
    virtual ~ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties members
    
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

#endif /* ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties_H_ */
