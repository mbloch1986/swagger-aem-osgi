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
pub struct OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
  #[serde(rename = "name")]
  name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "title")]
  title: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "details")]
  details: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "enabled")]
  enabled: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "serviceName")]
  service_name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "log.level")]
  log_level: Option<::models::ConfigNodePropertyDropDown>,
  #[serde(rename = "allowed.roots")]
  allowed_roots: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "queue.processing.enabled")]
  queue_processing_enabled: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "packageImporter.endpoints")]
  package_importer_endpoints: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "passiveQueues")]
  passive_queues: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "priorityQueues")]
  priority_queues: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "retry.strategy")]
  retry_strategy: Option<::models::ConfigNodePropertyDropDown>,
  #[serde(rename = "retry.attempts")]
  retry_attempts: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "requestAuthorizationStrategy.target")]
  request_authorization_strategy_target: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "transportSecretProvider.target")]
  transport_secret_provider_target: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "packageBuilder.target")]
  package_builder_target: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "triggers.target")]
  triggers_target: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "queue.provider")]
  queue_provider: Option<::models::ConfigNodePropertyDropDown>,
  #[serde(rename = "async.delivery")]
  async_delivery: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "http.conn.timeout")]
  http_conn_timeout: Option<::models::ConfigNodePropertyInteger>
}

