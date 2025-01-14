/* 
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties {
  #[serde(rename = "cq.commerce.promotion.root")]
  cq_commerce_promotion_root: Option<::models::ConfigNodePropertyString>
}

impl ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties {
  pub fn new() -> ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties {
    ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties {
      cq_commerce_promotion_root: None
    }
  }

  pub fn set_cq_commerce_promotion_root(&mut self, cq_commerce_promotion_root: ::models::ConfigNodePropertyString) {
    self.cq_commerce_promotion_root = Some(cq_commerce_promotion_root);
  }

  pub fn with_cq_commerce_promotion_root(mut self, cq_commerce_promotion_root: ::models::ConfigNodePropertyString) -> ComAdobeCqCommerceImplPromotionPromotionManagerImplProperties {
    self.cq_commerce_promotion_root = Some(cq_commerce_promotion_root);
    self
  }

  pub fn cq_commerce_promotion_root(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.cq_commerce_promotion_root.as_ref()
  }

  pub fn reset_cq_commerce_promotion_root(&mut self) {
    self.cq_commerce_promotion_root = None;
  }

}



