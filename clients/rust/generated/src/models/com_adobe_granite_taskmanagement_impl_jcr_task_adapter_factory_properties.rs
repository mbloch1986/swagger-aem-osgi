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
pub struct ComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties {
  #[serde(rename = "adapter.condition")]
  adapter_condition: Option<::models::ConfigNodePropertyString>
}

impl ComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties {
  pub fn new() -> ComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties {
    ComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties {
      adapter_condition: None
    }
  }

  pub fn set_adapter_condition(&mut self, adapter_condition: ::models::ConfigNodePropertyString) {
    self.adapter_condition = Some(adapter_condition);
  }

  pub fn with_adapter_condition(mut self, adapter_condition: ::models::ConfigNodePropertyString) -> ComAdobeGraniteTaskmanagementImplJcrTaskAdapterFactoryProperties {
    self.adapter_condition = Some(adapter_condition);
    self
  }

  pub fn adapter_condition(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.adapter_condition.as_ref()
  }

  pub fn reset_adapter_condition(&mut self) {
    self.adapter_condition = None;
  }

}


