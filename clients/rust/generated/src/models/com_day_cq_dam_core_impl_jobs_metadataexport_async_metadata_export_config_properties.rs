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
pub struct ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties {
  #[serde(rename = "operation")]
  operation: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "emailEnabled")]
  email_enabled: Option<::models::ConfigNodePropertyBoolean>
}

impl ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties {
  pub fn new() -> ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties {
    ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties {
      operation: None,
      email_enabled: None
    }
  }

  pub fn set_operation(&mut self, operation: ::models::ConfigNodePropertyString) {
    self.operation = Some(operation);
  }

  pub fn with_operation(mut self, operation: ::models::ConfigNodePropertyString) -> ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties {
    self.operation = Some(operation);
    self
  }

  pub fn operation(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.operation.as_ref()
  }

  pub fn reset_operation(&mut self) {
    self.operation = None;
  }

  pub fn set_email_enabled(&mut self, email_enabled: ::models::ConfigNodePropertyBoolean) {
    self.email_enabled = Some(email_enabled);
  }

  pub fn with_email_enabled(mut self, email_enabled: ::models::ConfigNodePropertyBoolean) -> ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties {
    self.email_enabled = Some(email_enabled);
    self
  }

  pub fn email_enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.email_enabled.as_ref()
  }

  pub fn reset_email_enabled(&mut self) {
    self.email_enabled = None;
  }

}



