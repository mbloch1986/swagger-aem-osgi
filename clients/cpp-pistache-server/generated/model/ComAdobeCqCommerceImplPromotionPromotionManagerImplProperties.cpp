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


#include "ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties::ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties()
{
    m_Cq_commerce_promotion_rootIsSet = false;
    
}

ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties::~ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties()
{
}

void ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties::validate()
{
    // TODO: implement validation
}

nlohmann::json ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Cq_commerce_promotion_rootIsSet)
    {
        val["cq.commerce.promotion.root"] = ModelBase::toJson(m_Cq_commerce_promotion_root);
    }
    

    return val;
}

void ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties::fromJson(nlohmann::json& val)
{
    if(val.find("cq.commerce.promotion.root") != val.end())
    {
        if(!val["cq.commerce.promotion.root"].is_null())
        {
            ConfigNodePropertyString newItem;
            newItem.fromJson(val["cq.commerce.promotion.root"]);
            setCqCommercePromotionRoot( newItem );
        }
        
    }
    
}


ConfigNodePropertyString ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties::getCqCommercePromotionRoot() const
{
    return m_Cq_commerce_promotion_root;
}
void ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties::setCqCommercePromotionRoot(ConfigNodePropertyString const& value)
{
    m_Cq_commerce_promotion_root = value;
    m_Cq_commerce_promotion_rootIsSet = true;
}
bool ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties::cqCommercePromotionRootIsSet() const
{
    return m_Cq_commerce_promotion_rootIsSet;
}
void ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties::unsetCq_commerce_promotion_root()
{
    m_Cq_commerce_promotion_rootIsSet = false;
}

}
}
}
}

