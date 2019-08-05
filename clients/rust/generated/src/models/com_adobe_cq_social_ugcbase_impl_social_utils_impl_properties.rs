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
pub struct ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties {
  #[serde(rename = "legacyCloudUGCPathMapping")]
  legacy_cloud_ugc_path_mapping: Option<::models::ConfigNodePropertyBoolean>
}

impl ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties {
  pub fn new() -> ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties {
    ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties {
      legacy_cloud_ugc_path_mapping: None
    }
  }

  pub fn set_legacy_cloud_ugc_path_mapping(&mut self, legacy_cloud_ugc_path_mapping: ::models::ConfigNodePropertyBoolean) {
    self.legacy_cloud_ugc_path_mapping = Some(legacy_cloud_ugc_path_mapping);
  }

  pub fn with_legacy_cloud_ugc_path_mapping(mut self, legacy_cloud_ugc_path_mapping: ::models::ConfigNodePropertyBoolean) -> ComAdobeCqSocialUgcbaseImplSocialUtilsImplProperties {
    self.legacy_cloud_ugc_path_mapping = Some(legacy_cloud_ugc_path_mapping);
    self
  }

  pub fn legacy_cloud_ugc_path_mapping(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.legacy_cloud_ugc_path_mapping.as_ref()
  }

  pub fn reset_legacy_cloud_ugc_path_mapping(&mut self) {
    self.legacy_cloud_ugc_path_mapping = None;
  }

}


