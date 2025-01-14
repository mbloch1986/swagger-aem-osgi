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
 * ComDayCqDamHandlerFfmpegLocatorImplProperties.h
 *
 * 
 */

#ifndef ComDayCqDamHandlerFfmpegLocatorImplProperties_H_
#define ComDayCqDamHandlerFfmpegLocatorImplProperties_H_



#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamHandlerFfmpegLocatorImplProperties
{
public:
    ComDayCqDamHandlerFfmpegLocatorImplProperties();
    virtual ~ComDayCqDamHandlerFfmpegLocatorImplProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqDamHandlerFfmpegLocatorImplProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getExecutableSearchpath() const;
    void setExecutableSearchpath(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Executable_searchpath;
};

}
}
}
}

#endif /* ComDayCqDamHandlerFfmpegLocatorImplProperties_H_ */
