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
pub struct OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties {
  #[serde(rename = "maxItems")]
  max_items: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "maxPathDepth")]
  max_path_depth: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "enabled")]
  enabled: Option<::models::ConfigNodePropertyBoolean>
}

impl OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties {
  pub fn new() -> OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties {
    OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties {
      max_items: None,
      max_path_depth: None,
      enabled: None
    }
  }

  pub fn set_max_items(&mut self, max_items: ::models::ConfigNodePropertyInteger) {
    self.max_items = Some(max_items);
  }

  pub fn with_max_items(mut self, max_items: ::models::ConfigNodePropertyInteger) -> OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties {
    self.max_items = Some(max_items);
    self
  }

  pub fn max_items(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.max_items.as_ref()
  }

  pub fn reset_max_items(&mut self) {
    self.max_items = None;
  }

  pub fn set_max_path_depth(&mut self, max_path_depth: ::models::ConfigNodePropertyInteger) {
    self.max_path_depth = Some(max_path_depth);
  }

  pub fn with_max_path_depth(mut self, max_path_depth: ::models::ConfigNodePropertyInteger) -> OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties {
    self.max_path_depth = Some(max_path_depth);
    self
  }

  pub fn max_path_depth(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.max_path_depth.as_ref()
  }

  pub fn reset_max_path_depth(&mut self) {
    self.max_path_depth = None;
  }

  pub fn set_enabled(&mut self, enabled: ::models::ConfigNodePropertyBoolean) {
    self.enabled = Some(enabled);
  }

  pub fn with_enabled(mut self, enabled: ::models::ConfigNodePropertyBoolean) -> OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties {
    self.enabled = Some(enabled);
    self
  }

  pub fn enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.enabled.as_ref()
  }

  pub fn reset_enabled(&mut self) {
    self.enabled = None;
  }

}



