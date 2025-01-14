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
pub struct ComAdobeCqHistoryImplHistoryServiceImplProperties {
  #[serde(rename = "history.service.resourceTypes")]
  history_service_resource_types: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "history.service.pathFilter")]
  history_service_path_filter: Option<::models::ConfigNodePropertyArray>
}

impl ComAdobeCqHistoryImplHistoryServiceImplProperties {
  pub fn new() -> ComAdobeCqHistoryImplHistoryServiceImplProperties {
    ComAdobeCqHistoryImplHistoryServiceImplProperties {
      history_service_resource_types: None,
      history_service_path_filter: None
    }
  }

  pub fn set_history_service_resource_types(&mut self, history_service_resource_types: ::models::ConfigNodePropertyArray) {
    self.history_service_resource_types = Some(history_service_resource_types);
  }

  pub fn with_history_service_resource_types(mut self, history_service_resource_types: ::models::ConfigNodePropertyArray) -> ComAdobeCqHistoryImplHistoryServiceImplProperties {
    self.history_service_resource_types = Some(history_service_resource_types);
    self
  }

  pub fn history_service_resource_types(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.history_service_resource_types.as_ref()
  }

  pub fn reset_history_service_resource_types(&mut self) {
    self.history_service_resource_types = None;
  }

  pub fn set_history_service_path_filter(&mut self, history_service_path_filter: ::models::ConfigNodePropertyArray) {
    self.history_service_path_filter = Some(history_service_path_filter);
  }

  pub fn with_history_service_path_filter(mut self, history_service_path_filter: ::models::ConfigNodePropertyArray) -> ComAdobeCqHistoryImplHistoryServiceImplProperties {
    self.history_service_path_filter = Some(history_service_path_filter);
    self
  }

  pub fn history_service_path_filter(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.history_service_path_filter.as_ref()
  }

  pub fn reset_history_service_path_filter(&mut self) {
    self.history_service_path_filter = None;
  }

}



