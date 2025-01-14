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
pub struct OrgApacheSlingScriptingCoreImplScriptCacheImplProperties {
  #[serde(rename = "org.apache.sling.scripting.cache.size")]
  org_apache_sling_scripting_cache_size: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "org.apache.sling.scripting.cache.additional_extensions")]
  org_apache_sling_scripting_cache_additional_extensions: Option<::models::ConfigNodePropertyArray>
}

impl OrgApacheSlingScriptingCoreImplScriptCacheImplProperties {
  pub fn new() -> OrgApacheSlingScriptingCoreImplScriptCacheImplProperties {
    OrgApacheSlingScriptingCoreImplScriptCacheImplProperties {
      org_apache_sling_scripting_cache_size: None,
      org_apache_sling_scripting_cache_additional_extensions: None
    }
  }

  pub fn set_org_apache_sling_scripting_cache_size(&mut self, org_apache_sling_scripting_cache_size: ::models::ConfigNodePropertyInteger) {
    self.org_apache_sling_scripting_cache_size = Some(org_apache_sling_scripting_cache_size);
  }

  pub fn with_org_apache_sling_scripting_cache_size(mut self, org_apache_sling_scripting_cache_size: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingScriptingCoreImplScriptCacheImplProperties {
    self.org_apache_sling_scripting_cache_size = Some(org_apache_sling_scripting_cache_size);
    self
  }

  pub fn org_apache_sling_scripting_cache_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.org_apache_sling_scripting_cache_size.as_ref()
  }

  pub fn reset_org_apache_sling_scripting_cache_size(&mut self) {
    self.org_apache_sling_scripting_cache_size = None;
  }

  pub fn set_org_apache_sling_scripting_cache_additional_extensions(&mut self, org_apache_sling_scripting_cache_additional_extensions: ::models::ConfigNodePropertyArray) {
    self.org_apache_sling_scripting_cache_additional_extensions = Some(org_apache_sling_scripting_cache_additional_extensions);
  }

  pub fn with_org_apache_sling_scripting_cache_additional_extensions(mut self, org_apache_sling_scripting_cache_additional_extensions: ::models::ConfigNodePropertyArray) -> OrgApacheSlingScriptingCoreImplScriptCacheImplProperties {
    self.org_apache_sling_scripting_cache_additional_extensions = Some(org_apache_sling_scripting_cache_additional_extensions);
    self
  }

  pub fn org_apache_sling_scripting_cache_additional_extensions(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.org_apache_sling_scripting_cache_additional_extensions.as_ref()
  }

  pub fn reset_org_apache_sling_scripting_cache_additional_extensions(&mut self) {
    self.org_apache_sling_scripting_cache_additional_extensions = None;
  }

}



