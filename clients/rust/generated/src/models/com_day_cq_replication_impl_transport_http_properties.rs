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
pub struct ComDayCqReplicationImplTransportHttpProperties {
  #[serde(rename = "disabled.cipher.suites")]
  disabled_cipher_suites: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "enabled.cipher.suites")]
  enabled_cipher_suites: Option<::models::ConfigNodePropertyArray>
}

impl ComDayCqReplicationImplTransportHttpProperties {
  pub fn new() -> ComDayCqReplicationImplTransportHttpProperties {
    ComDayCqReplicationImplTransportHttpProperties {
      disabled_cipher_suites: None,
      enabled_cipher_suites: None
    }
  }

  pub fn set_disabled_cipher_suites(&mut self, disabled_cipher_suites: ::models::ConfigNodePropertyArray) {
    self.disabled_cipher_suites = Some(disabled_cipher_suites);
  }

  pub fn with_disabled_cipher_suites(mut self, disabled_cipher_suites: ::models::ConfigNodePropertyArray) -> ComDayCqReplicationImplTransportHttpProperties {
    self.disabled_cipher_suites = Some(disabled_cipher_suites);
    self
  }

  pub fn disabled_cipher_suites(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.disabled_cipher_suites.as_ref()
  }

  pub fn reset_disabled_cipher_suites(&mut self) {
    self.disabled_cipher_suites = None;
  }

  pub fn set_enabled_cipher_suites(&mut self, enabled_cipher_suites: ::models::ConfigNodePropertyArray) {
    self.enabled_cipher_suites = Some(enabled_cipher_suites);
  }

  pub fn with_enabled_cipher_suites(mut self, enabled_cipher_suites: ::models::ConfigNodePropertyArray) -> ComDayCqReplicationImplTransportHttpProperties {
    self.enabled_cipher_suites = Some(enabled_cipher_suites);
    self
  }

  pub fn enabled_cipher_suites(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.enabled_cipher_suites.as_ref()
  }

  pub fn reset_enabled_cipher_suites(&mut self) {
    self.enabled_cipher_suites = None;
  }

}


