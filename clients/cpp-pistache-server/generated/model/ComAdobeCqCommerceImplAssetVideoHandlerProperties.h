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
 * ComAdobeCqCommerceImplAssetVideoHandlerProperties.h
 *
 * 
 */

#ifndef ComAdobeCqCommerceImplAssetVideoHandlerProperties_H_
#define ComAdobeCqCommerceImplAssetVideoHandlerProperties_H_


#include "ModelBase.h"

#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyString.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComAdobeCqCommerceImplAssetVideoHandlerProperties
    : public ModelBase
{
public:
    ComAdobeCqCommerceImplAssetVideoHandlerProperties();
    virtual ~ComAdobeCqCommerceImplAssetVideoHandlerProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComAdobeCqCommerceImplAssetVideoHandlerProperties members

    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyBoolean getCqCommerceAssetHandlerActive() const;
    void setCqCommerceAssetHandlerActive(ConfigNodePropertyBoolean const& value);
    bool cqCommerceAssetHandlerActiveIsSet() const;
    void unsetCq_commerce_asset_handler_active();
    /// <summary>
    /// 
    /// </summary>
    ConfigNodePropertyString getCqCommerceAssetHandlerName() const;
    void setCqCommerceAssetHandlerName(ConfigNodePropertyString const& value);
    bool cqCommerceAssetHandlerNameIsSet() const;
    void unsetCq_commerce_asset_handler_name();

protected:
    ConfigNodePropertyBoolean m_Cq_commerce_asset_handler_active;
    bool m_Cq_commerce_asset_handler_activeIsSet;
    ConfigNodePropertyString m_Cq_commerce_asset_handler_name;
    bool m_Cq_commerce_asset_handler_nameIsSet;
};

}
}
}
}

#endif /* ComAdobeCqCommerceImplAssetVideoHandlerProperties_H_ */
