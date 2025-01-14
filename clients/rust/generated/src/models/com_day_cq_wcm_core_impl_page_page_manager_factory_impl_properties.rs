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
pub struct ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties {
  #[serde(rename = "illegalCharMapping")]
  illegal_char_mapping: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "pageSubTreeActivationCheck")]
  page_sub_tree_activation_check: Option<::models::ConfigNodePropertyBoolean>
}

impl ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties {
  pub fn new() -> ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties {
    ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties {
      illegal_char_mapping: None,
      page_sub_tree_activation_check: None
    }
  }

  pub fn set_illegal_char_mapping(&mut self, illegal_char_mapping: ::models::ConfigNodePropertyString) {
    self.illegal_char_mapping = Some(illegal_char_mapping);
  }

  pub fn with_illegal_char_mapping(mut self, illegal_char_mapping: ::models::ConfigNodePropertyString) -> ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties {
    self.illegal_char_mapping = Some(illegal_char_mapping);
    self
  }

  pub fn illegal_char_mapping(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.illegal_char_mapping.as_ref()
  }

  pub fn reset_illegal_char_mapping(&mut self) {
    self.illegal_char_mapping = None;
  }

  pub fn set_page_sub_tree_activation_check(&mut self, page_sub_tree_activation_check: ::models::ConfigNodePropertyBoolean) {
    self.page_sub_tree_activation_check = Some(page_sub_tree_activation_check);
  }

  pub fn with_page_sub_tree_activation_check(mut self, page_sub_tree_activation_check: ::models::ConfigNodePropertyBoolean) -> ComDayCqWcmCoreImplPagePageManagerFactoryImplProperties {
    self.page_sub_tree_activation_check = Some(page_sub_tree_activation_check);
    self
  }

  pub fn page_sub_tree_activation_check(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.page_sub_tree_activation_check.as_ref()
  }

  pub fn reset_page_sub_tree_activation_check(&mut self) {
    self.page_sub_tree_activation_check = None;
  }

}



