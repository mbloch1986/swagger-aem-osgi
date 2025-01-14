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
pub struct ComAdobeGraniteAuthImsImplImsProviderImplProperties {
  #[serde(rename = "oauth.provider.id")]
  oauth_provider_id: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "oauth.provider.ims.authorization.url")]
  oauth_provider_ims_authorization_url: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "oauth.provider.ims.token.url")]
  oauth_provider_ims_token_url: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "oauth.provider.ims.profile.url")]
  oauth_provider_ims_profile_url: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "oauth.provider.ims.extended.details.urls")]
  oauth_provider_ims_extended_details_urls: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "oauth.provider.ims.validate.token.url")]
  oauth_provider_ims_validate_token_url: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "oauth.provider.ims.session.property")]
  oauth_provider_ims_session_property: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "oauth.provider.ims.service.token.client.id")]
  oauth_provider_ims_service_token_client_id: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "oauth.provider.ims.service.token.client.secret")]
  oauth_provider_ims_service_token_client_secret: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "oauth.provider.ims.service.token")]
  oauth_provider_ims_service_token: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "ims.org.ref")]
  ims_org_ref: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "ims.group.mapping")]
  ims_group_mapping: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "oauth.provider.ims.only.license.group")]
  oauth_provider_ims_only_license_group: Option<::models::ConfigNodePropertyBoolean>
}

