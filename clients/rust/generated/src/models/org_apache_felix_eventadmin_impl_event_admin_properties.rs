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
pub struct OrgApacheFelixEventadminImplEventAdminProperties {
  #[serde(rename = "org.apache.felix.eventadmin.ThreadPoolSize")]
  org_apache_felix_eventadmin_thread_pool_size: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "org.apache.felix.eventadmin.AsyncToSyncThreadRatio")]
  org_apache_felix_eventadmin_async_to_sync_thread_ratio: Option<::models::ConfigNodePropertyFloat>,
  #[serde(rename = "org.apache.felix.eventadmin.Timeout")]
  org_apache_felix_eventadmin_timeout: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "org.apache.felix.eventadmin.RequireTopic")]
  org_apache_felix_eventadmin_require_topic: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "org.apache.felix.eventadmin.IgnoreTimeout")]
  org_apache_felix_eventadmin_ignore_timeout: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "org.apache.felix.eventadmin.IgnoreTopic")]
  org_apache_felix_eventadmin_ignore_topic: Option<::models::ConfigNodePropertyArray>
}

impl OrgApacheFelixEventadminImplEventAdminProperties {
  pub fn new() -> OrgApacheFelixEventadminImplEventAdminProperties {
    OrgApacheFelixEventadminImplEventAdminProperties {
      org_apache_felix_eventadmin_thread_pool_size: None,
      org_apache_felix_eventadmin_async_to_sync_thread_ratio: None,
      org_apache_felix_eventadmin_timeout: None,
      org_apache_felix_eventadmin_require_topic: None,
      org_apache_felix_eventadmin_ignore_timeout: None,
      org_apache_felix_eventadmin_ignore_topic: None
    }
  }

  pub fn set_org_apache_felix_eventadmin_thread_pool_size(&mut self, org_apache_felix_eventadmin_thread_pool_size: ::models::ConfigNodePropertyInteger) {
    self.org_apache_felix_eventadmin_thread_pool_size = Some(org_apache_felix_eventadmin_thread_pool_size);
  }

  pub fn with_org_apache_felix_eventadmin_thread_pool_size(mut self, org_apache_felix_eventadmin_thread_pool_size: ::models::ConfigNodePropertyInteger) -> OrgApacheFelixEventadminImplEventAdminProperties {
    self.org_apache_felix_eventadmin_thread_pool_size = Some(org_apache_felix_eventadmin_thread_pool_size);
    self
  }

