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
pub struct ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties {
  #[serde(rename = "oauth.token.revocation.active")]
  oauth_token_revocation_active: Option<::models::ConfigNodePropertyBoolean>
}

impl ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties {
  pub fn new() -> ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties {
    ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties {
      oauth_token_revocation_active: None
    }
  }

  pub fn set_oauth_token_revocation_active(&mut self, oauth_token_revocation_active: ::models::ConfigNodePropertyBoolean) {
    self.oauth_token_revocation_active = Some(oauth_token_revocation_active);
  }

  pub fn with_oauth_token_revocation_active(mut self, oauth_token_revocation_active: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteOauthServerImplOAuth2TokenRevocationServletProperties {
    self.oauth_token_revocation_active = Some(oauth_token_revocation_active);
    self
  }

  pub fn oauth_token_revocation_active(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.oauth_token_revocation_active.as_ref()
  }

  pub fn reset_oauth_token_revocation_active(&mut self) {
    self.oauth_token_revocation_active = None;
  }

}



