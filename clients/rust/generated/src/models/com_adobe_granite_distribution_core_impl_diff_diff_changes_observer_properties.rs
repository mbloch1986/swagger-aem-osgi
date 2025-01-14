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
pub struct ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
  #[serde(rename = "enabled")]
  enabled: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "agentName")]
  agent_name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "diffPath")]
  diff_path: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "observedPath")]
  observed_path: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "serviceName")]
  service_name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "propertyNames")]
  property_names: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "distributionDelay")]
  distribution_delay: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "serviceUser.target")]
  service_user_target: Option<::models::ConfigNodePropertyString>
}

impl ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
  pub fn new() -> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
    ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
      enabled: None,
      agent_name: None,
      diff_path: None,
      observed_path: None,
      service_name: None,
      property_names: None,
      distribution_delay: None,
      service_user_target: None
    }
  }

  pub fn set_enabled(&mut self, enabled: ::models::ConfigNodePropertyBoolean) {
    self.enabled = Some(enabled);
  }

  pub fn with_enabled(mut self, enabled: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
    self.enabled = Some(enabled);
    self
  }

  pub fn enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.enabled.as_ref()
  }

  pub fn reset_enabled(&mut self) {
    self.enabled = None;
  }

  pub fn set_agent_name(&mut self, agent_name: ::models::ConfigNodePropertyString) {
    self.agent_name = Some(agent_name);
  }

  pub fn with_agent_name(mut self, agent_name: ::models::ConfigNodePropertyString) -> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
    self.agent_name = Some(agent_name);
    self
  }

  pub fn agent_name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.agent_name.as_ref()
  }

  pub fn reset_agent_name(&mut self) {
    self.agent_name = None;
  }

  pub fn set_diff_path(&mut self, diff_path: ::models::ConfigNodePropertyString) {
    self.diff_path = Some(diff_path);
  }

  pub fn with_diff_path(mut self, diff_path: ::models::ConfigNodePropertyString) -> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
    self.diff_path = Some(diff_path);
    self
  }

  pub fn diff_path(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.diff_path.as_ref()
  }

  pub fn reset_diff_path(&mut self) {
    self.diff_path = None;
  }

  pub fn set_observed_path(&mut self, observed_path: ::models::ConfigNodePropertyString) {
    self.observed_path = Some(observed_path);
  }

  pub fn with_observed_path(mut self, observed_path: ::models::ConfigNodePropertyString) -> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
    self.observed_path = Some(observed_path);
    self
  }

  pub fn observed_path(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.observed_path.as_ref()
  }

  pub fn reset_observed_path(&mut self) {
    self.observed_path = None;
  }

  pub fn set_service_name(&mut self, service_name: ::models::ConfigNodePropertyString) {
    self.service_name = Some(service_name);
  }

  pub fn with_service_name(mut self, service_name: ::models::ConfigNodePropertyString) -> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
    self.service_name = Some(service_name);
    self
  }

  pub fn service_name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.service_name.as_ref()
  }

  pub fn reset_service_name(&mut self) {
    self.service_name = None;
  }

  pub fn set_property_names(&mut self, property_names: ::models::ConfigNodePropertyString) {
    self.property_names = Some(property_names);
  }

  pub fn with_property_names(mut self, property_names: ::models::ConfigNodePropertyString) -> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
    self.property_names = Some(property_names);
    self
  }

  pub fn property_names(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.property_names.as_ref()
  }

  pub fn reset_property_names(&mut self) {
    self.property_names = None;
  }

  pub fn set_distribution_delay(&mut self, distribution_delay: ::models::ConfigNodePropertyInteger) {
    self.distribution_delay = Some(distribution_delay);
  }

  pub fn with_distribution_delay(mut self, distribution_delay: ::models::ConfigNodePropertyInteger) -> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
    self.distribution_delay = Some(distribution_delay);
    self
  }

  pub fn distribution_delay(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.distribution_delay.as_ref()
  }

  pub fn reset_distribution_delay(&mut self) {
    self.distribution_delay = None;
  }

  pub fn set_service_user_target(&mut self, service_user_target: ::models::ConfigNodePropertyString) {
    self.service_user_target = Some(service_user_target);
  }

  pub fn with_service_user_target(mut self, service_user_target: ::models::ConfigNodePropertyString) -> ComAdobeGraniteDistributionCoreImplDiffDiffChangesObserverProperties {
    self.service_user_target = Some(service_user_target);
    self
  }

  pub fn service_user_target(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.service_user_target.as_ref()
  }

  pub fn reset_service_user_target(&mut self) {
    self.service_user_target = None;
  }

}