  pub fn org_apache_felix_eventadmin_thread_pool_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.org_apache_felix_eventadmin_thread_pool_size.as_ref()
  }

  pub fn reset_org_apache_felix_eventadmin_thread_pool_size(&mut self) {
    self.org_apache_felix_eventadmin_thread_pool_size = None;
  }

  pub fn set_org_apache_felix_eventadmin_async_to_sync_thread_ratio(&mut self, org_apache_felix_eventadmin_async_to_sync_thread_ratio: ::models::ConfigNodePropertyFloat) {
    self.org_apache_felix_eventadmin_async_to_sync_thread_ratio = Some(org_apache_felix_eventadmin_async_to_sync_thread_ratio);
  }

  pub fn with_org_apache_felix_eventadmin_async_to_sync_thread_ratio(mut self, org_apache_felix_eventadmin_async_to_sync_thread_ratio: ::models::ConfigNodePropertyFloat) -> OrgApacheFelixEventadminImplEventAdminProperties {
    self.org_apache_felix_eventadmin_async_to_sync_thread_ratio = Some(org_apache_felix_eventadmin_async_to_sync_thread_ratio);
    self
  }

  pub fn org_apache_felix_eventadmin_async_to_sync_thread_ratio(&self) -> Option<&::models::ConfigNodePropertyFloat> {
    self.org_apache_felix_eventadmin_async_to_sync_thread_ratio.as_ref()
  }

  pub fn reset_org_apache_felix_eventadmin_async_to_sync_thread_ratio(&mut self) {
    self.org_apache_felix_eventadmin_async_to_sync_thread_ratio = None;
  }

  pub fn set_org_apache_felix_eventadmin_timeout(&mut self, org_apache_felix_eventadmin_timeout: ::models::ConfigNodePropertyInteger) {
    self.org_apache_felix_eventadmin_timeout = Some(org_apache_felix_eventadmin_timeout);
  }

  pub fn with_org_apache_felix_eventadmin_timeout(mut self, org_apache_felix_eventadmin_timeout: ::models::ConfigNodePropertyInteger) -> OrgApacheFelixEventadminImplEventAdminProperties {
    self.org_apache_felix_eventadmin_timeout = Some(org_apache_felix_eventadmin_timeout);
    self
  }

  pub fn org_apache_felix_eventadmin_timeout(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.org_apache_felix_eventadmin_timeout.as_ref()
  }

  pub fn reset_org_apache_felix_eventadmin_timeout(&mut self) {
    self.org_apache_felix_eventadmin_timeout = None;
  }

  pub fn set_org_apache_felix_eventadmin_require_topic(&mut self, org_apache_felix_eventadmin_require_topic: ::models::ConfigNodePropertyBoolean) {
    self.org_apache_felix_eventadmin_require_topic = Some(org_apache_felix_eventadmin_require_topic);
  }

  pub fn with_org_apache_felix_eventadmin_require_topic(mut self, org_apache_felix_eventadmin_require_topic: ::models::ConfigNodePropertyBoolean) -> OrgApacheFelixEventadminImplEventAdminProperties {
    self.org_apache_felix_eventadmin_require_topic = Some(org_apache_felix_eventadmin_require_topic);
    self
  }

  pub fn org_apache_felix_eventadmin_require_topic(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.org_apache_felix_eventadmin_require_topic.as_ref()
  }

  pub fn reset_org_apache_felix_eventadmin_require_topic(&mut self) {
    self.org_apache_felix_eventadmin_require_topic = None;
  }

  pub fn set_org_apache_felix_eventadmin_ignore_timeout(&mut self, org_apache_felix_eventadmin_ignore_timeout: ::models::ConfigNodePropertyArray) {
    self.org_apache_felix_eventadmin_ignore_timeout = Some(org_apache_felix_eventadmin_ignore_timeout);
  }

  pub fn with_org_apache_felix_eventadmin_ignore_timeout(mut self, org_apache_felix_eventadmin_ignore_timeout: ::models::ConfigNodePropertyArray) -> OrgApacheFelixEventadminImplEventAdminProperties {
    self.org_apache_felix_eventadmin_ignore_timeout = Some(org_apache_felix_eventadmin_ignore_timeout);
    self
  }

  pub fn org_apache_felix_eventadmin_ignore_timeout(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.org_apache_felix_eventadmin_ignore_timeout.as_ref()
  }

  pub fn reset_org_apache_felix_eventadmin_ignore_timeout(&mut self) {
    self.org_apache_felix_eventadmin_ignore_timeout = None;
  }

  pub fn set_org_apache_felix_eventadmin_ignore_topic(&mut self, org_apache_felix_eventadmin_ignore_topic: ::models::ConfigNodePropertyArray) {
    self.org_apache_felix_eventadmin_ignore_topic = Some(org_apache_felix_eventadmin_ignore_topic);
  }

  pub fn with_org_apache_felix_eventadmin_ignore_topic(mut self, org_apache_felix_eventadmin_ignore_topic: ::models::ConfigNodePropertyArray) -> OrgApacheFelixEventadminImplEventAdminProperties {
    self.org_apache_felix_eventadmin_ignore_topic = Some(org_apache_felix_eventadmin_ignore_topic);
    self
  }

  pub fn org_apache_felix_eventadmin_ignore_topic(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.org_apache_felix_eventadmin_ignore_topic.as_ref()
  }

  pub fn reset_org_apache_felix_eventadmin_ignore_topic(&mut self) {
    self.org_apache_felix_eventadmin_ignore_topic = None;
  }

}


