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
pub struct ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties {
  #[serde(rename = "oauth.cookie.login.timeout")]
  oauth_cookie_login_timeout: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "oauth.cookie.max.age")]
  oauth_cookie_max_age: Option<::models::ConfigNodePropertyString>
}

impl ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties {
  pub fn new() -> ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties {
    ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties {
      oauth_cookie_login_timeout: None,
      oauth_cookie_max_age: None
    }
  }

  pub fn set_oauth_cookie_login_timeout(&mut self, oauth_cookie_login_timeout: ::models::ConfigNodePropertyString) {
    self.oauth_cookie_login_timeout = Some(oauth_cookie_login_timeout);
  }

  pub fn with_oauth_cookie_login_timeout(mut self, oauth_cookie_login_timeout: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties {
    self.oauth_cookie_login_timeout = Some(oauth_cookie_login_timeout);
    self
  }

  pub fn oauth_cookie_login_timeout(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_cookie_login_timeout.as_ref()
  }

  pub fn reset_oauth_cookie_login_timeout(&mut self) {
    self.oauth_cookie_login_timeout = None;
  }

  pub fn set_oauth_cookie_max_age(&mut self, oauth_cookie_max_age: ::models::ConfigNodePropertyString) {
    self.oauth_cookie_max_age = Some(oauth_cookie_max_age);
  }

  pub fn with_oauth_cookie_max_age(mut self, oauth_cookie_max_age: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthOauthImplHelperProviderConfigManagerInternalProperties {
    self.oauth_cookie_max_age = Some(oauth_cookie_max_age);
    self
  }

  pub fn oauth_cookie_max_age(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_cookie_max_age.as_ref()
  }

  pub fn reset_oauth_cookie_max_age(&mut self) {
    self.oauth_cookie_max_age = None;
  }

}



