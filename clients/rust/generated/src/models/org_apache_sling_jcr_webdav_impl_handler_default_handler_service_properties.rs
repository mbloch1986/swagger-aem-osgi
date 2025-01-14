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
pub struct OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties {
  #[serde(rename = "service.ranking")]
  service_ranking: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "type.collections")]
  type_collections: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "type.noncollections")]
  type_noncollections: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "type.content")]
  type_content: Option<::models::ConfigNodePropertyString>
}

impl OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties {
  pub fn new() -> OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties {
    OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties {
      service_ranking: None,
      type_collections: None,
      type_noncollections: None,
      type_content: None
    }
  }

  pub fn set_service_ranking(&mut self, service_ranking: ::models::ConfigNodePropertyInteger) {
    self.service_ranking = Some(service_ranking);
  }

  pub fn with_service_ranking(mut self, service_ranking: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties {
    self.service_ranking = Some(service_ranking);
    self
  }

  pub fn service_ranking(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.service_ranking.as_ref()
  }

  pub fn reset_service_ranking(&mut self) {
    self.service_ranking = None;
  }

  pub fn set_type_collections(&mut self, type_collections: ::models::ConfigNodePropertyString) {
    self.type_collections = Some(type_collections);
  }

  pub fn with_type_collections(mut self, type_collections: ::models::ConfigNodePropertyString) -> OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties {
    self.type_collections = Some(type_collections);
    self
  }

  pub fn type_collections(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.type_collections.as_ref()
  }

  pub fn reset_type_collections(&mut self) {
    self.type_collections = None;
  }

  pub fn set_type_noncollections(&mut self, type_noncollections: ::models::ConfigNodePropertyString) {
    self.type_noncollections = Some(type_noncollections);
  }

  pub fn with_type_noncollections(mut self, type_noncollections: ::models::ConfigNodePropertyString) -> OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties {
    self.type_noncollections = Some(type_noncollections);
    self
  }

  pub fn type_noncollections(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.type_noncollections.as_ref()
  }

  pub fn reset_type_noncollections(&mut self) {
    self.type_noncollections = None;
  }

  pub fn set_type_content(&mut self, type_content: ::models::ConfigNodePropertyString) {
    self.type_content = Some(type_content);
  }

  pub fn with_type_content(mut self, type_content: ::models::ConfigNodePropertyString) -> OrgApacheSlingJcrWebdavImplHandlerDefaultHandlerServiceProperties {
    self.type_content = Some(type_content);
    self
  }

  pub fn type_content(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.type_content.as_ref()
  }

  pub fn reset_type_content(&mut self) {
    self.type_content = None;
  }

}



