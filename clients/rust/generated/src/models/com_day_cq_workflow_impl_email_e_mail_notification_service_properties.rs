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
pub struct ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {
  #[serde(rename = "from.address")]
  from_address: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "host.prefix")]
  host_prefix: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "notify.onabort")]
  notify_onabort: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "notify.oncomplete")]
  notify_oncomplete: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "notify.oncontainercomplete")]
  notify_oncontainercomplete: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "notify.useronly")]
  notify_useronly: Option<::models::ConfigNodePropertyBoolean>
}

impl ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {
  pub fn new() -> ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {
    ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {
      from_address: None,
      host_prefix: None,
      notify_onabort: None,
      notify_oncomplete: None,
      notify_oncontainercomplete: None,
      notify_useronly: None
    }
  }

  pub fn set_from_address(&mut self, from_address: ::models::ConfigNodePropertyString) {
    self.from_address = Some(from_address);
  }

  pub fn with_from_address(mut self, from_address: ::models::ConfigNodePropertyString) -> ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {
    self.from_address = Some(from_address);
    self
  }

  pub fn from_address(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.from_address.as_ref()
  }

  pub fn reset_from_address(&mut self) {
    self.from_address = None;
  }

  pub fn set_host_prefix(&mut self, host_prefix: ::models::ConfigNodePropertyString) {
    self.host_prefix = Some(host_prefix);
  }

  pub fn with_host_prefix(mut self, host_prefix: ::models::ConfigNodePropertyString) -> ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {
    self.host_prefix = Some(host_prefix);
    self
  }

  pub fn host_prefix(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.host_prefix.as_ref()
  }

  pub fn reset_host_prefix(&mut self) {
    self.host_prefix = None;
  }

  pub fn set_notify_onabort(&mut self, notify_onabort: ::models::ConfigNodePropertyBoolean) {
    self.notify_onabort = Some(notify_onabort);
  }

  pub fn with_notify_onabort(mut self, notify_onabort: ::models::ConfigNodePropertyBoolean) -> ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {
    self.notify_onabort = Some(notify_onabort);
    self
  }

  pub fn notify_onabort(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.notify_onabort.as_ref()
  }

  pub fn reset_notify_onabort(&mut self) {
    self.notify_onabort = None;
  }

  pub fn set_notify_oncomplete(&mut self, notify_oncomplete: ::models::ConfigNodePropertyBoolean) {
    self.notify_oncomplete = Some(notify_oncomplete);
  }

  pub fn with_notify_oncomplete(mut self, notify_oncomplete: ::models::ConfigNodePropertyBoolean) -> ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {
    self.notify_oncomplete = Some(notify_oncomplete);
    self
  }

  pub fn notify_oncomplete(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.notify_oncomplete.as_ref()
  }

  pub fn reset_notify_oncomplete(&mut self) {
    self.notify_oncomplete = None;
  }

  pub fn set_notify_oncontainercomplete(&mut self, notify_oncontainercomplete: ::models::ConfigNodePropertyBoolean) {
    self.notify_oncontainercomplete = Some(notify_oncontainercomplete);
  }

  pub fn with_notify_oncontainercomplete(mut self, notify_oncontainercomplete: ::models::ConfigNodePropertyBoolean) -> ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {
    self.notify_oncontainercomplete = Some(notify_oncontainercomplete);
    self
  }

  pub fn notify_oncontainercomplete(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.notify_oncontainercomplete.as_ref()
  }

  pub fn reset_notify_oncontainercomplete(&mut self) {
    self.notify_oncontainercomplete = None;
  }

  pub fn set_notify_useronly(&mut self, notify_useronly: ::models::ConfigNodePropertyBoolean) {
    self.notify_useronly = Some(notify_useronly);
  }

  pub fn with_notify_useronly(mut self, notify_useronly: ::models::ConfigNodePropertyBoolean) -> ComDayCqWorkflowImplEmailEMailNotificationServiceProperties {
    self.notify_useronly = Some(notify_useronly);
    self
  }

  pub fn notify_useronly(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.notify_useronly.as_ref()
  }

  pub fn reset_notify_useronly(&mut self) {
    self.notify_useronly = None;
  }

}


