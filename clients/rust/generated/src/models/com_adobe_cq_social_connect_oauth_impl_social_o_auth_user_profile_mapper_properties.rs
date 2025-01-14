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
pub struct ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties {
  #[serde(rename = "facebook")]
  facebook: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "twitter")]
  twitter: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "provider.config.user.folder")]
  provider_config_user_folder: Option<::models::ConfigNodePropertyString>
}

impl ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties {
  pub fn new() -> ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties {
    ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties {
      facebook: None,
      twitter: None,
      provider_config_user_folder: None
    }
  }

  pub fn set_facebook(&mut self, facebook: ::models::ConfigNodePropertyArray) {
    self.facebook = Some(facebook);
  }

  pub fn with_facebook(mut self, facebook: ::models::ConfigNodePropertyArray) -> ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties {
    self.facebook = Some(facebook);
    self
  }

  pub fn facebook(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.facebook.as_ref()
  }

  pub fn reset_facebook(&mut self) {
    self.facebook = None;
  }

  pub fn set_twitter(&mut self, twitter: ::models::ConfigNodePropertyArray) {
    self.twitter = Some(twitter);
  }

  pub fn with_twitter(mut self, twitter: ::models::ConfigNodePropertyArray) -> ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties {
    self.twitter = Some(twitter);
    self
  }

  pub fn twitter(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.twitter.as_ref()
  }

  pub fn reset_twitter(&mut self) {
    self.twitter = None;
  }

  pub fn set_provider_config_user_folder(&mut self, provider_config_user_folder: ::models::ConfigNodePropertyString) {
    self.provider_config_user_folder = Some(provider_config_user_folder);
  }

  pub fn with_provider_config_user_folder(mut self, provider_config_user_folder: ::models::ConfigNodePropertyString) -> ComAdobeCqSocialConnectOauthImplSocialOAuthUserProfileMapperProperties {
    self.provider_config_user_folder = Some(provider_config_user_folder);
    self
  }

  pub fn provider_config_user_folder(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.provider_config_user_folder.as_ref()
  }

  pub fn reset_provider_config_user_folder(&mut self) {
    self.provider_config_user_folder = None;
  }

}



