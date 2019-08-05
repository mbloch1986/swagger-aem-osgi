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
pub struct ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties {
  #[serde(rename = "mime.allowEmpty")]
  mime_allow_empty: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "mime.allowed")]
  mime_allowed: Option<::models::ConfigNodePropertyArray>
}

impl ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties {
  pub fn new() -> ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties {
    ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties {
      mime_allow_empty: None,
      mime_allowed: None
    }
  }

  pub fn set_mime_allow_empty(&mut self, mime_allow_empty: ::models::ConfigNodePropertyBoolean) {
    self.mime_allow_empty = Some(mime_allow_empty);
  }

  pub fn with_mime_allow_empty(mut self, mime_allow_empty: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties {
    self.mime_allow_empty = Some(mime_allow_empty);
    self
  }

  pub fn mime_allow_empty(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.mime_allow_empty.as_ref()
  }

  pub fn reset_mime_allow_empty(&mut self) {
    self.mime_allow_empty = None;
  }

  pub fn set_mime_allowed(&mut self, mime_allowed: ::models::ConfigNodePropertyArray) {
    self.mime_allowed = Some(mime_allowed);
  }

  pub fn with_mime_allowed(mut self, mime_allowed: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteRestAssetsImplAssetContentDispositionFilterProperties {
    self.mime_allowed = Some(mime_allowed);
    self
  }

  pub fn mime_allowed(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.mime_allowed.as_ref()
  }

  pub fn reset_mime_allowed(&mut self) {
    self.mime_allowed = None;
  }

}


