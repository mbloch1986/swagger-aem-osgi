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
pub struct ComDayCqDamCoreImplProcessTextExtractionProcessProperties {
  #[serde(rename = "mimeTypes")]
  mime_types: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "maxExtract")]
  max_extract: Option<::models::ConfigNodePropertyInteger>
}

impl ComDayCqDamCoreImplProcessTextExtractionProcessProperties {
  pub fn new() -> ComDayCqDamCoreImplProcessTextExtractionProcessProperties {
    ComDayCqDamCoreImplProcessTextExtractionProcessProperties {
      mime_types: None,
      max_extract: None
    }
  }

  pub fn set_mime_types(&mut self, mime_types: ::models::ConfigNodePropertyArray) {
    self.mime_types = Some(mime_types);
  }

  pub fn with_mime_types(mut self, mime_types: ::models::ConfigNodePropertyArray) -> ComDayCqDamCoreImplProcessTextExtractionProcessProperties {
    self.mime_types = Some(mime_types);
    self
  }

  pub fn mime_types(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.mime_types.as_ref()
  }

  pub fn reset_mime_types(&mut self) {
    self.mime_types = None;
  }

  pub fn set_max_extract(&mut self, max_extract: ::models::ConfigNodePropertyInteger) {
    self.max_extract = Some(max_extract);
  }

  pub fn with_max_extract(mut self, max_extract: ::models::ConfigNodePropertyInteger) -> ComDayCqDamCoreImplProcessTextExtractionProcessProperties {
    self.max_extract = Some(max_extract);
    self
  }

  pub fn max_extract(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.max_extract.as_ref()
  }

  pub fn reset_max_extract(&mut self) {
    self.max_extract = None;
  }

}


