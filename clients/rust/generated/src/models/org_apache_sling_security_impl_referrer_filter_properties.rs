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
pub struct OrgApacheSlingSecurityImplReferrerFilterProperties {
  #[serde(rename = "allow.empty")]
  allow_empty: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "allow.hosts")]
  allow_hosts: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "allow.hosts.regexp")]
  allow_hosts_regexp: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "filter.methods")]
  filter_methods: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "exclude.agents.regexp")]
  exclude_agents_regexp: Option<::models::ConfigNodePropertyArray>
}

impl OrgApacheSlingSecurityImplReferrerFilterProperties {
  pub fn new() -> OrgApacheSlingSecurityImplReferrerFilterProperties {
    OrgApacheSlingSecurityImplReferrerFilterProperties {
      allow_empty: None,
      allow_hosts: None,
      allow_hosts_regexp: None,
      filter_methods: None,
      exclude_agents_regexp: None
    }
  }

  pub fn set_allow_empty(&mut self, allow_empty: ::models::ConfigNodePropertyBoolean) {
    self.allow_empty = Some(allow_empty);
  }

  pub fn with_allow_empty(mut self, allow_empty: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingSecurityImplReferrerFilterProperties {
    self.allow_empty = Some(allow_empty);
    self
  }

  pub fn allow_empty(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.allow_empty.as_ref()
  }

  pub fn reset_allow_empty(&mut self) {
    self.allow_empty = None;
  }

  pub fn set_allow_hosts(&mut self, allow_hosts: ::models::ConfigNodePropertyArray) {
    self.allow_hosts = Some(allow_hosts);
  }

  pub fn with_allow_hosts(mut self, allow_hosts: ::models::ConfigNodePropertyArray) -> OrgApacheSlingSecurityImplReferrerFilterProperties {
    self.allow_hosts = Some(allow_hosts);
    self
  }

  pub fn allow_hosts(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.allow_hosts.as_ref()
  }

  pub fn reset_allow_hosts(&mut self) {
    self.allow_hosts = None;
  }

  pub fn set_allow_hosts_regexp(&mut self, allow_hosts_regexp: ::models::ConfigNodePropertyArray) {
    self.allow_hosts_regexp = Some(allow_hosts_regexp);
  }

  pub fn with_allow_hosts_regexp(mut self, allow_hosts_regexp: ::models::ConfigNodePropertyArray) -> OrgApacheSlingSecurityImplReferrerFilterProperties {
    self.allow_hosts_regexp = Some(allow_hosts_regexp);
    self
  }

  pub fn allow_hosts_regexp(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.allow_hosts_regexp.as_ref()
  }

  pub fn reset_allow_hosts_regexp(&mut self) {
    self.allow_hosts_regexp = None;
  }

  pub fn set_filter_methods(&mut self, filter_methods: ::models::ConfigNodePropertyArray) {
    self.filter_methods = Some(filter_methods);
  }

  pub fn with_filter_methods(mut self, filter_methods: ::models::ConfigNodePropertyArray) -> OrgApacheSlingSecurityImplReferrerFilterProperties {
    self.filter_methods = Some(filter_methods);
    self
  }

  pub fn filter_methods(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.filter_methods.as_ref()
  }

  pub fn reset_filter_methods(&mut self) {
    self.filter_methods = None;
  }

  pub fn set_exclude_agents_regexp(&mut self, exclude_agents_regexp: ::models::ConfigNodePropertyArray) {
    self.exclude_agents_regexp = Some(exclude_agents_regexp);
  }

  pub fn with_exclude_agents_regexp(mut self, exclude_agents_regexp: ::models::ConfigNodePropertyArray) -> OrgApacheSlingSecurityImplReferrerFilterProperties {
    self.exclude_agents_regexp = Some(exclude_agents_regexp);
    self
  }

  pub fn exclude_agents_regexp(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.exclude_agents_regexp.as_ref()
  }

  pub fn reset_exclude_agents_regexp(&mut self) {
    self.exclude_agents_regexp = None;
  }

}



