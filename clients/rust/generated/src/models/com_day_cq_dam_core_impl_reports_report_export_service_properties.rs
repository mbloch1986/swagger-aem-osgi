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
pub struct ComDayCqDamCoreImplReportsReportExportServiceProperties {
  #[serde(rename = "queryBatchSize")]
  query_batch_size: Option<::models::ConfigNodePropertyInteger>
}

impl ComDayCqDamCoreImplReportsReportExportServiceProperties {
  pub fn new() -> ComDayCqDamCoreImplReportsReportExportServiceProperties {
    ComDayCqDamCoreImplReportsReportExportServiceProperties {
      query_batch_size: None
    }
  }

  pub fn set_query_batch_size(&mut self, query_batch_size: ::models::ConfigNodePropertyInteger) {
    self.query_batch_size = Some(query_batch_size);
  }

  pub fn with_query_batch_size(mut self, query_batch_size: ::models::ConfigNodePropertyInteger) -> ComDayCqDamCoreImplReportsReportExportServiceProperties {
    self.query_batch_size = Some(query_batch_size);
    self
  }

  pub fn query_batch_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.query_batch_size.as_ref()
  }

  pub fn reset_query_batch_size(&mut self) {
    self.query_batch_size = None;
  }

}


