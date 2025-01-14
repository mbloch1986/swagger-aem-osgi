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
pub struct OrgApacheSlingCommonsLogLogManagerProperties {
  #[serde(rename = "org.apache.sling.commons.log.level")]
  org_apache_sling_commons_log_level: Option<::models::ConfigNodePropertyDropDown>,
  #[serde(rename = "org.apache.sling.commons.log.file")]
  org_apache_sling_commons_log_file: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "org.apache.sling.commons.log.file.number")]
  org_apache_sling_commons_log_file_number: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "org.apache.sling.commons.log.file.size")]
  org_apache_sling_commons_log_file_size: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "org.apache.sling.commons.log.pattern")]
  org_apache_sling_commons_log_pattern: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "org.apache.sling.commons.log.configurationFile")]
  org_apache_sling_commons_log_configuration_file: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "org.apache.sling.commons.log.packagingDataEnabled")]
  org_apache_sling_commons_log_packaging_data_enabled: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "org.apache.sling.commons.log.maxCallerDataDepth")]
  org_apache_sling_commons_log_max_caller_data_depth: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "org.apache.sling.commons.log.maxOldFileCountInDump")]
  org_apache_sling_commons_log_max_old_file_count_in_dump: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "org.apache.sling.commons.log.numOfLines")]
  org_apache_sling_commons_log_num_of_lines: Option<::models::ConfigNodePropertyInteger>
}

impl OrgApacheSlingCommonsLogLogManagerProperties {
  pub fn new() -> OrgApacheSlingCommonsLogLogManagerProperties {
    OrgApacheSlingCommonsLogLogManagerProperties {
      org_apache_sling_commons_log_level: None,
      org_apache_sling_commons_log_file: None,
      org_apache_sling_commons_log_file_number: None,
      org_apache_sling_commons_log_file_size: None,
      org_apache_sling_commons_log_pattern: None,
      org_apache_sling_commons_log_configuration_file: None,
      org_apache_sling_commons_log_packaging_data_enabled: None,
      org_apache_sling_commons_log_max_caller_data_depth: None,
      org_apache_sling_commons_log_max_old_file_count_in_dump: None,
      org_apache_sling_commons_log_num_of_lines: None
    }
  }

  pub fn set_org_apache_sling_commons_log_level(&mut self, org_apache_sling_commons_log_level: ::models::ConfigNodePropertyDropDown) {
    self.org_apache_sling_commons_log_level = Some(org_apache_sling_commons_log_level);
  }

  pub fn with_org_apache_sling_commons_log_level(mut self, org_apache_sling_commons_log_level: ::models::ConfigNodePropertyDropDown) -> OrgApacheSlingCommonsLogLogManagerProperties {
    self.org_apache_sling_commons_log_level = Some(org_apache_sling_commons_log_level);
    self
  }

  pub fn org_apache_sling_commons_log_level(&self) -> Option<&::models::ConfigNodePropertyDropDown> {
    self.org_apache_sling_commons_log_level.as_ref()
  }

  pub fn reset_org_apache_sling_commons_log_level(&mut self) {
    self.org_apache_sling_commons_log_level = None;
  }

  pub fn set_org_apache_sling_commons_log_file(&mut self, org_apache_sling_commons_log_file: ::models::ConfigNodePropertyString) {
    self.org_apache_sling_commons_log_file = Some(org_apache_sling_commons_log_file);
  }

  pub fn with_org_apache_sling_commons_log_file(mut self, org_apache_sling_commons_log_file: ::models::ConfigNodePropertyString) -> OrgApacheSlingCommonsLogLogManagerProperties {
    self.org_apache_sling_commons_log_file = Some(org_apache_sling_commons_log_file);
    self
  }

  pub fn org_apache_sling_commons_log_file(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.org_apache_sling_commons_log_file.as_ref()
  }

  pub fn reset_org_apache_sling_commons_log_file(&mut self) {
    self.org_apache_sling_commons_log_file = None;
  }

  pub fn set_org_apache_sling_commons_log_file_number(&mut self, org_apache_sling_commons_log_file_number: ::models::ConfigNodePropertyInteger) {
    self.org_apache_sling_commons_log_file_number = Some(org_apache_sling_commons_log_file_number);
  }

