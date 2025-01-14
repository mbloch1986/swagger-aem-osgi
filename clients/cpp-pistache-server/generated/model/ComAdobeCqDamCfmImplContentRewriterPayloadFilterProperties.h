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
 * ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties.h
 *
 * 
 */

#ifndef ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties_H_
#define ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties
    : public ModelBase
{
public:
    ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties();
    virtual ~ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getPipelineType() const;
    void setPipelineType(ConfigNodePropertyString const& value);
    bool pipelineTypeIsSet() const;
    void unsetPipeline_type();

protected:
    ConfigNodePropertyString m_Pipeline_type;
    bool m_Pipeline_typeIsSet;
};

}
}
}
}

#endif /* ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties_H_ */
