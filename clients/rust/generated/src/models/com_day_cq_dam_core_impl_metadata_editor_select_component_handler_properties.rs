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
pub struct ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties {
  #[serde(rename = "granite:data")]
  granitedata: Option<::models::ConfigNodePropertyArray>
}

impl ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties {
  pub fn new() -> ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties {
    ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties {
      granitedata: None
    }
  }

  pub fn set_granitedata(&mut self, granitedata: ::models::ConfigNodePropertyArray) {
    self.granitedata = Some(granitedata);
  }

  pub fn with_granitedata(mut self, granitedata: ::models::ConfigNodePropertyArray) -> ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties {
    self.granitedata = Some(granitedata);
    self
  }

  pub fn granitedata(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.granitedata.as_ref()
  }

  pub fn reset_granitedata(&mut self) {
    self.granitedata = None;
  }

}


