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
pub struct OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties {
  #[serde(rename = "cugSupportedPaths")]
  cug_supported_paths: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "cugEnabled")]
  cug_enabled: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "configurationRanking")]
  configuration_ranking: Option<::models::ConfigNodePropertyInteger>
}

impl OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties {
  pub fn new() -> OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties {
    OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties {
      cug_supported_paths: None,
      cug_enabled: None,
      configuration_ranking: None
    }
  }

  pub fn set_cug_supported_paths(&mut self, cug_supported_paths: ::models::ConfigNodePropertyArray) {
    self.cug_supported_paths = Some(cug_supported_paths);
  }

  pub fn with_cug_supported_paths(mut self, cug_supported_paths: ::models::ConfigNodePropertyArray) -> OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties {
    self.cug_supported_paths = Some(cug_supported_paths);
    self
  }

  pub fn cug_supported_paths(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.cug_supported_paths.as_ref()
  }

  pub fn reset_cug_supported_paths(&mut self) {
    self.cug_supported_paths = None;
  }

  pub fn set_cug_enabled(&mut self, cug_enabled: ::models::ConfigNodePropertyBoolean) {
    self.cug_enabled = Some(cug_enabled);
  }

  pub fn with_cug_enabled(mut self, cug_enabled: ::models::ConfigNodePropertyBoolean) -> OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties {
    self.cug_enabled = Some(cug_enabled);
    self
  }

  pub fn cug_enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.cug_enabled.as_ref()
  }

  pub fn reset_cug_enabled(&mut self) {
    self.cug_enabled = None;
  }

  pub fn set_configuration_ranking(&mut self, configuration_ranking: ::models::ConfigNodePropertyInteger) {
    self.configuration_ranking = Some(configuration_ranking);
  }

  pub fn with_configuration_ranking(mut self, configuration_ranking: ::models::ConfigNodePropertyInteger) -> OrgApacheJackrabbitOakSpiSecurityAuthorizationCugImplCugConfiProperties {
    self.configuration_ranking = Some(configuration_ranking);
    self
  }

  pub fn configuration_ranking(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.configuration_ranking.as_ref()
  }

  pub fn reset_configuration_ranking(&mut self) {
    self.configuration_ranking = None;
  }

}


