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
pub struct ComAdobeCqDamMacSyncImplDamSyncServiceImplProperties {
  #[serde(rename = "com.adobe.cq.dam.mac.sync.damsyncservice.registered_paths")]
  com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "com.adobe.cq.dam.mac.sync.damsyncservice.sync.renditions")]
  com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "com.adobe.cq.dam.mac.sync.damsyncservice.replicate.thread.wait.ms")]
  com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "com.adobe.cq.dam.mac.sync.damsyncservice.platform")]
  com_adobe_cq_dam_mac_sync_damsyncservice_platform: Option<::models::ConfigNodePropertyDropDown>
}

impl ComAdobeCqDamMacSyncImplDamSyncServiceImplProperties {
  pub fn new() -> ComAdobeCqDamMacSyncImplDamSyncServiceImplProperties {
    ComAdobeCqDamMacSyncImplDamSyncServiceImplProperties {
      com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths: None,
      com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions: None,
      com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms: None,
      com_adobe_cq_dam_mac_sync_damsyncservice_platform: None
    }
  }

  pub fn set_com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths(&mut self, com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths: ::models::ConfigNodePropertyArray) {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths = Some(com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths);
  }

  pub fn with_com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths(mut self, com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths: ::models::ConfigNodePropertyArray) -> ComAdobeCqDamMacSyncImplDamSyncServiceImplProperties {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths = Some(com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths);
    self
  }

  pub fn com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths.as_ref()
  }

  pub fn reset_com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths(&mut self) {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths = None;
  }

  pub fn set_com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions(&mut self, com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions: ::models::ConfigNodePropertyBoolean) {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions = Some(com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions);
  }

  pub fn with_com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions(mut self, com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions: ::models::ConfigNodePropertyBoolean) -> ComAdobeCqDamMacSyncImplDamSyncServiceImplProperties {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions = Some(com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions);
    self
  }

  pub fn com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions.as_ref()
  }

  pub fn reset_com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions(&mut self) {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions = None;
  }

  pub fn set_com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms(&mut self, com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms: ::models::ConfigNodePropertyInteger) {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms = Some(com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms);
  }

  pub fn with_com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms(mut self, com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms: ::models::ConfigNodePropertyInteger) -> ComAdobeCqDamMacSyncImplDamSyncServiceImplProperties {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms = Some(com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms);
    self
  }

  pub fn com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms.as_ref()
  }

  pub fn reset_com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms(&mut self) {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms = None;
  }

  pub fn set_com_adobe_cq_dam_mac_sync_damsyncservice_platform(&mut self, com_adobe_cq_dam_mac_sync_damsyncservice_platform: ::models::ConfigNodePropertyDropDown) {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_platform = Some(com_adobe_cq_dam_mac_sync_damsyncservice_platform);
  }

  pub fn with_com_adobe_cq_dam_mac_sync_damsyncservice_platform(mut self, com_adobe_cq_dam_mac_sync_damsyncservice_platform: ::models::ConfigNodePropertyDropDown) -> ComAdobeCqDamMacSyncImplDamSyncServiceImplProperties {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_platform = Some(com_adobe_cq_dam_mac_sync_damsyncservice_platform);
    self
  }

  pub fn com_adobe_cq_dam_mac_sync_damsyncservice_platform(&self) -> Option<&::models::ConfigNodePropertyDropDown> {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_platform.as_ref()
  }

  pub fn reset_com_adobe_cq_dam_mac_sync_damsyncservice_platform(&mut self) {
    self.com_adobe_cq_dam_mac_sync_damsyncservice_platform = None;
  }

}



