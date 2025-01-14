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
pub struct ComAdobeGraniteAuthImsImplImsInstanceCredentialsValidatorProperties {
  #[serde(rename = "oauth.provider.id")]
  oauth_provider_id: Option<::models::ConfigNodePropertyString>
}

impl ComAdobeGraniteAuthImsImplImsInstanceCredentialsValidatorProperties {
  pub fn new() -> ComAdobeGraniteAuthImsImplImsInstanceCredentialsValidatorProperties {
    ComAdobeGraniteAuthImsImplImsInstanceCredentialsValidatorProperties {
      oauth_provider_id: None
    }
  }

  pub fn set_oauth_provider_id(&mut self, oauth_provider_id: ::models::ConfigNodePropertyString) {
    self.oauth_provider_id = Some(oauth_provider_id);
  }

  pub fn with_oauth_provider_id(mut self, oauth_provider_id: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthImsImplImsInstanceCredentialsValidatorProperties {
    self.oauth_provider_id = Some(oauth_provider_id);
    self
  }

  pub fn oauth_provider_id(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_provider_id.as_ref()
  }

  pub fn reset_oauth_provider_id(&mut self) {
    self.oauth_provider_id = None;
  }

}



