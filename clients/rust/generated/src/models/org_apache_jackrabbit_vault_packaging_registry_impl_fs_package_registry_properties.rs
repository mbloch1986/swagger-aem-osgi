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
pub struct OrgApacheJackrabbitVaultPackagingRegistryImplFsPackageRegistryProperties {
  #[serde(rename = "homePath")]
  home_path: Option<::models::ConfigNodePropertyString>
}

impl OrgApacheJackrabbitVaultPackagingRegistryImplFsPackageRegistryProperties {
  pub fn new() -> OrgApacheJackrabbitVaultPackagingRegistryImplFsPackageRegistryProperties {
    OrgApacheJackrabbitVaultPackagingRegistryImplFsPackageRegistryProperties {
      home_path: None
    }
  }

  pub fn set_home_path(&mut self, home_path: ::models::ConfigNodePropertyString) {
    self.home_path = Some(home_path);
  }

  pub fn with_home_path(mut self, home_path: ::models::ConfigNodePropertyString) -> OrgApacheJackrabbitVaultPackagingRegistryImplFsPackageRegistryProperties {
    self.home_path = Some(home_path);
    self
  }

  pub fn home_path(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.home_path.as_ref()
  }

  pub fn reset_home_path(&mut self) {
    self.home_path = None;
  }

}



