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
pub struct ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties {
  #[serde(rename = "automoderation.sequence")]
  automoderation_sequence: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "automoderation.onfailurestop")]
  automoderation_onfailurestop: Option<::models::ConfigNodePropertyBoolean>
}

impl ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties {
  pub fn new() -> ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties {
    ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties {
      automoderation_sequence: None,
      automoderation_onfailurestop: None
    }
  }

  pub fn set_automoderation_sequence(&mut self, automoderation_sequence: ::models::ConfigNodePropertyArray) {
    self.automoderation_sequence = Some(automoderation_sequence);
  }

  pub fn with_automoderation_sequence(mut self, automoderation_sequence: ::models::ConfigNodePropertyArray) -> ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties {
    self.automoderation_sequence = Some(automoderation_sequence);
    self
  }

  pub fn automoderation_sequence(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.automoderation_sequence.as_ref()
  }

  pub fn reset_automoderation_sequence(&mut self) {
    self.automoderation_sequence = None;
  }

  pub fn set_automoderation_onfailurestop(&mut self, automoderation_onfailurestop: ::models::ConfigNodePropertyBoolean) {
    self.automoderation_onfailurestop = Some(automoderation_onfailurestop);
  }

  pub fn with_automoderation_onfailurestop(mut self, automoderation_onfailurestop: ::models::ConfigNodePropertyBoolean) -> ComAdobeCqSocialUgcbaseModerationImplAutoModerationImplProperties {
    self.automoderation_onfailurestop = Some(automoderation_onfailurestop);
    self
  }

  pub fn automoderation_onfailurestop(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.automoderation_onfailurestop.as_ref()
  }

  pub fn reset_automoderation_onfailurestop(&mut self) {
    self.automoderation_onfailurestop = None;
  }

}



