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
pub struct ComAdobeCqSocialGroupImplGroupServiceImplProperties {
  #[serde(rename = "maxWaitTime")]
  max_wait_time: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "minWaitBetweenRetries")]
  min_wait_between_retries: Option<::models::ConfigNodePropertyInteger>
}

impl ComAdobeCqSocialGroupImplGroupServiceImplProperties {
  pub fn new() -> ComAdobeCqSocialGroupImplGroupServiceImplProperties {
    ComAdobeCqSocialGroupImplGroupServiceImplProperties {
      max_wait_time: None,
      min_wait_between_retries: None
    }
  }

  pub fn set_max_wait_time(&mut self, max_wait_time: ::models::ConfigNodePropertyInteger) {
    self.max_wait_time = Some(max_wait_time);
  }

  pub fn with_max_wait_time(mut self, max_wait_time: ::models::ConfigNodePropertyInteger) -> ComAdobeCqSocialGroupImplGroupServiceImplProperties {
    self.max_wait_time = Some(max_wait_time);
    self
  }

  pub fn max_wait_time(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.max_wait_time.as_ref()
  }

  pub fn reset_max_wait_time(&mut self) {
    self.max_wait_time = None;
  }

  pub fn set_min_wait_between_retries(&mut self, min_wait_between_retries: ::models::ConfigNodePropertyInteger) {
    self.min_wait_between_retries = Some(min_wait_between_retries);
  }

  pub fn with_min_wait_between_retries(mut self, min_wait_between_retries: ::models::ConfigNodePropertyInteger) -> ComAdobeCqSocialGroupImplGroupServiceImplProperties {
    self.min_wait_between_retries = Some(min_wait_between_retries);
    self
  }

  pub fn min_wait_between_retries(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.min_wait_between_retries.as_ref()
  }

  pub fn reset_min_wait_between_retries(&mut self) {
    self.min_wait_between_retries = None;
  }

}



