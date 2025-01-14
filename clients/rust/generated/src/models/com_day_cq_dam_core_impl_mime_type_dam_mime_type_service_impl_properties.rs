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
pub struct ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties {
  #[serde(rename = "cq.dam.detect.asset.mime.from.content")]
  cq_dam_detect_asset_mime_from_content: Option<::models::ConfigNodePropertyBoolean>
}

impl ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties {
  pub fn new() -> ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties {
    ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties {
      cq_dam_detect_asset_mime_from_content: None
    }
  }

  pub fn set_cq_dam_detect_asset_mime_from_content(&mut self, cq_dam_detect_asset_mime_from_content: ::models::ConfigNodePropertyBoolean) {
    self.cq_dam_detect_asset_mime_from_content = Some(cq_dam_detect_asset_mime_from_content);
  }

  pub fn with_cq_dam_detect_asset_mime_from_content(mut self, cq_dam_detect_asset_mime_from_content: ::models::ConfigNodePropertyBoolean) -> ComDayCqDamCoreImplMimeTypeDamMimeTypeServiceImplProperties {
    self.cq_dam_detect_asset_mime_from_content = Some(cq_dam_detect_asset_mime_from_content);
    self
  }

  pub fn cq_dam_detect_asset_mime_from_content(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.cq_dam_detect_asset_mime_from_content.as_ref()
  }

  pub fn reset_cq_dam_detect_asset_mime_from_content(&mut self) {
    self.cq_dam_detect_asset_mime_from_content = None;
  }

}



