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
pub struct ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties {
  #[serde(rename = "importer.name")]
  importer_name: Option<::models::ConfigNodePropertyArray>
}

impl ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties {
  pub fn new() -> ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties {
    ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties {
      importer_name: None
    }
  }

  pub fn set_importer_name(&mut self, importer_name: ::models::ConfigNodePropertyArray) {
    self.importer_name = Some(importer_name);
  }

  pub fn with_importer_name(mut self, importer_name: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteDistributionCoreImplDistributionToReplicationEvenProperties {
    self.importer_name = Some(importer_name);
    self
  }

  pub fn importer_name(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.importer_name.as_ref()
  }

  pub fn reset_importer_name(&mut self) {
    self.importer_name = None;
  }

}



