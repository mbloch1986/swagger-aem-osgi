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
pub struct ComAdobeGraniteContexthubImplContextHubImplProperties {
  #[serde(rename = "com.adobe.granite.contexthub.silent_mode")]
  com_adobe_granite_contexthub_silent_mode: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "com.adobe.granite.contexthub.show_ui")]
  com_adobe_granite_contexthub_show_ui: Option<::models::ConfigNodePropertyBoolean>
}

impl ComAdobeGraniteContexthubImplContextHubImplProperties {
  pub fn new() -> ComAdobeGraniteContexthubImplContextHubImplProperties {
    ComAdobeGraniteContexthubImplContextHubImplProperties {
      com_adobe_granite_contexthub_silent_mode: None,
      com_adobe_granite_contexthub_show_ui: None
    }
  }

  pub fn set_com_adobe_granite_contexthub_silent_mode(&mut self, com_adobe_granite_contexthub_silent_mode: ::models::ConfigNodePropertyBoolean) {
    self.com_adobe_granite_contexthub_silent_mode = Some(com_adobe_granite_contexthub_silent_mode);
  }

  pub fn with_com_adobe_granite_contexthub_silent_mode(mut self, com_adobe_granite_contexthub_silent_mode: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteContexthubImplContextHubImplProperties {
    self.com_adobe_granite_contexthub_silent_mode = Some(com_adobe_granite_contexthub_silent_mode);
    self
  }

  pub fn com_adobe_granite_contexthub_silent_mode(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.com_adobe_granite_contexthub_silent_mode.as_ref()
  }

  pub fn reset_com_adobe_granite_contexthub_silent_mode(&mut self) {
    self.com_adobe_granite_contexthub_silent_mode = None;
  }

  pub fn set_com_adobe_granite_contexthub_show_ui(&mut self, com_adobe_granite_contexthub_show_ui: ::models::ConfigNodePropertyBoolean) {
    self.com_adobe_granite_contexthub_show_ui = Some(com_adobe_granite_contexthub_show_ui);
  }

  pub fn with_com_adobe_granite_contexthub_show_ui(mut self, com_adobe_granite_contexthub_show_ui: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteContexthubImplContextHubImplProperties {
    self.com_adobe_granite_contexthub_show_ui = Some(com_adobe_granite_contexthub_show_ui);
    self
  }

  pub fn com_adobe_granite_contexthub_show_ui(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.com_adobe_granite_contexthub_show_ui.as_ref()
  }

  pub fn reset_com_adobe_granite_contexthub_show_ui(&mut self) {
    self.com_adobe_granite_contexthub_show_ui = None;
  }

}



