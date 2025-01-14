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
pub struct ComDayCqWcmCoreImplServletsFindReplaceServletProperties {
  #[serde(rename = "scope")]
  scope: Option<::models::ConfigNodePropertyArray>
}

impl ComDayCqWcmCoreImplServletsFindReplaceServletProperties {
  pub fn new() -> ComDayCqWcmCoreImplServletsFindReplaceServletProperties {
    ComDayCqWcmCoreImplServletsFindReplaceServletProperties {
      scope: None
    }
  }

  pub fn set_scope(&mut self, scope: ::models::ConfigNodePropertyArray) {
    self.scope = Some(scope);
  }

  pub fn with_scope(mut self, scope: ::models::ConfigNodePropertyArray) -> ComDayCqWcmCoreImplServletsFindReplaceServletProperties {
    self.scope = Some(scope);
    self
  }

  pub fn scope(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.scope.as_ref()
  }

  pub fn reset_scope(&mut self) {
    self.scope = None;
  }

}



