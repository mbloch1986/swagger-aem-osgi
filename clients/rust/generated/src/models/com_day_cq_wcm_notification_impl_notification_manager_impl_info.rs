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
pub struct ComDayCqWcmNotificationImplNotificationManagerImplInfo {
  #[serde(rename = "pid")]
  pid: Option<String>,
  #[serde(rename = "title")]
  title: Option<String>,
  #[serde(rename = "description")]
  description: Option<String>,
  #[serde(rename = "properties")]
  properties: Option<::models::ComDayCqWcmNotificationImplNotificationManagerImplProperties>,
  #[serde(rename = "bundle_location")]
  bundle_location: Option<String>,
  #[serde(rename = "service_location")]
  service_location: Option<String>
}

impl ComDayCqWcmNotificationImplNotificationManagerImplInfo {
  pub fn new() -> ComDayCqWcmNotificationImplNotificationManagerImplInfo {
    ComDayCqWcmNotificationImplNotificationManagerImplInfo {
      pid: None,
      title: None,
      description: None,
      properties: None,
      bundle_location: None,
      service_location: None
    }
  }

  pub fn set_pid(&mut self, pid: String) {
    self.pid = Some(pid);
  }

  pub fn with_pid(mut self, pid: String) -> ComDayCqWcmNotificationImplNotificationManagerImplInfo {
    self.pid = Some(pid);
    self
  }

  pub fn pid(&self) -> Option<&String> {
    self.pid.as_ref()
  }

  pub fn reset_pid(&mut self) {
    self.pid = None;
  }

  pub fn set_title(&mut self, title: String) {
    self.title = Some(title);
  }

  pub fn with_title(mut self, title: String) -> ComDayCqWcmNotificationImplNotificationManagerImplInfo {
    self.title = Some(title);
    self
  }

  pub fn title(&self) -> Option<&String> {
    self.title.as_ref()
  }

  pub fn reset_title(&mut self) {
    self.title = None;
  }

  pub fn set_description(&mut self, description: String) {
    self.description = Some(description);
  }

  pub fn with_description(mut self, description: String) -> ComDayCqWcmNotificationImplNotificationManagerImplInfo {
    self.description = Some(description);
    self
  }

  pub fn description(&self) -> Option<&String> {
    self.description.as_ref()
  }

  pub fn reset_description(&mut self) {
    self.description = None;
  }

  pub fn set_properties(&mut self, properties: ::models::ComDayCqWcmNotificationImplNotificationManagerImplProperties) {
    self.properties = Some(properties);
  }

  pub fn with_properties(mut self, properties: ::models::ComDayCqWcmNotificationImplNotificationManagerImplProperties) -> ComDayCqWcmNotificationImplNotificationManagerImplInfo {
    self.properties = Some(properties);
    self
  }

  pub fn properties(&self) -> Option<&::models::ComDayCqWcmNotificationImplNotificationManagerImplProperties> {
    self.properties.as_ref()
  }

  pub fn reset_properties(&mut self) {
    self.properties = None;
  }

  pub fn set_bundle_location(&mut self, bundle_location: String) {
    self.bundle_location = Some(bundle_location);
  }

  pub fn with_bundle_location(mut self, bundle_location: String) -> ComDayCqWcmNotificationImplNotificationManagerImplInfo {
    self.bundle_location = Some(bundle_location);
    self
  }

  pub fn bundle_location(&self) -> Option<&String> {
    self.bundle_location.as_ref()
  }

  pub fn reset_bundle_location(&mut self) {
    self.bundle_location = None;
  }

  pub fn set_service_location(&mut self, service_location: String) {
    self.service_location = Some(service_location);
  }

  pub fn with_service_location(mut self, service_location: String) -> ComDayCqWcmNotificationImplNotificationManagerImplInfo {
    self.service_location = Some(service_location);
    self
  }

  pub fn service_location(&self) -> Option<&String> {
    self.service_location.as_ref()
  }

  pub fn reset_service_location(&mut self) {
    self.service_location = None;
  }

}



