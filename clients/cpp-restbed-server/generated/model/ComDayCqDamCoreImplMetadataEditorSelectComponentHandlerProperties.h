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
 * ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties.h
 *
 * 
 */

#ifndef ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties_H_
#define ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties_H_



#include "ConfigNodePropertyArray.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties
{
public:
    ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties();
    virtual ~ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getGranitedata() const;
    void setGranitedata(std::shared_ptr<ConfigNodePropertyArray> value);

protected:
    std::shared_ptr<ConfigNodePropertyArray> m_Granitedata;
};

}
}
}
}

#endif /* ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties_H_ */
