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
pub struct ComAdobeCqUiWcmCommonsInternalServletsRteRteFilterServletFactProperties {
  #[serde(rename = "resource.types")]
  resource_types: Option<::models::ConfigNodePropertyArray>
}

impl ComAdobeCqUiWcmCommonsInternalServletsRteRteFilterServletFactProperties {
  pub fn new() -> ComAdobeCqUiWcmCommonsInternalServletsRteRteFilterServletFactProperties {
    ComAdobeCqUiWcmCommonsInternalServletsRteRteFilterServletFactProperties {
      resource_types: None
    }
  }

  pub fn set_resource_types(&mut self, resource_types: ::models::ConfigNodePropertyArray) {
    self.resource_types = Some(resource_types);
  }

  pub fn with_resource_types(mut self, resource_types: ::models::ConfigNodePropertyArray) -> ComAdobeCqUiWcmCommonsInternalServletsRteRteFilterServletFactProperties {
    self.resource_types = Some(resource_types);
    self
  }

  pub fn resource_types(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.resource_types.as_ref()
  }

  pub fn reset_resource_types(&mut self) {
    self.resource_types = None;
  }

}



