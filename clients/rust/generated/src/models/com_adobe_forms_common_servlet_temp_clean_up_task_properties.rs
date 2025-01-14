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
pub struct ComAdobeFormsCommonServletTempCleanUpTaskProperties {
  #[serde(rename = "scheduler.expression")]
  scheduler_expression: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "Duration for Temporary Storage")]
  duration_for_temporary_storage: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "Duration for Anonymous Storage")]
  duration_for_anonymous_storage: Option<::models::ConfigNodePropertyString>
}

impl ComAdobeFormsCommonServletTempCleanUpTaskProperties {
  pub fn new() -> ComAdobeFormsCommonServletTempCleanUpTaskProperties {
    ComAdobeFormsCommonServletTempCleanUpTaskProperties {
      scheduler_expression: None,
      duration_for_temporary_storage: None,
      duration_for_anonymous_storage: None
    }
  }

  pub fn set_scheduler_expression(&mut self, scheduler_expression: ::models::ConfigNodePropertyString) {
    self.scheduler_expression = Some(scheduler_expression);
  }

  pub fn with_scheduler_expression(mut self, scheduler_expression: ::models::ConfigNodePropertyString) -> ComAdobeFormsCommonServletTempCleanUpTaskProperties {
    self.scheduler_expression = Some(scheduler_expression);
    self
  }

  pub fn scheduler_expression(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.scheduler_expression.as_ref()
  }

  pub fn reset_scheduler_expression(&mut self) {
    self.scheduler_expression = None;
  }

  pub fn set_duration_for_temporary_storage(&mut self, duration_for_temporary_storage: ::models::ConfigNodePropertyString) {
    self.duration_for_temporary_storage = Some(duration_for_temporary_storage);
  }

  pub fn with_duration_for_temporary_storage(mut self, duration_for_temporary_storage: ::models::ConfigNodePropertyString) -> ComAdobeFormsCommonServletTempCleanUpTaskProperties {
    self.duration_for_temporary_storage = Some(duration_for_temporary_storage);
    self
  }

  pub fn duration_for_temporary_storage(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.duration_for_temporary_storage.as_ref()
  }

  pub fn reset_duration_for_temporary_storage(&mut self) {
    self.duration_for_temporary_storage = None;
  }

  pub fn set_duration_for_anonymous_storage(&mut self, duration_for_anonymous_storage: ::models::ConfigNodePropertyString) {
    self.duration_for_anonymous_storage = Some(duration_for_anonymous_storage);
  }

  pub fn with_duration_for_anonymous_storage(mut self, duration_for_anonymous_storage: ::models::ConfigNodePropertyString) -> ComAdobeFormsCommonServletTempCleanUpTaskProperties {
    self.duration_for_anonymous_storage = Some(duration_for_anonymous_storage);
    self
  }

  pub fn duration_for_anonymous_storage(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.duration_for_anonymous_storage.as_ref()
  }

  pub fn reset_duration_for_anonymous_storage(&mut self) {
    self.duration_for_anonymous_storage = None;
  }

}



