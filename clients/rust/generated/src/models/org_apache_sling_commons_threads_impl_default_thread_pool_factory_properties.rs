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
pub struct OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
  #[serde(rename = "name")]
  name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "minPoolSize")]
  min_pool_size: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "maxPoolSize")]
  max_pool_size: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "queueSize")]
  queue_size: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "maxThreadAge")]
  max_thread_age: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "keepAliveTime")]
  keep_alive_time: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "blockPolicy")]
  block_policy: Option<::models::ConfigNodePropertyDropDown>,
  #[serde(rename = "shutdownGraceful")]
  shutdown_graceful: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "daemon")]
  daemon: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "shutdownWaitTime")]
  shutdown_wait_time: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "priority")]
  priority: Option<::models::ConfigNodePropertyDropDown>
}

impl OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
  pub fn new() -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
    OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
      name: None,
      min_pool_size: None,
      max_pool_size: None,
      queue_size: None,
      max_thread_age: None,
      keep_alive_time: None,
      block_policy: None,
      shutdown_graceful: None,
      daemon: None,
      shutdown_wait_time: None,
      priority: None
    }
  }

  pub fn set_name(&mut self, name: ::models::ConfigNodePropertyString) {
    self.name = Some(name);
  }

  pub fn with_name(mut self, name: ::models::ConfigNodePropertyString) -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
    self.name = Some(name);
    self
  }

  pub fn name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.name.as_ref()
  }

  pub fn reset_name(&mut self) {
    self.name = None;
  }

  pub fn set_min_pool_size(&mut self, min_pool_size: ::models::ConfigNodePropertyInteger) {
    self.min_pool_size = Some(min_pool_size);
  }

  pub fn with_min_pool_size(mut self, min_pool_size: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
    self.min_pool_size = Some(min_pool_size);
    self
  }

  pub fn min_pool_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.min_pool_size.as_ref()
  }

  pub fn reset_min_pool_size(&mut self) {
    self.min_pool_size = None;
  }

  pub fn set_max_pool_size(&mut self, max_pool_size: ::models::ConfigNodePropertyInteger) {
    self.max_pool_size = Some(max_pool_size);
  }

  pub fn with_max_pool_size(mut self, max_pool_size: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
    self.max_pool_size = Some(max_pool_size);
    self
  }

  pub fn max_pool_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.max_pool_size.as_ref()
  }

  pub fn reset_max_pool_size(&mut self) {
    self.max_pool_size = None;
  }

  pub fn set_queue_size(&mut self, queue_size: ::models::ConfigNodePropertyInteger) {
    self.queue_size = Some(queue_size);
  }

  pub fn with_queue_size(mut self, queue_size: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
    self.queue_size = Some(queue_size);
    self
  }

  pub fn queue_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.queue_size.as_ref()
  }

  pub fn reset_queue_size(&mut self) {
    self.queue_size = None;
  }

  pub fn set_max_thread_age(&mut self, max_thread_age: ::models::ConfigNodePropertyInteger) {
    self.max_thread_age = Some(max_thread_age);
  }

  pub fn with_max_thread_age(mut self, max_thread_age: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
    self.max_thread_age = Some(max_thread_age);
    self
  }

  pub fn max_thread_age(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.max_thread_age.as_ref()
  }

  pub fn reset_max_thread_age(&mut self) {
    self.max_thread_age = None;
  }

  pub fn set_keep_alive_time(&mut self, keep_alive_time: ::models::ConfigNodePropertyInteger) {
    self.keep_alive_time = Some(keep_alive_time);
  }

  pub fn with_keep_alive_time(mut self, keep_alive_time: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
    self.keep_alive_time = Some(keep_alive_time);
    self
  }

  pub fn keep_alive_time(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.keep_alive_time.as_ref()
  }

  pub fn reset_keep_alive_time(&mut self) {
    self.keep_alive_time = None;
  }

  pub fn set_block_policy(&mut self, block_policy: ::models::ConfigNodePropertyDropDown) {
    self.block_policy = Some(block_policy);
  }

  pub fn with_block_policy(mut self, block_policy: ::models::ConfigNodePropertyDropDown) -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
    self.block_policy = Some(block_policy);
    self
  }

  pub fn block_policy(&self) -> Option<&::models::ConfigNodePropertyDropDown> {
    self.block_policy.as_ref()
  }

  pub fn reset_block_policy(&mut self) {
    self.block_policy = None;
  }

  pub fn set_shutdown_graceful(&mut self, shutdown_graceful: ::models::ConfigNodePropertyBoolean) {
    self.shutdown_graceful = Some(shutdown_graceful);
  }

  pub fn with_shutdown_graceful(mut self, shutdown_graceful: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
    self.shutdown_graceful = Some(shutdown_graceful);
    self
  }

  pub fn shutdown_graceful(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.shutdown_graceful.as_ref()
  }

  pub fn reset_shutdown_graceful(&mut self) {
    self.shutdown_graceful = None;
  }

  pub fn set_daemon(&mut self, daemon: ::models::ConfigNodePropertyBoolean) {
    self.daemon = Some(daemon);
  }

  pub fn with_daemon(mut self, daemon: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
    self.daemon = Some(daemon);
    self
  }

  pub fn daemon(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.daemon.as_ref()
  }

  pub fn reset_daemon(&mut self) {
    self.daemon = None;
  }

  pub fn set_shutdown_wait_time(&mut self, shutdown_wait_time: ::models::ConfigNodePropertyInteger) {
    self.shutdown_wait_time = Some(shutdown_wait_time);
  }

  pub fn with_shutdown_wait_time(mut self, shutdown_wait_time: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
    self.shutdown_wait_time = Some(shutdown_wait_time);
    self
  }

  pub fn shutdown_wait_time(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.shutdown_wait_time.as_ref()
  }

  pub fn reset_shutdown_wait_time(&mut self) {
    self.shutdown_wait_time = None;
  }

  pub fn set_priority(&mut self, priority: ::models::ConfigNodePropertyDropDown) {
    self.priority = Some(priority);
  }

  pub fn with_priority(mut self, priority: ::models::ConfigNodePropertyDropDown) -> OrgApacheSlingCommonsThreadsImplDefaultThreadPoolFactoryProperties {
    self.priority = Some(priority);
    self
  }

  pub fn priority(&self) -> Option<&::models::ConfigNodePropertyDropDown> {
    self.priority.as_ref()
  }

  pub fn reset_priority(&mut self) {
    self.priority = None;
  }

}



