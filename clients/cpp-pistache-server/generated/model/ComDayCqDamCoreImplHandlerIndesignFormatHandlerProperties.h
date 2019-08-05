/**
* Adobe Experience Manager OSGI config (AEM) API
* Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
*
* OpenAPI spec version: 1.0.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties.h
 *
 * 
 */

#ifndef ComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties_H_
#define ComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyArray.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties
    : public ModelBase
{
public:
    ComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties();
    virtual ~ComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyArray getMimetype() const;
    void setMimetype(ConfigNodePropertyArray const& value);
    bool mimetypeIsSet() const;
    void unsetMimetype();

protected:
    ConfigNodePropertyArray m_Mimetype;
    bool m_MimetypeIsSet;
};

}
}
}
}

#endif /* ComDayCqDamCoreImplHandlerIndesignFormatHandlerProperties_H_ */