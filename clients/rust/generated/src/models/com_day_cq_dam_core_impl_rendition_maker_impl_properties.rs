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
pub struct ComDayCqDamCoreImplRenditionMakerImplProperties {
  #[serde(rename = "xmp.propagate")]
  xmp_propagate: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "xmp.excludes")]
  xmp_excludes: Option<::models::ConfigNodePropertyArray>
}

impl ComDayCqDamCoreImplRenditionMakerImplProperties {
  pub fn new() -> ComDayCqDamCoreImplRenditionMakerImplProperties {
    ComDayCqDamCoreImplRenditionMakerImplProperties {
      xmp_propagate: None,
      xmp_excludes: None
    }
  }

  pub fn set_xmp_propagate(&mut self, xmp_propagate: ::models::ConfigNodePropertyBoolean) {
    self.xmp_propagate = Some(xmp_propagate);
  }

  pub fn with_xmp_propagate(mut self, xmp_propagate: ::models::ConfigNodePropertyBoolean) -> ComDayCqDamCoreImplRenditionMakerImplProperties {
    self.xmp_propagate = Some(xmp_propagate);
    self
  }

  pub fn xmp_propagate(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.xmp_propagate.as_ref()
  }

  pub fn reset_xmp_propagate(&mut self) {
    self.xmp_propagate = None;
  }

  pub fn set_xmp_excludes(&mut self, xmp_excludes: ::models::ConfigNodePropertyArray) {
    self.xmp_excludes = Some(xmp_excludes);
  }

  pub fn with_xmp_excludes(mut self, xmp_excludes: ::models::ConfigNodePropertyArray) -> ComDayCqDamCoreImplRenditionMakerImplProperties {
    self.xmp_excludes = Some(xmp_excludes);
    self
  }

  pub fn xmp_excludes(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.xmp_excludes.as_ref()
  }

  pub fn reset_xmp_excludes(&mut self) {
    self.xmp_excludes = None;
  }

}



