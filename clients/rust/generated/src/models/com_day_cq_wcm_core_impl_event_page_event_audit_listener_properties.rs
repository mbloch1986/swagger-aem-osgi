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
pub struct ComDayCqWcmCoreImplEventPageEventAuditListenerProperties {
  #[serde(rename = "configured")]
  configured: Option<::models::ConfigNodePropertyString>
}

impl ComDayCqWcmCoreImplEventPageEventAuditListenerProperties {
  pub fn new() -> ComDayCqWcmCoreImplEventPageEventAuditListenerProperties {
    ComDayCqWcmCoreImplEventPageEventAuditListenerProperties {
      configured: None
    }
  }

  pub fn set_configured(&mut self, configured: ::models::ConfigNodePropertyString) {
    self.configured = Some(configured);
  }

  pub fn with_configured(mut self, configured: ::models::ConfigNodePropertyString) -> ComDayCqWcmCoreImplEventPageEventAuditListenerProperties {
    self.configured = Some(configured);
    self
  }

  pub fn configured(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.configured.as_ref()
  }

  pub fn reset_configured(&mut self) {
    self.configured = None;
  }

}