impl ComAdobeGraniteAuthImsImplImsProviderImplProperties {
  pub fn new() -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    ComAdobeGraniteAuthImsImplImsProviderImplProperties {
      oauth_provider_id: None,
      oauth_provider_ims_authorization_url: None,
      oauth_provider_ims_token_url: None,
      oauth_provider_ims_profile_url: None,
      oauth_provider_ims_extended_details_urls: None,
      oauth_provider_ims_validate_token_url: None,
      oauth_provider_ims_session_property: None,
      oauth_provider_ims_service_token_client_id: None,
      oauth_provider_ims_service_token_client_secret: None,
      oauth_provider_ims_service_token: None,
      ims_org_ref: None,
      ims_group_mapping: None,
      oauth_provider_ims_only_license_group: None
    }
  }

  pub fn set_oauth_provider_id(&mut self, oauth_provider_id: ::models::ConfigNodePropertyString) {
    self.oauth_provider_id = Some(oauth_provider_id);
  }

  pub fn with_oauth_provider_id(mut self, oauth_provider_id: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.oauth_provider_id = Some(oauth_provider_id);
    self
  }

  pub fn oauth_provider_id(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_provider_id.as_ref()
  }

  pub fn reset_oauth_provider_id(&mut self) {
    self.oauth_provider_id = None;
  }

  pub fn set_oauth_provider_ims_authorization_url(&mut self, oauth_provider_ims_authorization_url: ::models::ConfigNodePropertyString) {
    self.oauth_provider_ims_authorization_url = Some(oauth_provider_ims_authorization_url);
  }

  pub fn with_oauth_provider_ims_authorization_url(mut self, oauth_provider_ims_authorization_url: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.oauth_provider_ims_authorization_url = Some(oauth_provider_ims_authorization_url);
    self
  }

  pub fn oauth_provider_ims_authorization_url(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_provider_ims_authorization_url.as_ref()
  }

  pub fn reset_oauth_provider_ims_authorization_url(&mut self) {
    self.oauth_provider_ims_authorization_url = None;
  }

  pub fn set_oauth_provider_ims_token_url(&mut self, oauth_provider_ims_token_url: ::models::ConfigNodePropertyString) {
    self.oauth_provider_ims_token_url = Some(oauth_provider_ims_token_url);
  }

  pub fn with_oauth_provider_ims_token_url(mut self, oauth_provider_ims_token_url: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.oauth_provider_ims_token_url = Some(oauth_provider_ims_token_url);
    self
  }

  pub fn oauth_provider_ims_token_url(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_provider_ims_token_url.as_ref()
  }

  pub fn reset_oauth_provider_ims_token_url(&mut self) {
    self.oauth_provider_ims_token_url = None;
  }

  pub fn set_oauth_provider_ims_profile_url(&mut self, oauth_provider_ims_profile_url: ::models::ConfigNodePropertyString) {
    self.oauth_provider_ims_profile_url = Some(oauth_provider_ims_profile_url);
  }

  pub fn with_oauth_provider_ims_profile_url(mut self, oauth_provider_ims_profile_url: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.oauth_provider_ims_profile_url = Some(oauth_provider_ims_profile_url);
    self
  }

  pub fn oauth_provider_ims_profile_url(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_provider_ims_profile_url.as_ref()
  }

  pub fn reset_oauth_provider_ims_profile_url(&mut self) {
    self.oauth_provider_ims_profile_url = None;
  }

  pub fn set_oauth_provider_ims_extended_details_urls(&mut self, oauth_provider_ims_extended_details_urls: ::models::ConfigNodePropertyArray) {
    self.oauth_provider_ims_extended_details_urls = Some(oauth_provider_ims_extended_details_urls);
  }

  pub fn with_oauth_provider_ims_extended_details_urls(mut self, oauth_provider_ims_extended_details_urls: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.oauth_provider_ims_extended_details_urls = Some(oauth_provider_ims_extended_details_urls);
    self
  }

  pub fn oauth_provider_ims_extended_details_urls(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.oauth_provider_ims_extended_details_urls.as_ref()
  }

  pub fn reset_oauth_provider_ims_extended_details_urls(&mut self) {
    self.oauth_provider_ims_extended_details_urls = None;
  }

  pub fn set_oauth_provider_ims_validate_token_url(&mut self, oauth_provider_ims_validate_token_url: ::models::ConfigNodePropertyString) {
    self.oauth_provider_ims_validate_token_url = Some(oauth_provider_ims_validate_token_url);
  }

  pub fn with_oauth_provider_ims_validate_token_url(mut self, oauth_provider_ims_validate_token_url: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.oauth_provider_ims_validate_token_url = Some(oauth_provider_ims_validate_token_url);
    self
  }

  pub fn oauth_provider_ims_validate_token_url(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_provider_ims_validate_token_url.as_ref()
  }

  pub fn reset_oauth_provider_ims_validate_token_url(&mut self) {
    self.oauth_provider_ims_validate_token_url = None;
  }

  pub fn set_oauth_provider_ims_session_property(&mut self, oauth_provider_ims_session_property: ::models::ConfigNodePropertyString) {
    self.oauth_provider_ims_session_property = Some(oauth_provider_ims_session_property);
  }

  pub fn with_oauth_provider_ims_session_property(mut self, oauth_provider_ims_session_property: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.oauth_provider_ims_session_property = Some(oauth_provider_ims_session_property);
    self
  }

  pub fn oauth_provider_ims_session_property(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_provider_ims_session_property.as_ref()
  }

  pub fn reset_oauth_provider_ims_session_property(&mut self) {
    self.oauth_provider_ims_session_property = None;
  }

  pub fn set_oauth_provider_ims_service_token_client_id(&mut self, oauth_provider_ims_service_token_client_id: ::models::ConfigNodePropertyString) {
    self.oauth_provider_ims_service_token_client_id = Some(oauth_provider_ims_service_token_client_id);
  }

  pub fn with_oauth_provider_ims_service_token_client_id(mut self, oauth_provider_ims_service_token_client_id: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.oauth_provider_ims_service_token_client_id = Some(oauth_provider_ims_service_token_client_id);
    self
  }

  pub fn oauth_provider_ims_service_token_client_id(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_provider_ims_service_token_client_id.as_ref()
  }

  pub fn reset_oauth_provider_ims_service_token_client_id(&mut self) {
    self.oauth_provider_ims_service_token_client_id = None;
  }

  pub fn set_oauth_provider_ims_service_token_client_secret(&mut self, oauth_provider_ims_service_token_client_secret: ::models::ConfigNodePropertyString) {
    self.oauth_provider_ims_service_token_client_secret = Some(oauth_provider_ims_service_token_client_secret);
  }

  pub fn with_oauth_provider_ims_service_token_client_secret(mut self, oauth_provider_ims_service_token_client_secret: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.oauth_provider_ims_service_token_client_secret = Some(oauth_provider_ims_service_token_client_secret);
    self
  }

  pub fn oauth_provider_ims_service_token_client_secret(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_provider_ims_service_token_client_secret.as_ref()
  }

  pub fn reset_oauth_provider_ims_service_token_client_secret(&mut self) {
    self.oauth_provider_ims_service_token_client_secret = None;
  }

  pub fn set_oauth_provider_ims_service_token(&mut self, oauth_provider_ims_service_token: ::models::ConfigNodePropertyString) {
    self.oauth_provider_ims_service_token = Some(oauth_provider_ims_service_token);
  }

  pub fn with_oauth_provider_ims_service_token(mut self, oauth_provider_ims_service_token: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.oauth_provider_ims_service_token = Some(oauth_provider_ims_service_token);
    self
  }

  pub fn oauth_provider_ims_service_token(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.oauth_provider_ims_service_token.as_ref()
  }

  pub fn reset_oauth_provider_ims_service_token(&mut self) {
    self.oauth_provider_ims_service_token = None;
  }

  pub fn set_ims_org_ref(&mut self, ims_org_ref: ::models::ConfigNodePropertyString) {
    self.ims_org_ref = Some(ims_org_ref);
  }

  pub fn with_ims_org_ref(mut self, ims_org_ref: ::models::ConfigNodePropertyString) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.ims_org_ref = Some(ims_org_ref);
    self
  }

  pub fn ims_org_ref(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.ims_org_ref.as_ref()
  }

  pub fn reset_ims_org_ref(&mut self) {
    self.ims_org_ref = None;
  }

  pub fn set_ims_group_mapping(&mut self, ims_group_mapping: ::models::ConfigNodePropertyArray) {
    self.ims_group_mapping = Some(ims_group_mapping);
  }

  pub fn with_ims_group_mapping(mut self, ims_group_mapping: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.ims_group_mapping = Some(ims_group_mapping);
    self
  }

  pub fn ims_group_mapping(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.ims_group_mapping.as_ref()
  }

  pub fn reset_ims_group_mapping(&mut self) {
    self.ims_group_mapping = None;
  }

  pub fn set_oauth_provider_ims_only_license_group(&mut self, oauth_provider_ims_only_license_group: ::models::ConfigNodePropertyBoolean) {
    self.oauth_provider_ims_only_license_group = Some(oauth_provider_ims_only_license_group);
  }

  pub fn with_oauth_provider_ims_only_license_group(mut self, oauth_provider_ims_only_license_group: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteAuthImsImplImsProviderImplProperties {
    self.oauth_provider_ims_only_license_group = Some(oauth_provider_ims_only_license_group);
    self
  }

  pub fn oauth_provider_ims_only_license_group(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.oauth_provider_ims_only_license_group.as_ref()
  }

  pub fn reset_oauth_provider_ims_only_license_group(&mut self) {
    self.oauth_provider_ims_only_license_group = None;
  }

}



