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
pub struct ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties {
  #[serde(rename = "path")]
  path: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "jaas.controlFlag")]
  jaas_control_flag: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "jaas.realmName")]
  jaas_realm_name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "jaas.ranking")]
  jaas_ranking: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "oauth.offline.validation")]
  oauth_offline_validation: Option<::models::ConfigNodePropertyBoolean>
}

impl ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties {
  pub fn new() -> ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties {
    ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties {
      path: None,
      jaas_control_flag: None,
      jaas_realm_name: None,
      jaas_ranking: None,
      oauth_offline_validation: None
    }
  }

  pub fn set_path(&mut self, path: ::models::ConfigNodePropertyString) {
    self.path = Some(path);
  }

  pub fn with_path(mut self, path: ::models::ConfigNodePropertyString) -> ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties {
    self.path = Some(path);
    self
  }

  pub fn path(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.path.as_ref()
  }

  pub fn reset_path(&mut self) {
    self.path = None;
  }

  pub fn set_jaas_control_flag(&mut self, jaas_control_flag: ::models::ConfigNodePropertyString) {
    self.jaas_control_flag = Some(jaas_control_flag);
  }

  pub fn with_jaas_control_flag(mut self, jaas_control_flag: ::models::ConfigNodePropertyString) -> ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties {
    self.jaas_control_flag = Some(jaas_control_flag);
    self
  }

  pub fn jaas_control_flag(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.jaas_control_flag.as_ref()
  }

  pub fn reset_jaas_control_flag(&mut self) {
    self.jaas_control_flag = None;
  }

  pub fn set_jaas_realm_name(&mut self, jaas_realm_name: ::models::ConfigNodePropertyString) {
    self.jaas_realm_name = Some(jaas_realm_name);
  }

  pub fn with_jaas_realm_name(mut self, jaas_realm_name: ::models::ConfigNodePropertyString) -> ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties {
    self.jaas_realm_name = Some(jaas_realm_name);
    self
  }

  pub fn jaas_realm_name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.jaas_realm_name.as_ref()
  }

  pub fn reset_jaas_realm_name(&mut self) {
    self.jaas_realm_name = None;
  }

  pub fn set_jaas_ranking(&mut self, jaas_ranking: ::models::ConfigNodePropertyInteger) {
    self.jaas_ranking = Some(jaas_ranking);
  }

  pub fn with_jaas_ranking(mut self, jaas_ranking: ::models::ConfigNodePropertyInteger) -> ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties {
    self.jaas_ranking = Some(jaas_ranking);
    self
  }

  pub fn jaas_ranking(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.jaas_ranking.as_ref()
  }

  pub fn reset_jaas_ranking(&mut self) {
    self.jaas_ranking = None;
  }

  pub fn set_oauth_offline_validation(&mut self, oauth_offline_validation: ::models::ConfigNodePropertyBoolean) {
    self.oauth_offline_validation = Some(oauth_offline_validation);
  }

  pub fn with_oauth_offline_validation(mut self, oauth_offline_validation: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteOauthServerAuthImplOAuth2ServerAuthenticationHanProperties {
    self.oauth_offline_validation = Some(oauth_offline_validation);
    self
  }

  pub fn oauth_offline_validation(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.oauth_offline_validation.as_ref()
  }

  pub fn reset_oauth_offline_validation(&mut self) {
    self.oauth_offline_validation = None;
  }

}


