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
pub struct ComDayCqDamCommonsUtilImplAssetCacheImplProperties {
  #[serde(rename = "large.file.min")]
  large_file_min: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "cache.apply")]
  cache_apply: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "mime.types")]
  mime_types: Option<::models::ConfigNodePropertyArray>
}

impl ComDayCqDamCommonsUtilImplAssetCacheImplProperties {
  pub fn new() -> ComDayCqDamCommonsUtilImplAssetCacheImplProperties {
    ComDayCqDamCommonsUtilImplAssetCacheImplProperties {
      large_file_min: None,
      cache_apply: None,
      mime_types: None
    }
  }

  pub fn set_large_file_min(&mut self, large_file_min: ::models::ConfigNodePropertyInteger) {
    self.large_file_min = Some(large_file_min);
  }

  pub fn with_large_file_min(mut self, large_file_min: ::models::ConfigNodePropertyInteger) -> ComDayCqDamCommonsUtilImplAssetCacheImplProperties {
    self.large_file_min = Some(large_file_min);
    self
  }

  pub fn large_file_min(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.large_file_min.as_ref()
  }

  pub fn reset_large_file_min(&mut self) {
    self.large_file_min = None;
  }

  pub fn set_cache_apply(&mut self, cache_apply: ::models::ConfigNodePropertyBoolean) {
    self.cache_apply = Some(cache_apply);
  }

  pub fn with_cache_apply(mut self, cache_apply: ::models::ConfigNodePropertyBoolean) -> ComDayCqDamCommonsUtilImplAssetCacheImplProperties {
    self.cache_apply = Some(cache_apply);
    self
  }

  pub fn cache_apply(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.cache_apply.as_ref()
  }

  pub fn reset_cache_apply(&mut self) {
    self.cache_apply = None;
  }

  pub fn set_mime_types(&mut self, mime_types: ::models::ConfigNodePropertyArray) {
    self.mime_types = Some(mime_types);
  }

  pub fn with_mime_types(mut self, mime_types: ::models::ConfigNodePropertyArray) -> ComDayCqDamCommonsUtilImplAssetCacheImplProperties {
    self.mime_types = Some(mime_types);
    self
  }

  pub fn mime_types(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.mime_types.as_ref()
  }

  pub fn reset_mime_types(&mut self) {
    self.mime_types = None;
  }

}


