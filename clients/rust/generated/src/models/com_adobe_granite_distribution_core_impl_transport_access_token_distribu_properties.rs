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
pub struct ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties {
  #[serde(rename = "name")]
  name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "serviceName")]
  service_name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "userId")]
  user_id: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "accessTokenProvider.target")]
  access_token_provider_target: Option<::models::ConfigNodePropertyString>
}

impl ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties {
  pub fn new() -> ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties {
    ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties {
      name: None,
      service_name: None,
      user_id: None,
      access_token_provider_target: None
    }
  }

  pub fn set_name(&mut self, name: ::models::ConfigNodePropertyString) {
    self.name = Some(name);
  }

  pub fn with_name(mut self, name: ::models::ConfigNodePropertyString) -> ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties {
    self.name = Some(name);
    self
  }

  pub fn name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.name.as_ref()
  }

  pub fn reset_name(&mut self) {
    self.name = None;
  }

  pub fn set_service_name(&mut self, service_name: ::models::ConfigNodePropertyString) {
    self.service_name = Some(service_name);
  }

  pub fn with_service_name(mut self, service_name: ::models::ConfigNodePropertyString) -> ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties {
    self.service_name = Some(service_name);
    self
  }

  pub fn service_name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.service_name.as_ref()
  }

  pub fn reset_service_name(&mut self) {
    self.service_name = None;
  }

  pub fn set_user_id(&mut self, user_id: ::models::ConfigNodePropertyString) {
    self.user_id = Some(user_id);
  }

  pub fn with_user_id(mut self, user_id: ::models::ConfigNodePropertyString) -> ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties {
    self.user_id = Some(user_id);
    self
  }

  pub fn user_id(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.user_id.as_ref()
  }

  pub fn reset_user_id(&mut self) {
    self.user_id = None;
  }

  pub fn set_access_token_provider_target(&mut self, access_token_provider_target: ::models::ConfigNodePropertyString) {
    self.access_token_provider_target = Some(access_token_provider_target);
  }

  pub fn with_access_token_provider_target(mut self, access_token_provider_target: ::models::ConfigNodePropertyString) -> ComAdobeGraniteDistributionCoreImplTransportAccessTokenDistribuProperties {
    self.access_token_provider_target = Some(access_token_provider_target);
    self
  }

  pub fn access_token_provider_target(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.access_token_provider_target.as_ref()
  }

  pub fn reset_access_token_provider_target(&mut self) {
    self.access_token_provider_target = None;
  }

}


