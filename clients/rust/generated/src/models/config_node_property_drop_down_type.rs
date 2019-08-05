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
pub struct ConfigNodePropertyDropDownType {
  /// Drop Down label
  #[serde(rename = "labels")]
  labels: Option<Value>,
  /// Drown Down value
  #[serde(rename = "values")]
  values: Option<Value>
}

impl ConfigNodePropertyDropDownType {
  pub fn new() -> ConfigNodePropertyDropDownType {
    ConfigNodePropertyDropDownType {
      labels: None,
      values: None
    }
  }

  pub fn set_labels(&mut self, labels: Value) {
    self.labels = Some(labels);
  }

  pub fn with_labels(mut self, labels: Value) -> ConfigNodePropertyDropDownType {
    self.labels = Some(labels);
    self
  }

  pub fn labels(&self) -> Option<&Value> {
    self.labels.as_ref()
  }

  pub fn reset_labels(&mut self) {
    self.labels = None;
  }

  pub fn set_values(&mut self, values: Value) {
    self.values = Some(values);
  }

  pub fn with_values(mut self, values: Value) -> ConfigNodePropertyDropDownType {
    self.values = Some(values);
    self
  }

  pub fn values(&self) -> Option<&Value> {
    self.values.as_ref()
  }

  pub fn reset_values(&mut self) {
    self.values = None;
  }

}