impl OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
  pub fn new() -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
      name: None,
      title: None,
      details: None,
      enabled: None,
      service_name: None,
      log_level: None,
      allowed_roots: None,
      queue_processing_enabled: None,
      package_importer_endpoints: None,
      passive_queues: None,
      priority_queues: None,
      retry_strategy: None,
      retry_attempts: None,
      request_authorization_strategy_target: None,
      transport_secret_provider_target: None,
      package_builder_target: None,
      triggers_target: None,
      queue_provider: None,
      async_delivery: None,
      http_conn_timeout: None
    }
  }

  pub fn set_name(&mut self, name: ::models::ConfigNodePropertyString) {
    self.name = Some(name);
  }

  pub fn with_name(mut self, name: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.name = Some(name);
    self
  }

  pub fn name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.name.as_ref()
  }

  pub fn reset_name(&mut self) {
    self.name = None;
  }

  pub fn set_title(&mut self, title: ::models::ConfigNodePropertyString) {
    self.title = Some(title);
  }

  pub fn with_title(mut self, title: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.title = Some(title);
    self
  }

  pub fn title(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.title.as_ref()
  }

  pub fn reset_title(&mut self) {
    self.title = None;
  }

  pub fn set_details(&mut self, details: ::models::ConfigNodePropertyString) {
    self.details = Some(details);
  }

  pub fn with_details(mut self, details: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.details = Some(details);
    self
  }

  pub fn details(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.details.as_ref()
  }

  pub fn reset_details(&mut self) {
    self.details = None;
  }

  pub fn set_enabled(&mut self, enabled: ::models::ConfigNodePropertyBoolean) {
    self.enabled = Some(enabled);
  }

  pub fn with_enabled(mut self, enabled: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.enabled = Some(enabled);
    self
  }

  pub fn enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.enabled.as_ref()
  }

  pub fn reset_enabled(&mut self) {
    self.enabled = None;
  }

  pub fn set_service_name(&mut self, service_name: ::models::ConfigNodePropertyString) {
    self.service_name = Some(service_name);
  }

  pub fn with_service_name(mut self, service_name: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.service_name = Some(service_name);
    self
  }

  pub fn service_name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.service_name.as_ref()
  }

  pub fn reset_service_name(&mut self) {
    self.service_name = None;
  }

  pub fn set_log_level(&mut self, log_level: ::models::ConfigNodePropertyDropDown) {
    self.log_level = Some(log_level);
  }

  pub fn with_log_level(mut self, log_level: ::models::ConfigNodePropertyDropDown) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.log_level = Some(log_level);
    self
  }

  pub fn log_level(&self) -> Option<&::models::ConfigNodePropertyDropDown> {
    self.log_level.as_ref()
  }

  pub fn reset_log_level(&mut self) {
    self.log_level = None;
  }

  pub fn set_allowed_roots(&mut self, allowed_roots: ::models::ConfigNodePropertyArray) {
    self.allowed_roots = Some(allowed_roots);
  }

  pub fn with_allowed_roots(mut self, allowed_roots: ::models::ConfigNodePropertyArray) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.allowed_roots = Some(allowed_roots);
    self
  }

  pub fn allowed_roots(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.allowed_roots.as_ref()
  }

  pub fn reset_allowed_roots(&mut self) {
    self.allowed_roots = None;
  }

  pub fn set_queue_processing_enabled(&mut self, queue_processing_enabled: ::models::ConfigNodePropertyBoolean) {
    self.queue_processing_enabled = Some(queue_processing_enabled);
  }

  pub fn with_queue_processing_enabled(mut self, queue_processing_enabled: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.queue_processing_enabled = Some(queue_processing_enabled);
    self
  }

  pub fn queue_processing_enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.queue_processing_enabled.as_ref()
  }

  pub fn reset_queue_processing_enabled(&mut self) {
    self.queue_processing_enabled = None;
  }

  pub fn set_package_importer_endpoints(&mut self, package_importer_endpoints: ::models::ConfigNodePropertyArray) {
    self.package_importer_endpoints = Some(package_importer_endpoints);
  }

  pub fn with_package_importer_endpoints(mut self, package_importer_endpoints: ::models::ConfigNodePropertyArray) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.package_importer_endpoints = Some(package_importer_endpoints);
    self
  }

  pub fn package_importer_endpoints(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.package_importer_endpoints.as_ref()
  }

  pub fn reset_package_importer_endpoints(&mut self) {
    self.package_importer_endpoints = None;
  }

  pub fn set_passive_queues(&mut self, passive_queues: ::models::ConfigNodePropertyArray) {
    self.passive_queues = Some(passive_queues);
  }

  pub fn with_passive_queues(mut self, passive_queues: ::models::ConfigNodePropertyArray) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.passive_queues = Some(passive_queues);
    self
  }

  pub fn passive_queues(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.passive_queues.as_ref()
  }

  pub fn reset_passive_queues(&mut self) {
    self.passive_queues = None;
  }

  pub fn set_priority_queues(&mut self, priority_queues: ::models::ConfigNodePropertyArray) {
    self.priority_queues = Some(priority_queues);
  }

  pub fn with_priority_queues(mut self, priority_queues: ::models::ConfigNodePropertyArray) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.priority_queues = Some(priority_queues);
    self
  }

  pub fn priority_queues(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.priority_queues.as_ref()
  }

  pub fn reset_priority_queues(&mut self) {
    self.priority_queues = None;
  }

  pub fn set_retry_strategy(&mut self, retry_strategy: ::models::ConfigNodePropertyDropDown) {
    self.retry_strategy = Some(retry_strategy);
  }

  pub fn with_retry_strategy(mut self, retry_strategy: ::models::ConfigNodePropertyDropDown) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.retry_strategy = Some(retry_strategy);
    self
  }

  pub fn retry_strategy(&self) -> Option<&::models::ConfigNodePropertyDropDown> {
    self.retry_strategy.as_ref()
  }

  pub fn reset_retry_strategy(&mut self) {
    self.retry_strategy = None;
  }

  pub fn set_retry_attempts(&mut self, retry_attempts: ::models::ConfigNodePropertyInteger) {
    self.retry_attempts = Some(retry_attempts);
  }

  pub fn with_retry_attempts(mut self, retry_attempts: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.retry_attempts = Some(retry_attempts);
    self
  }

  pub fn retry_attempts(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.retry_attempts.as_ref()
  }

  pub fn reset_retry_attempts(&mut self) {
    self.retry_attempts = None;
  }

  pub fn set_request_authorization_strategy_target(&mut self, request_authorization_strategy_target: ::models::ConfigNodePropertyString) {
    self.request_authorization_strategy_target = Some(request_authorization_strategy_target);
  }

  pub fn with_request_authorization_strategy_target(mut self, request_authorization_strategy_target: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.request_authorization_strategy_target = Some(request_authorization_strategy_target);
    self
  }

  pub fn request_authorization_strategy_target(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.request_authorization_strategy_target.as_ref()
  }

  pub fn reset_request_authorization_strategy_target(&mut self) {
    self.request_authorization_strategy_target = None;
  }

  pub fn set_transport_secret_provider_target(&mut self, transport_secret_provider_target: ::models::ConfigNodePropertyString) {
    self.transport_secret_provider_target = Some(transport_secret_provider_target);
  }

  pub fn with_transport_secret_provider_target(mut self, transport_secret_provider_target: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.transport_secret_provider_target = Some(transport_secret_provider_target);
    self
  }

  pub fn transport_secret_provider_target(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.transport_secret_provider_target.as_ref()
  }

  pub fn reset_transport_secret_provider_target(&mut self) {
    self.transport_secret_provider_target = None;
  }

  pub fn set_package_builder_target(&mut self, package_builder_target: ::models::ConfigNodePropertyString) {
    self.package_builder_target = Some(package_builder_target);
  }

  pub fn with_package_builder_target(mut self, package_builder_target: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.package_builder_target = Some(package_builder_target);
    self
  }

  pub fn package_builder_target(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.package_builder_target.as_ref()
  }

  pub fn reset_package_builder_target(&mut self) {
    self.package_builder_target = None;
  }

  pub fn set_triggers_target(&mut self, triggers_target: ::models::ConfigNodePropertyString) {
    self.triggers_target = Some(triggers_target);
  }

  pub fn with_triggers_target(mut self, triggers_target: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.triggers_target = Some(triggers_target);
    self
  }

  pub fn triggers_target(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.triggers_target.as_ref()
  }

  pub fn reset_triggers_target(&mut self) {
    self.triggers_target = None;
  }

  pub fn set_queue_provider(&mut self, queue_provider: ::models::ConfigNodePropertyDropDown) {
    self.queue_provider = Some(queue_provider);
  }

  pub fn with_queue_provider(mut self, queue_provider: ::models::ConfigNodePropertyDropDown) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.queue_provider = Some(queue_provider);
    self
  }

  pub fn queue_provider(&self) -> Option<&::models::ConfigNodePropertyDropDown> {
    self.queue_provider.as_ref()
  }

  pub fn reset_queue_provider(&mut self) {
    self.queue_provider = None;
  }

  pub fn set_async_delivery(&mut self, async_delivery: ::models::ConfigNodePropertyBoolean) {
    self.async_delivery = Some(async_delivery);
  }

  pub fn with_async_delivery(mut self, async_delivery: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.async_delivery = Some(async_delivery);
    self
  }

  pub fn async_delivery(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.async_delivery.as_ref()
  }

  pub fn reset_async_delivery(&mut self) {
    self.async_delivery = None;
  }

  pub fn set_http_conn_timeout(&mut self, http_conn_timeout: ::models::ConfigNodePropertyInteger) {
    self.http_conn_timeout = Some(http_conn_timeout);
  }

  pub fn with_http_conn_timeout(mut self, http_conn_timeout: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingDistributionAgentImplForwardDistributionAgentFactoProperties {
    self.http_conn_timeout = Some(http_conn_timeout);
    self
  }

  pub fn http_conn_timeout(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.http_conn_timeout.as_ref()
  }

  pub fn reset_http_conn_timeout(&mut self) {
    self.http_conn_timeout = None;
  }

}