  pub fn with_org_apache_sling_commons_log_file_number(mut self, org_apache_sling_commons_log_file_number: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingCommonsLogLogManagerProperties {
    self.org_apache_sling_commons_log_file_number = Some(org_apache_sling_commons_log_file_number);
    self
  }

  pub fn org_apache_sling_commons_log_file_number(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.org_apache_sling_commons_log_file_number.as_ref()
  }

  pub fn reset_org_apache_sling_commons_log_file_number(&mut self) {
    self.org_apache_sling_commons_log_file_number = None;
  }

  pub fn set_org_apache_sling_commons_log_file_size(&mut self, org_apache_sling_commons_log_file_size: ::models::ConfigNodePropertyString) {
    self.org_apache_sling_commons_log_file_size = Some(org_apache_sling_commons_log_file_size);
  }

  pub fn with_org_apache_sling_commons_log_file_size(mut self, org_apache_sling_commons_log_file_size: ::models::ConfigNodePropertyString) -> OrgApacheSlingCommonsLogLogManagerProperties {
    self.org_apache_sling_commons_log_file_size = Some(org_apache_sling_commons_log_file_size);
    self
  }

  pub fn org_apache_sling_commons_log_file_size(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.org_apache_sling_commons_log_file_size.as_ref()
  }

  pub fn reset_org_apache_sling_commons_log_file_size(&mut self) {
    self.org_apache_sling_commons_log_file_size = None;
  }

  pub fn set_org_apache_sling_commons_log_pattern(&mut self, org_apache_sling_commons_log_pattern: ::models::ConfigNodePropertyString) {
    self.org_apache_sling_commons_log_pattern = Some(org_apache_sling_commons_log_pattern);
  }

  pub fn with_org_apache_sling_commons_log_pattern(mut self, org_apache_sling_commons_log_pattern: ::models::ConfigNodePropertyString) -> OrgApacheSlingCommonsLogLogManagerProperties {
    self.org_apache_sling_commons_log_pattern = Some(org_apache_sling_commons_log_pattern);
    self
  }

  pub fn org_apache_sling_commons_log_pattern(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.org_apache_sling_commons_log_pattern.as_ref()
  }

  pub fn reset_org_apache_sling_commons_log_pattern(&mut self) {
    self.org_apache_sling_commons_log_pattern = None;
  }

  pub fn set_org_apache_sling_commons_log_configuration_file(&mut self, org_apache_sling_commons_log_configuration_file: ::models::ConfigNodePropertyString) {
    self.org_apache_sling_commons_log_configuration_file = Some(org_apache_sling_commons_log_configuration_file);
  }

  pub fn with_org_apache_sling_commons_log_configuration_file(mut self, org_apache_sling_commons_log_configuration_file: ::models::ConfigNodePropertyString) -> OrgApacheSlingCommonsLogLogManagerProperties {
    self.org_apache_sling_commons_log_configuration_file = Some(org_apache_sling_commons_log_configuration_file);
    self
  }

  pub fn org_apache_sling_commons_log_configuration_file(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.org_apache_sling_commons_log_configuration_file.as_ref()
  }

  pub fn reset_org_apache_sling_commons_log_configuration_file(&mut self) {
    self.org_apache_sling_commons_log_configuration_file = None;
  }

  pub fn set_org_apache_sling_commons_log_packaging_data_enabled(&mut self, org_apache_sling_commons_log_packaging_data_enabled: ::models::ConfigNodePropertyBoolean) {
    self.org_apache_sling_commons_log_packaging_data_enabled = Some(org_apache_sling_commons_log_packaging_data_enabled);
  }

  pub fn with_org_apache_sling_commons_log_packaging_data_enabled(mut self, org_apache_sling_commons_log_packaging_data_enabled: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingCommonsLogLogManagerProperties {
    self.org_apache_sling_commons_log_packaging_data_enabled = Some(org_apache_sling_commons_log_packaging_data_enabled);
    self
  }

  pub fn org_apache_sling_commons_log_packaging_data_enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.org_apache_sling_commons_log_packaging_data_enabled.as_ref()
  }

  pub fn reset_org_apache_sling_commons_log_packaging_data_enabled(&mut self) {
    self.org_apache_sling_commons_log_packaging_data_enabled = None;
  }

  pub fn set_org_apache_sling_commons_log_max_caller_data_depth(&mut self, org_apache_sling_commons_log_max_caller_data_depth: ::models::ConfigNodePropertyInteger) {
    self.org_apache_sling_commons_log_max_caller_data_depth = Some(org_apache_sling_commons_log_max_caller_data_depth);
  }

  pub fn with_org_apache_sling_commons_log_max_caller_data_depth(mut self, org_apache_sling_commons_log_max_caller_data_depth: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingCommonsLogLogManagerProperties {
    self.org_apache_sling_commons_log_max_caller_data_depth = Some(org_apache_sling_commons_log_max_caller_data_depth);
    self
  }

  pub fn org_apache_sling_commons_log_max_caller_data_depth(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.org_apache_sling_commons_log_max_caller_data_depth.as_ref()
  }

  pub fn reset_org_apache_sling_commons_log_max_caller_data_depth(&mut self) {
    self.org_apache_sling_commons_log_max_caller_data_depth = None;
  }

  pub fn set_org_apache_sling_commons_log_max_old_file_count_in_dump(&mut self, org_apache_sling_commons_log_max_old_file_count_in_dump: ::models::ConfigNodePropertyInteger) {
    self.org_apache_sling_commons_log_max_old_file_count_in_dump = Some(org_apache_sling_commons_log_max_old_file_count_in_dump);
  }

  pub fn with_org_apache_sling_commons_log_max_old_file_count_in_dump(mut self, org_apache_sling_commons_log_max_old_file_count_in_dump: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingCommonsLogLogManagerProperties {
    self.org_apache_sling_commons_log_max_old_file_count_in_dump = Some(org_apache_sling_commons_log_max_old_file_count_in_dump);
    self
  }

  pub fn org_apache_sling_commons_log_max_old_file_count_in_dump(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.org_apache_sling_commons_log_max_old_file_count_in_dump.as_ref()
  }

  pub fn reset_org_apache_sling_commons_log_max_old_file_count_in_dump(&mut self) {
    self.org_apache_sling_commons_log_max_old_file_count_in_dump = None;
  }

  pub fn set_org_apache_sling_commons_log_num_of_lines(&mut self, org_apache_sling_commons_log_num_of_lines: ::models::ConfigNodePropertyInteger) {
    self.org_apache_sling_commons_log_num_of_lines = Some(org_apache_sling_commons_log_num_of_lines);
  }

  pub fn with_org_apache_sling_commons_log_num_of_lines(mut self, org_apache_sling_commons_log_num_of_lines: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingCommonsLogLogManagerProperties {
    self.org_apache_sling_commons_log_num_of_lines = Some(org_apache_sling_commons_log_num_of_lines);
    self
  }

  pub fn org_apache_sling_commons_log_num_of_lines(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.org_apache_sling_commons_log_num_of_lines.as_ref()
  }

  pub fn reset_org_apache_sling_commons_log_num_of_lines(&mut self) {
    self.org_apache_sling_commons_log_num_of_lines = None;
  }

}



