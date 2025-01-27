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
pub struct AdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties {
  #[serde(rename = "fontList")]
  font_list: Option<::models::ConfigNodePropertyArray>
}

impl AdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties {
  pub fn new() -> AdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties {
    AdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties {
      font_list: None
    }
  }

  pub fn set_font_list(&mut self, font_list: ::models::ConfigNodePropertyArray) {
    self.font_list = Some(font_list);
  }

  pub fn with_font_list(mut self, font_list: ::models::ConfigNodePropertyArray) -> AdaptiveFormAndInteractiveCommunicationWebChannelThemeConfigurProperties {
    self.font_list = Some(font_list);
    self
  }

  pub fn font_list(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.font_list.as_ref()
  }

  pub fn reset_font_list(&mut self) {
    self.font_list = None;
  }

}



