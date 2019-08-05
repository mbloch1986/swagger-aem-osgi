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
 * ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties.h
 *
 * 
 */

#ifndef ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties_H_
#define ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties
    : public ModelBase
{
public:
    ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties();
    virtual ~ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getMimetype() const;
    void setMimetype(ConfigNodePropertyString const& value);
    bool mimetypeIsSet() const;
    void unsetMimetype();

protected:
    ConfigNodePropertyString m_Mimetype;
    bool m_MimetypeIsSet;
};

}
}
}
}

#endif /* ComDayCqDamCoreImplHandlerEPSFormatHandlerProperties_H_ */