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
pub struct OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
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
  #[serde(rename = "queue.processing.enabled")]
  queue_processing_enabled: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "packageExporter.endpoints")]
  package_exporter_endpoints: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "pull.items")]
  pull_items: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "http.conn.timeout")]
  http_conn_timeout: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "requestAuthorizationStrategy.target")]
  request_authorization_strategy_target: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "transportSecretProvider.target")]
  transport_secret_provider_target: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "packageBuilder.target")]
  package_builder_target: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "triggers.target")]
  triggers_target: Option<::models::ConfigNodePropertyString>
}

impl OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
  pub fn new() -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
    OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
      name: None,
      title: None,
      details: None,
      enabled: None,
      service_name: None,
      log_level: None,
      queue_processing_enabled: None,
      package_exporter_endpoints: None,
      pull_items: None,
      http_conn_timeout: None,
      request_authorization_strategy_target: None,
      transport_secret_provider_target: None,
      package_builder_target: None,
      triggers_target: None
    }
  }

  pub fn set_name(&mut self, name: ::models::ConfigNodePropertyString) {
    self.name = Some(name);
  }

  pub fn with_name(mut self, name: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
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

  pub fn with_title(mut self, title: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
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

  pub fn with_details(mut self, details: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
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

  pub fn with_enabled(mut self, enabled: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
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

  pub fn with_service_name(mut self, service_name: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
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

  pub fn with_log_level(mut self, log_level: ::models::ConfigNodePropertyDropDown) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
    self.log_level = Some(log_level);
    self
  }

  pub fn log_level(&self) -> Option<&::models::ConfigNodePropertyDropDown> {
    self.log_level.as_ref()
  }

  pub fn reset_log_level(&mut self) {
    self.log_level = None;
  }

  pub fn set_queue_processing_enabled(&mut self, queue_processing_enabled: ::models::ConfigNodePropertyBoolean) {
    self.queue_processing_enabled = Some(queue_processing_enabled);
  }

  pub fn with_queue_processing_enabled(mut self, queue_processing_enabled: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
    self.queue_processing_enabled = Some(queue_processing_enabled);
    self
  }

  pub fn queue_processing_enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.queue_processing_enabled.as_ref()
  }

  pub fn reset_queue_processing_enabled(&mut self) {
    self.queue_processing_enabled = None;
  }

  pub fn set_package_exporter_endpoints(&mut self, package_exporter_endpoints: ::models::ConfigNodePropertyArray) {
    self.package_exporter_endpoints = Some(package_exporter_endpoints);
  }

  pub fn with_package_exporter_endpoints(mut self, package_exporter_endpoints: ::models::ConfigNodePropertyArray) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
    self.package_exporter_endpoints = Some(package_exporter_endpoints);
    self
  }

  pub fn package_exporter_endpoints(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.package_exporter_endpoints.as_ref()
  }

  pub fn reset_package_exporter_endpoints(&mut self) {
    self.package_exporter_endpoints = None;
  }

  pub fn set_pull_items(&mut self, pull_items: ::models::ConfigNodePropertyInteger) {
    self.pull_items = Some(pull_items);
  }

  pub fn with_pull_items(mut self, pull_items: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
    self.pull_items = Some(pull_items);
    self
  }

  pub fn pull_items(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.pull_items.as_ref()
  }

  pub fn reset_pull_items(&mut self) {
    self.pull_items = None;
  }

  pub fn set_http_conn_timeout(&mut self, http_conn_timeout: ::models::ConfigNodePropertyInteger) {
    self.http_conn_timeout = Some(http_conn_timeout);
  }

  pub fn with_http_conn_timeout(mut self, http_conn_timeout: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
    self.http_conn_timeout = Some(http_conn_timeout);
    self
  }

  pub fn http_conn_timeout(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.http_conn_timeout.as_ref()
  }

  pub fn reset_http_conn_timeout(&mut self) {
    self.http_conn_timeout = None;
  }

  pub fn set_request_authorization_strategy_target(&mut self, request_authorization_strategy_target: ::models::ConfigNodePropertyString) {
    self.request_authorization_strategy_target = Some(request_authorization_strategy_target);
  }

  pub fn with_request_authorization_strategy_target(mut self, request_authorization_strategy_target: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
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

  pub fn with_transport_secret_provider_target(mut self, transport_secret_provider_target: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
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

  pub fn with_package_builder_target(mut self, package_builder_target: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
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

  pub fn with_triggers_target(mut self, triggers_target: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionAgentImplReverseDistributionAgentFactoProperties {
    self.triggers_target = Some(triggers_target);
    self
  }

  pub fn triggers_target(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.triggers_target.as_ref()
  }

  pub fn reset_triggers_target(&mut self) {
    self.triggers_target = None;
  }

}


