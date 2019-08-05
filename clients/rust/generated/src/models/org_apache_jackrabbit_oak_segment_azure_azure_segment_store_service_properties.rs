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
pub struct OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties {
  #[serde(rename = "accountName")]
  account_name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "containerName")]
  container_name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "accessKey")]
  access_key: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "rootPath")]
  root_path: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "connectionURL")]
  connection_url: Option<::models::ConfigNodePropertyString>
}

impl OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties {
  pub fn new() -> OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties {
    OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties {
      account_name: None,
      container_name: None,
      access_key: None,
      root_path: None,
      connection_url: None
    }
  }

  pub fn set_account_name(&mut self, account_name: ::models::ConfigNodePropertyString) {
    self.account_name = Some(account_name);
  }

  pub fn with_account_name(mut self, account_name: ::models::ConfigNodePropertyString) -> OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties {
    self.account_name = Some(account_name);
    self
  }

  pub fn account_name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.account_name.as_ref()
  }

  pub fn reset_account_name(&mut self) {
    self.account_name = None;
  }

  pub fn set_container_name(&mut self, container_name: ::models::ConfigNodePropertyString) {
    self.container_name = Some(container_name);
  }

  pub fn with_container_name(mut self, container_name: ::models::ConfigNodePropertyString) -> OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties {
    self.container_name = Some(container_name);
    self
  }

  pub fn container_name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.container_name.as_ref()
  }

  pub fn reset_container_name(&mut self) {
    self.container_name = None;
  }

  pub fn set_access_key(&mut self, access_key: ::models::ConfigNodePropertyString) {
    self.access_key = Some(access_key);
  }

  pub fn with_access_key(mut self, access_key: ::models::ConfigNodePropertyString) -> OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties {
    self.access_key = Some(access_key);
    self
  }

  pub fn access_key(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.access_key.as_ref()
  }

  pub fn reset_access_key(&mut self) {
    self.access_key = None;
  }

  pub fn set_root_path(&mut self, root_path: ::models::ConfigNodePropertyString) {
    self.root_path = Some(root_path);
  }

  pub fn with_root_path(mut self, root_path: ::models::ConfigNodePropertyString) -> OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties {
    self.root_path = Some(root_path);
    self
  }

  pub fn root_path(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.root_path.as_ref()
  }

  pub fn reset_root_path(&mut self) {
    self.root_path = None;
  }

  pub fn set_connection_url(&mut self, connection_url: ::models::ConfigNodePropertyString) {
    self.connection_url = Some(connection_url);
  }

  pub fn with_connection_url(mut self, connection_url: ::models::ConfigNodePropertyString) -> OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties {
    self.connection_url = Some(connection_url);
    self
  }

  pub fn connection_url(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.connection_url.as_ref()
  }

  pub fn reset_connection_url(&mut self) {
    self.connection_url = None;
  }

}


