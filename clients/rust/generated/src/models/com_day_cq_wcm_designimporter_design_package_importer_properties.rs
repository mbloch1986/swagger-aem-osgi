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
pub struct ComDayCqWcmDesignimporterDesignPackageImporterProperties {
  #[serde(rename = "extract.filter")]
  extract_filter: Option<::models::ConfigNodePropertyArray>
}

impl ComDayCqWcmDesignimporterDesignPackageImporterProperties {
  pub fn new() -> ComDayCqWcmDesignimporterDesignPackageImporterProperties {
    ComDayCqWcmDesignimporterDesignPackageImporterProperties {
      extract_filter: None
    }
  }

  pub fn set_extract_filter(&mut self, extract_filter: ::models::ConfigNodePropertyArray) {
    self.extract_filter = Some(extract_filter);
  }

  pub fn with_extract_filter(mut self, extract_filter: ::models::ConfigNodePropertyArray) -> ComDayCqWcmDesignimporterDesignPackageImporterProperties {
    self.extract_filter = Some(extract_filter);
    self
  }

  pub fn extract_filter(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.extract_filter.as_ref()
  }

  pub fn reset_extract_filter(&mut self) {
    self.extract_filter = None;
  }

}


