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
pub struct ComAdobeGraniteCsrfImplCsrfFilterProperties {
  #[serde(rename = "filter.methods")]
  filter_methods: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "filter.enable.safe.user.agents")]
  filter_enable_safe_user_agents: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "filter.safe.user.agents")]
  filter_safe_user_agents: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "filter.excluded.paths")]
  filter_excluded_paths: Option<::models::ConfigNodePropertyArray>
}

impl ComAdobeGraniteCsrfImplCsrfFilterProperties {
  pub fn new() -> ComAdobeGraniteCsrfImplCsrfFilterProperties {
    ComAdobeGraniteCsrfImplCsrfFilterProperties {
      filter_methods: None,
      filter_enable_safe_user_agents: None,
      filter_safe_user_agents: None,
      filter_excluded_paths: None
    }
  }

  pub fn set_filter_methods(&mut self, filter_methods: ::models::ConfigNodePropertyArray) {
    self.filter_methods = Some(filter_methods);
  }

  pub fn with_filter_methods(mut self, filter_methods: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteCsrfImplCsrfFilterProperties {
    self.filter_methods = Some(filter_methods);
    self
  }

  pub fn filter_methods(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.filter_methods.as_ref()
  }

  pub fn reset_filter_methods(&mut self) {
    self.filter_methods = None;
  }

  pub fn set_filter_enable_safe_user_agents(&mut self, filter_enable_safe_user_agents: ::models::ConfigNodePropertyBoolean) {
    self.filter_enable_safe_user_agents = Some(filter_enable_safe_user_agents);
  }

  pub fn with_filter_enable_safe_user_agents(mut self, filter_enable_safe_user_agents: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteCsrfImplCsrfFilterProperties {
    self.filter_enable_safe_user_agents = Some(filter_enable_safe_user_agents);
    self
  }

  pub fn filter_enable_safe_user_agents(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.filter_enable_safe_user_agents.as_ref()
  }

  pub fn reset_filter_enable_safe_user_agents(&mut self) {
    self.filter_enable_safe_user_agents = None;
  }

  pub fn set_filter_safe_user_agents(&mut self, filter_safe_user_agents: ::models::ConfigNodePropertyArray) {
    self.filter_safe_user_agents = Some(filter_safe_user_agents);
  }

  pub fn with_filter_safe_user_agents(mut self, filter_safe_user_agents: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteCsrfImplCsrfFilterProperties {
    self.filter_safe_user_agents = Some(filter_safe_user_agents);
    self
  }

  pub fn filter_safe_user_agents(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.filter_safe_user_agents.as_ref()
  }

  pub fn reset_filter_safe_user_agents(&mut self) {
    self.filter_safe_user_agents = None;
  }

  pub fn set_filter_excluded_paths(&mut self, filter_excluded_paths: ::models::ConfigNodePropertyArray) {
    self.filter_excluded_paths = Some(filter_excluded_paths);
  }

  pub fn with_filter_excluded_paths(mut self, filter_excluded_paths: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteCsrfImplCsrfFilterProperties {
    self.filter_excluded_paths = Some(filter_excluded_paths);
    self
  }

  pub fn filter_excluded_paths(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.filter_excluded_paths.as_ref()
  }

  pub fn reset_filter_excluded_paths(&mut self) {
    self.filter_excluded_paths = None;
  }

}



