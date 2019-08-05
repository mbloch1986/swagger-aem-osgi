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
 * ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties.h
 *
 * 
 */

#ifndef ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties_H_
#define ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties
    : public ModelBase
{
public:
    ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties();
    virtual ~ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getCqCommercePromotionRoot() const;
    void setCqCommercePromotionRoot(ConfigNodePropertyString const& value);
    bool cqCommercePromotionRootIsSet() const;
    void unsetCq_commerce_promotion_root();

protected:
    ConfigNodePropertyString m_Cq_commerce_promotion_root;
    bool m_Cq_commerce_promotion_rootIsSet;
};

}
}
}
}

#endif /* ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties_H_ */