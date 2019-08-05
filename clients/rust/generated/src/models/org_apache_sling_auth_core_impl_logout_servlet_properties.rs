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
pub struct OrgApacheSlingAuthCoreImplLogoutServletProperties {
  #[serde(rename = "sling.servlet.methods")]
  sling_servlet_methods: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "sling.servlet.paths")]
  sling_servlet_paths: Option<::models::ConfigNodePropertyString>
}

impl OrgApacheSlingAuthCoreImplLogoutServletProperties {
  pub fn new() -> OrgApacheSlingAuthCoreImplLogoutServletProperties {
    OrgApacheSlingAuthCoreImplLogoutServletProperties {
      sling_servlet_methods: None,
      sling_servlet_paths: None
    }
  }

  pub fn set_sling_servlet_methods(&mut self, sling_servlet_methods: ::models::ConfigNodePropertyArray) {
    self.sling_servlet_methods = Some(sling_servlet_methods);
  }

  pub fn with_sling_servlet_methods(mut self, sling_servlet_methods: ::models::ConfigNodePropertyArray) -> OrgApacheSlingAuthCoreImplLogoutServletProperties {
    self.sling_servlet_methods = Some(sling_servlet_methods);
    self
  }

  pub fn sling_servlet_methods(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.sling_servlet_methods.as_ref()
  }

  pub fn reset_sling_servlet_methods(&mut self) {
    self.sling_servlet_methods = None;
  }

  pub fn set_sling_servlet_paths(&mut self, sling_servlet_paths: ::models::ConfigNodePropertyString) {
    self.sling_servlet_paths = Some(sling_servlet_paths);
  }

  pub fn with_sling_servlet_paths(mut self, sling_servlet_paths: ::models::ConfigNodePropertyString) -> OrgApacheSlingAuthCoreImplLogoutServletProperties {
    self.sling_servlet_paths = Some(sling_servlet_paths);
    self
  }

  pub fn sling_servlet_paths(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.sling_servlet_paths.as_ref()
  }

  pub fn reset_sling_servlet_paths(&mut self) {
    self.sling_servlet_paths = None;
  }

}


