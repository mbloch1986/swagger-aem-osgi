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
 * ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties_H_
#define ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties();
    virtual ~ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getEnableFallback() const;
    void setEnableFallback(ConfigNodePropertyBoolean const& value);
    bool enableFallbackIsSet() const;
    void unsetEnableFallback();

protected:
    ConfigNodePropertyBoolean m_EnableFallback;
    bool m_EnableFallbackIsSet;
};

}
}
}
}

#endif /* ComAdobeCqSocialServiceusersInternalImplServiceUserWrapperImplProperties_H_ */