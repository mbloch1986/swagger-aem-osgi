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
pub struct OrgApacheSlingDistributionResourcesImplDistributionServiceResourProperties {
  #[serde(rename = "provider.roots")]
  provider_roots: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "kind")]
  kind: Option<::models::ConfigNodePropertyString>
}

impl OrgApacheSlingDistributionResourcesImplDistributionServiceResourProperties {
  pub fn new() -> OrgApacheSlingDistributionResourcesImplDistributionServiceResourProperties {
    OrgApacheSlingDistributionResourcesImplDistributionServiceResourProperties {
      provider_roots: None,
      kind: None
    }
  }

  pub fn set_provider_roots(&mut self, provider_roots: ::models::ConfigNodePropertyString) {
    self.provider_roots = Some(provider_roots);
  }

  pub fn with_provider_roots(mut self, provider_roots: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionResourcesImplDistributionServiceResourProperties {
    self.provider_roots = Some(provider_roots);
    self
  }

  pub fn provider_roots(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.provider_roots.as_ref()
  }

  pub fn reset_provider_roots(&mut self) {
    self.provider_roots = None;
  }

  pub fn set_kind(&mut self, kind: ::models::ConfigNodePropertyString) {
    self.kind = Some(kind);
  }

  pub fn with_kind(mut self, kind: ::models::ConfigNodePropertyString) -> OrgApacheSlingDistributionResourcesImplDistributionServiceResourProperties {
    self.kind = Some(kind);
    self
  }

  pub fn kind(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.kind.as_ref()
  }

  pub fn reset_kind(&mut self) {
    self.kind = None;
  }

}



