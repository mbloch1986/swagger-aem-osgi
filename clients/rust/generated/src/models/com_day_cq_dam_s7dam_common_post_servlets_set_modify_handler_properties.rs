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
pub struct ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties {
  #[serde(rename = "sling.post.operation")]
  sling_post_operation: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "sling.servlet.methods")]
  sling_servlet_methods: Option<::models::ConfigNodePropertyString>
}

impl ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties {
  pub fn new() -> ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties {
    ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties {
      sling_post_operation: None,
      sling_servlet_methods: None
    }
  }

  pub fn set_sling_post_operation(&mut self, sling_post_operation: ::models::ConfigNodePropertyString) {
    self.sling_post_operation = Some(sling_post_operation);
  }

  pub fn with_sling_post_operation(mut self, sling_post_operation: ::models::ConfigNodePropertyString) -> ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties {
    self.sling_post_operation = Some(sling_post_operation);
    self
  }

  pub fn sling_post_operation(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.sling_post_operation.as_ref()
  }

  pub fn reset_sling_post_operation(&mut self) {
    self.sling_post_operation = None;
  }

  pub fn set_sling_servlet_methods(&mut self, sling_servlet_methods: ::models::ConfigNodePropertyString) {
    self.sling_servlet_methods = Some(sling_servlet_methods);
  }

  pub fn with_sling_servlet_methods(mut self, sling_servlet_methods: ::models::ConfigNodePropertyString) -> ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties {
    self.sling_servlet_methods = Some(sling_servlet_methods);
    self
  }

  pub fn sling_servlet_methods(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.sling_servlet_methods.as_ref()
  }

  pub fn reset_sling_servlet_methods(&mut self) {
    self.sling_servlet_methods = None;
  }

}



