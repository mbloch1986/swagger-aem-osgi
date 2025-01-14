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
pub struct ComAdobeCqCommercePimImplPageEventListenerProperties {
  #[serde(rename = "cq.commerce.pageeventlistener.enabled")]
  cq_commerce_pageeventlistener_enabled: Option<::models::ConfigNodePropertyBoolean>
}

impl ComAdobeCqCommercePimImplPageEventListenerProperties {
  pub fn new() -> ComAdobeCqCommercePimImplPageEventListenerProperties {
    ComAdobeCqCommercePimImplPageEventListenerProperties {
      cq_commerce_pageeventlistener_enabled: None
    }
  }

  pub fn set_cq_commerce_pageeventlistener_enabled(&mut self, cq_commerce_pageeventlistener_enabled: ::models::ConfigNodePropertyBoolean) {
    self.cq_commerce_pageeventlistener_enabled = Some(cq_commerce_pageeventlistener_enabled);
  }

  pub fn with_cq_commerce_pageeventlistener_enabled(mut self, cq_commerce_pageeventlistener_enabled: ::models::ConfigNodePropertyBoolean) -> ComAdobeCqCommercePimImplPageEventListenerProperties {
    self.cq_commerce_pageeventlistener_enabled = Some(cq_commerce_pageeventlistener_enabled);
    self
  }

  pub fn cq_commerce_pageeventlistener_enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.cq_commerce_pageeventlistener_enabled.as_ref()
  }

  pub fn reset_cq_commerce_pageeventlistener_enabled(&mut self) {
    self.cq_commerce_pageeventlistener_enabled = None;
  }

}



