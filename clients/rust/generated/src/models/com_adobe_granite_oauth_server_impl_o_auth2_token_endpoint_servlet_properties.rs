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
pub struct ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties {
  #[serde(rename = "oauth.issuer")]
  oauth_issuer: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "oauth.access.token.expires.in")]
  oauth_access_token_expires_in: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "osgi.http.whiteboard.servlet.pattern")]
  osgi_http_whiteboard_servlet_pattern: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "osgi.http.whiteboard.context.select")]
  osgi_http_whiteboard_context_select: Option<::models::ConfigNodePropertyString>
}

impl ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties {
  pub fn new() -> ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties {
    ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties {
      oauth_issuer: None,
      oauth_access_token_expires_in: None,
      osgi_http_whiteboard_servlet_pattern: None,
      osgi_http_whiteboard_context_select: None
    }
  }

  pub fn set_oauth_issuer(&mut self, oauth_issuer: ::models::ConfigNodePropertyString) {
    self.oauth_issuer = Some(oauth_issuer);
  }

  pub fn with_oauth_issuer(mut self, oauth_issuer: ::models::ConfigNodePropertyString) -> ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties {
    self.oauth_issuer = Some(oauth_issuer);
    self
  }

  pub fn oauth_issuer(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_issuer.as_ref()
  }

  pub fn reset_oauth_issuer(&mut self) {
    self.oauth_issuer = None;
  }

  pub fn set_oauth_access_token_expires_in(&mut self, oauth_access_token_expires_in: ::models::ConfigNodePropertyString) {
    self.oauth_access_token_expires_in = Some(oauth_access_token_expires_in);
  }

  pub fn with_oauth_access_token_expires_in(mut self, oauth_access_token_expires_in: ::models::ConfigNodePropertyString) -> ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties {
    self.oauth_access_token_expires_in = Some(oauth_access_token_expires_in);
    self
  }

  pub fn oauth_access_token_expires_in(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_access_token_expires_in.as_ref()
  }

  pub fn reset_oauth_access_token_expires_in(&mut self) {
    self.oauth_access_token_expires_in = None;
  }

  pub fn set_osgi_http_whiteboard_servlet_pattern(&mut self, osgi_http_whiteboard_servlet_pattern: ::models::ConfigNodePropertyString) {
    self.osgi_http_whiteboard_servlet_pattern = Some(osgi_http_whiteboard_servlet_pattern);
  }

  pub fn with_osgi_http_whiteboard_servlet_pattern(mut self, osgi_http_whiteboard_servlet_pattern: ::models::ConfigNodePropertyString) -> ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties {
    self.osgi_http_whiteboard_servlet_pattern = Some(osgi_http_whiteboard_servlet_pattern);
    self
  }

  pub fn osgi_http_whiteboard_servlet_pattern(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.osgi_http_whiteboard_servlet_pattern.as_ref()
  }

  pub fn reset_osgi_http_whiteboard_servlet_pattern(&mut self) {
    self.osgi_http_whiteboard_servlet_pattern = None;
  }

  pub fn set_osgi_http_whiteboard_context_select(&mut self, osgi_http_whiteboard_context_select: ::models::ConfigNodePropertyString) {
    self.osgi_http_whiteboard_context_select = Some(osgi_http_whiteboard_context_select);
  }

  pub fn with_osgi_http_whiteboard_context_select(mut self, osgi_http_whiteboard_context_select: ::models::ConfigNodePropertyString) -> ComAdobeGraniteOauthServerImplOAuth2TokenEndpointServletProperties {
    self.osgi_http_whiteboard_context_select = Some(osgi_http_whiteboard_context_select);
    self
  }

  pub fn osgi_http_whiteboard_context_select(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.osgi_http_whiteboard_context_select.as_ref()
  }

  pub fn reset_osgi_http_whiteboard_context_select(&mut self) {
    self.osgi_http_whiteboard_context_select = None;
  }

}



