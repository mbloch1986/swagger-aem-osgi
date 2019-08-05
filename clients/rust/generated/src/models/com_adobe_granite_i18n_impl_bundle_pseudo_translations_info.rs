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
pub struct ComAdobeGraniteI18nImplBundlePseudoTranslationsInfo {
  #[serde(rename = "pid")]
  pid: Option<String>,
  #[serde(rename = "title")]
  title: Option<String>,
  #[serde(rename = "description")]
  description: Option<String>,
  #[serde(rename = "properties")]
  properties: Option<::models::ComAdobeGraniteI18nImplBundlePseudoTranslationsProperties>
}

impl ComAdobeGraniteI18nImplBundlePseudoTranslationsInfo {
  pub fn new() -> ComAdobeGraniteI18nImplBundlePseudoTranslationsInfo {
    ComAdobeGraniteI18nImplBundlePseudoTranslationsInfo {
      pid: None,
      title: None,
      description: None,
      properties: None
    }
  }

  pub fn set_pid(&mut self, pid: String) {
    self.pid = Some(pid);
  }

  pub fn with_pid(mut self, pid: String) -> ComAdobeGraniteI18nImplBundlePseudoTranslationsInfo {
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

  pub fn with_title(mut self, title: String) -> ComAdobeGraniteI18nImplBundlePseudoTranslationsInfo {
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

  pub fn with_description(mut self, description: String) -> ComAdobeGraniteI18nImplBundlePseudoTranslationsInfo {
    self.description = Some(description);
    self
  }

  pub fn description(&self) -> Option<&String> {
    self.description.as_ref()
  }

  pub fn reset_description(&mut self) {
    self.description = None;
  }

  pub fn set_properties(&mut self, properties: ::models::ComAdobeGraniteI18nImplBundlePseudoTranslationsProperties) {
    self.properties = Some(properties);
  }

  pub fn with_properties(mut self, properties: ::models::ComAdobeGraniteI18nImplBundlePseudoTranslationsProperties) -> ComAdobeGraniteI18nImplBundlePseudoTranslationsInfo {
    self.properties = Some(properties);
    self
  }

  pub fn properties(&self) -> Option<&::models::ComAdobeGraniteI18nImplBundlePseudoTranslationsProperties> {
    self.properties.as_ref()
  }

  pub fn reset_properties(&mut self) {
    self.properties = None;
  }

}


