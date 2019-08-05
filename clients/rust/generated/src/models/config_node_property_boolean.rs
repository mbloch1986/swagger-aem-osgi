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
pub struct ConfigNodePropertyBoolean {
  /// property name
  #[serde(rename = "name")]
  name: Option<String>,
  /// True if optional
  #[serde(rename = "optional")]
  optional: Option<bool>,
  /// True if property is set
  #[serde(rename = "is_set")]
  is_set: Option<bool>,
  /// Property type, 1=String, 2=Long, 3=Integer, 7=Float, 11=Boolean, 12=Secrets(String)
  #[serde(rename = "type")]
  _type: Option<i32>,
  /// Property value
  #[serde(rename = "value")]
  value: Option<bool>,
  /// Property description
  #[serde(rename = "description")]
  description: Option<String>
}

impl ConfigNodePropertyBoolean {
  pub fn new() -> ConfigNodePropertyBoolean {
    ConfigNodePropertyBoolean {
      name: None,
      optional: None,
      is_set: None,
      _type: None,
      value: None,
      description: None
    }
  }

  pub fn set_name(&mut self, name: String) {
    self.name = Some(name);
  }

  pub fn with_name(mut self, name: String) -> ConfigNodePropertyBoolean {
    self.name = Some(name);
    self
  }

  pub fn name(&self) -> Option<&String> {
    self.name.as_ref()
  }

  pub fn reset_name(&mut self) {
    self.name = None;
  }

  pub fn set_optional(&mut self, optional: bool) {
    self.optional = Some(optional);
  }

  pub fn with_optional(mut self, optional: bool) -> ConfigNodePropertyBoolean {
    self.optional = Some(optional);
    self
  }

  pub fn optional(&self) -> Option<&bool> {
    self.optional.as_ref()
  }

  pub fn reset_optional(&mut self) {
    self.optional = None;
  }

  pub fn set_is_set(&mut self, is_set: bool) {
    self.is_set = Some(is_set);
  }

  pub fn with_is_set(mut self, is_set: bool) -> ConfigNodePropertyBoolean {
    self.is_set = Some(is_set);
    self
  }

  pub fn is_set(&self) -> Option<&bool> {
    self.is_set.as_ref()
  }

  pub fn reset_is_set(&mut self) {
    self.is_set = None;
  }

  pub fn set__type(&mut self, _type: i32) {
    self._type = Some(_type);
  }

  pub fn with__type(mut self, _type: i32) -> ConfigNodePropertyBoolean {
    self._type = Some(_type);
    self
  }

  pub fn _type(&self) -> Option<&i32> {
    self._type.as_ref()
  }

  pub fn reset__type(&mut self) {
    self._type = None;
  }

  pub fn set_value(&mut self, value: bool) {
    self.value = Some(value);
  }

  pub fn with_value(mut self, value: bool) -> ConfigNodePropertyBoolean {
    self.value = Some(value);
    self
  }

  pub fn value(&self) -> Option<&bool> {
    self.value.as_ref()
  }

  pub fn reset_value(&mut self) {
    self.value = None;
  }

  pub fn set_description(&mut self, description: String) {
    self.description = Some(description);
  }

  pub fn with_description(mut self, description: String) -> ConfigNodePropertyBoolean {
    self.description = Some(description);
    self
  }

  pub fn description(&self) -> Option<&String> {
    self.description.as_ref()
  }

  pub fn reset_description(&mut self) {
    self.description = None;
  }

}


