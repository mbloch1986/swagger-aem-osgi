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
 * ComDayCqImageInternalFontFontHelperProperties.h
 *
 * 
 */

#ifndef ComDayCqImageInternalFontFontHelperProperties_H_
#define ComDayCqImageInternalFontFontHelperProperties_H_



#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqImageInternalFontFontHelperProperties
{
public:
    ComDayCqImageInternalFontFontHelperProperties();
    virtual ~ComDayCqImageInternalFontFontHelperProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqImageInternalFontFontHelperProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getFontpath() const;
    void setFontpath(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOversamplingFactor() const;
    void setOversamplingFactor(std::shared_ptr<ConfigNodePropertyInteger> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Fontpath;
    std::shared_ptr<ConfigNodePropertyInteger> m_OversamplingFactor;
};

}
}
}
}

#endif /* ComDayCqImageInternalFontFontHelperProperties_H_ */