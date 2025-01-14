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
pub struct ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingProperties {
  #[serde(rename = "enabled")]
  enabled: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "fallbackPaths")]
  fallback_paths: Option<::models::ConfigNodePropertyArray>
}

impl ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingProperties {
  pub fn new() -> ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingProperties {
    ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingProperties {
      enabled: None,
      fallback_paths: None
    }
  }

  pub fn set_enabled(&mut self, enabled: ::models::ConfigNodePropertyBoolean) {
    self.enabled = Some(enabled);
  }

  pub fn with_enabled(mut self, enabled: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingProperties {
    self.enabled = Some(enabled);
    self
  }

  pub fn enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.enabled.as_ref()
  }

  pub fn reset_enabled(&mut self) {
    self.enabled = None;
  }

  pub fn set_fallback_paths(&mut self, fallback_paths: ::models::ConfigNodePropertyArray) {
    self.fallback_paths = Some(fallback_paths);
  }

  pub fn with_fallback_paths(mut self, fallback_paths: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteConfImplRuntimeAwareConfigurationResourceResolvingProperties {
    self.fallback_paths = Some(fallback_paths);
    self
  }

  pub fn fallback_paths(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.fallback_paths.as_ref()
  }

  pub fn reset_fallback_paths(&mut self) {
    self.fallback_paths = None;
  }

}



