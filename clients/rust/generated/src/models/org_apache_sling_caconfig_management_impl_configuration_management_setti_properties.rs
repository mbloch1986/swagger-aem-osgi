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
pub struct OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties {
  #[serde(rename = "ignorePropertyNameRegex")]
  ignore_property_name_regex: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "configCollectionPropertiesResourceNames")]
  config_collection_properties_resource_names: Option<::models::ConfigNodePropertyArray>
}

impl OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties {
  pub fn new() -> OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties {
    OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties {
      ignore_property_name_regex: None,
      config_collection_properties_resource_names: None
    }
  }

  pub fn set_ignore_property_name_regex(&mut self, ignore_property_name_regex: ::models::ConfigNodePropertyArray) {
    self.ignore_property_name_regex = Some(ignore_property_name_regex);
  }

  pub fn with_ignore_property_name_regex(mut self, ignore_property_name_regex: ::models::ConfigNodePropertyArray) -> OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties {
    self.ignore_property_name_regex = Some(ignore_property_name_regex);
    self
  }

  pub fn ignore_property_name_regex(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.ignore_property_name_regex.as_ref()
  }

  pub fn reset_ignore_property_name_regex(&mut self) {
    self.ignore_property_name_regex = None;
  }

  pub fn set_config_collection_properties_resource_names(&mut self, config_collection_properties_resource_names: ::models::ConfigNodePropertyArray) {
    self.config_collection_properties_resource_names = Some(config_collection_properties_resource_names);
  }

  pub fn with_config_collection_properties_resource_names(mut self, config_collection_properties_resource_names: ::models::ConfigNodePropertyArray) -> OrgApacheSlingCaconfigManagementImplConfigurationManagementSettiProperties {
    self.config_collection_properties_resource_names = Some(config_collection_properties_resource_names);
    self
  }

  pub fn config_collection_properties_resource_names(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.config_collection_properties_resource_names.as_ref()
  }

  pub fn reset_config_collection_properties_resource_names(&mut self) {
    self.config_collection_properties_resource_names = None;
  }

}


