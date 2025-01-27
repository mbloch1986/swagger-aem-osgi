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
 * ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoProperties.h
 *
 * 
 */

#ifndef ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoProperties_H_
#define ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoProperties
    : public ModelBase
{
public:
    ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoProperties();
    virtual ~ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getIsMemberCheck() const;
    void setIsMemberCheck(ConfigNodePropertyBoolean const& value);
    bool isMemberCheckIsSet() const;
    void unsetIsMemberCheck();

protected:
    ConfigNodePropertyBoolean m_IsMemberCheck;
    bool m_IsMemberCheckIsSet;
};

}
}
}
}

#endif /* ComAdobeCqSocialEnablementAdaptorsEnablementResourceAdaptorFactoProperties_H_ */
