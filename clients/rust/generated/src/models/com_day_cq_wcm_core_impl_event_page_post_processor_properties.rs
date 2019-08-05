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
pub struct ComDayCqWcmCoreImplEventPagePostProcessorProperties {
  #[serde(rename = "paths")]
  paths: Option<::models::ConfigNodePropertyArray>
}

impl ComDayCqWcmCoreImplEventPagePostProcessorProperties {
  pub fn new() -> ComDayCqWcmCoreImplEventPagePostProcessorProperties {
    ComDayCqWcmCoreImplEventPagePostProcessorProperties {
      paths: None
    }
  }

  pub fn set_paths(&mut self, paths: ::models::ConfigNodePropertyArray) {
    self.paths = Some(paths);
  }

  pub fn with_paths(mut self, paths: ::models::ConfigNodePropertyArray) -> ComDayCqWcmCoreImplEventPagePostProcessorProperties {
    self.paths = Some(paths);
    self
  }

  pub fn paths(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.paths.as_ref()
  }

  pub fn reset_paths(&mut self) {
    self.paths = None;
  }

}


