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
 * ComDayCqWcmCoreImplEventTemplatePostProcessorProperties.h
 *
 * 
 */

#ifndef ComDayCqWcmCoreImplEventTemplatePostProcessorProperties_H_
#define ComDayCqWcmCoreImplEventTemplatePostProcessorProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComDayCqWcmCoreImplEventTemplatePostProcessorProperties
    : public ModelBase
{
public:
    ComDayCqWcmCoreImplEventTemplatePostProcessorProperties();
    virtual ~ComDayCqWcmCoreImplEventTemplatePostProcessorProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComDayCqWcmCoreImplEventTemplatePostProcessorProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPaths() const;
    void setPaths(ConfigNodePropertyString const& value);
    bool pathsIsSet() const;
    void unsetPaths();

protected:
    ConfigNodePropertyString m_Paths;
    bool m_PathsIsSet;
};

}
}
}
}

#endif /* ComDayCqWcmCoreImplEventTemplatePostProcessorProperties_H_ */
