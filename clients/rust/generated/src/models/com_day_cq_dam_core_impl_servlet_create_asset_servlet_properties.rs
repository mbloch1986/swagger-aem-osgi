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
pub struct ComDayCqDamCoreImplServletCreateAssetServletProperties {
  #[serde(rename = "detect_duplicate")]
  detect_duplicate: Option<::models::ConfigNodePropertyBoolean>
}

impl ComDayCqDamCoreImplServletCreateAssetServletProperties {
  pub fn new() -> ComDayCqDamCoreImplServletCreateAssetServletProperties {
    ComDayCqDamCoreImplServletCreateAssetServletProperties {
      detect_duplicate: None
    }
  }

  pub fn set_detect_duplicate(&mut self, detect_duplicate: ::models::ConfigNodePropertyBoolean) {
    self.detect_duplicate = Some(detect_duplicate);
  }

  pub fn with_detect_duplicate(mut self, detect_duplicate: ::models::ConfigNodePropertyBoolean) -> ComDayCqDamCoreImplServletCreateAssetServletProperties {
    self.detect_duplicate = Some(detect_duplicate);
    self
  }

  pub fn detect_duplicate(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.detect_duplicate.as_ref()
  }

  pub fn reset_detect_duplicate(&mut self) {
    self.detect_duplicate = None;
  }

}



