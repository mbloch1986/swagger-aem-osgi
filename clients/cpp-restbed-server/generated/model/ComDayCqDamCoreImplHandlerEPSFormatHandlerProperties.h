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
 * ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties.h
 *
 * 
 */

#ifndef ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties_H_
#define ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties_H_



#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties
{
public:
    ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties();
    virtual ~ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getMimetype() const;
    void setMimetype(std::shared_ptr<ConfigNodePropertyString> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Mimetype;
};

}
}
}
}

#endif /* ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties_H_ */
