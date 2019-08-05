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
pub struct ComAdobeCqDamWebdavImplIoAssetIoHandlerProperties {
  #[serde(rename = "service.ranking")]
  service_ranking: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "pathPrefix")]
  path_prefix: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "createVersion")]
  create_version: Option<::models::ConfigNodePropertyBoolean>
}

impl ComAdobeCqDamWebdavImplIoAssetIoHandlerProperties {
  pub fn new() -> ComAdobeCqDamWebdavImplIoAssetIoHandlerProperties {
    ComAdobeCqDamWebdavImplIoAssetIoHandlerProperties {
      service_ranking: None,
      path_prefix: None,
      create_version: None
    }
  }

  pub fn set_service_ranking(&mut self, service_ranking: ::models::ConfigNodePropertyInteger) {
    self.service_ranking = Some(service_ranking);
  }

  pub fn with_service_ranking(mut self, service_ranking: ::models::ConfigNodePropertyInteger) -> ComAdobeCqDamWebdavImplIoAssetIoHandlerProperties {
    self.service_ranking = Some(service_ranking);
    self
  }

  pub fn service_ranking(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.service_ranking.as_ref()
  }

  pub fn reset_service_ranking(&mut self) {
    self.service_ranking = None;
  }

  pub fn set_path_prefix(&mut self, path_prefix: ::models::ConfigNodePropertyString) {
    self.path_prefix = Some(path_prefix);
  }

  pub fn with_path_prefix(mut self, path_prefix: ::models::ConfigNodePropertyString) -> ComAdobeCqDamWebdavImplIoAssetIoHandlerProperties {
    self.path_prefix = Some(path_prefix);
    self
  }

  pub fn path_prefix(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.path_prefix.as_ref()
  }

  pub fn reset_path_prefix(&mut self) {
    self.path_prefix = None;
  }

  pub fn set_create_version(&mut self, create_version: ::models::ConfigNodePropertyBoolean) {
    self.create_version = Some(create_version);
  }

  pub fn with_create_version(mut self, create_version: ::models::ConfigNodePropertyBoolean) -> ComAdobeCqDamWebdavImplIoAssetIoHandlerProperties {
    self.create_version = Some(create_version);
    self
  }

  pub fn create_version(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.create_version.as_ref()
  }

  pub fn reset_create_version(&mut self) {
    self.create_version = None;
  }

}


