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
pub struct ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplProperties {
  #[serde(rename = "batch.commit.size")]
  batch_commit_size: Option<::models::ConfigNodePropertyInteger>
}

impl ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplProperties {
  pub fn new() -> ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplProperties {
    ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplProperties {
      batch_commit_size: None
    }
  }

  pub fn set_batch_commit_size(&mut self, batch_commit_size: ::models::ConfigNodePropertyInteger) {
    self.batch_commit_size = Some(batch_commit_size);
  }

  pub fn with_batch_commit_size(mut self, batch_commit_size: ::models::ConfigNodePropertyInteger) -> ComDayCqDamPerformanceInternalAssetPerformanceDataHandlerImplProperties {
    self.batch_commit_size = Some(batch_commit_size);
    self
  }

  pub fn batch_commit_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.batch_commit_size.as_ref()
  }

  pub fn reset_batch_commit_size(&mut self) {
    self.batch_commit_size = None;
  }

}


