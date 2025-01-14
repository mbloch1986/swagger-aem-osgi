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
pub struct ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties {
  #[serde(rename = "disableSmartSync")]
  disable_smart_sync: Option<::models::ConfigNodePropertyBoolean>
}

impl ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties {
  pub fn new() -> ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties {
    ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties {
      disable_smart_sync: None
    }
  }

  pub fn set_disable_smart_sync(&mut self, disable_smart_sync: ::models::ConfigNodePropertyBoolean) {
    self.disable_smart_sync = Some(disable_smart_sync);
  }

  pub fn with_disable_smart_sync(mut self, disable_smart_sync: ::models::ConfigNodePropertyBoolean) -> ComAdobeCqScreensOfflinecontentImplOfflineContentServiceImplProperties {
    self.disable_smart_sync = Some(disable_smart_sync);
    self
  }

  pub fn disable_smart_sync(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.disable_smart_sync.as_ref()
  }

  pub fn reset_disable_smart_sync(&mut self) {
    self.disable_smart_sync = None;
  }

}



