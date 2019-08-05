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
pub struct ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties {
  #[serde(rename = "scheduler.period")]
  scheduler_period: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "scheduler.concurrent")]
  scheduler_concurrent: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "good_link_test_interval")]
  good_link_test_interval: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "bad_link_test_interval")]
  bad_link_test_interval: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "link_unused_interval")]
  link_unused_interval: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "connection.timeout")]
  connection_timeout: Option<::models::ConfigNodePropertyInteger>
}

impl ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties {
  pub fn new() -> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties {
    ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties {
      scheduler_period: None,
      scheduler_concurrent: None,
      good_link_test_interval: None,
      bad_link_test_interval: None,
      link_unused_interval: None,
      connection_timeout: None
    }
  }

  pub fn set_scheduler_period(&mut self, scheduler_period: ::models::ConfigNodePropertyInteger) {
    self.scheduler_period = Some(scheduler_period);
  }

  pub fn with_scheduler_period(mut self, scheduler_period: ::models::ConfigNodePropertyInteger) -> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties {
    self.scheduler_period = Some(scheduler_period);
    self
  }

  pub fn scheduler_period(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.scheduler_period.as_ref()
  }

  pub fn reset_scheduler_period(&mut self) {
    self.scheduler_period = None;
  }

  pub fn set_scheduler_concurrent(&mut self, scheduler_concurrent: ::models::ConfigNodePropertyBoolean) {
    self.scheduler_concurrent = Some(scheduler_concurrent);
  }

  pub fn with_scheduler_concurrent(mut self, scheduler_concurrent: ::models::ConfigNodePropertyBoolean) -> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties {
    self.scheduler_concurrent = Some(scheduler_concurrent);
    self
  }

  pub fn scheduler_concurrent(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.scheduler_concurrent.as_ref()
  }

  pub fn reset_scheduler_concurrent(&mut self) {
    self.scheduler_concurrent = None;
  }

  pub fn set_good_link_test_interval(&mut self, good_link_test_interval: ::models::ConfigNodePropertyInteger) {
    self.good_link_test_interval = Some(good_link_test_interval);
  }

  pub fn with_good_link_test_interval(mut self, good_link_test_interval: ::models::ConfigNodePropertyInteger) -> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties {
    self.good_link_test_interval = Some(good_link_test_interval);
    self
  }

  pub fn good_link_test_interval(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.good_link_test_interval.as_ref()
  }

  pub fn reset_good_link_test_interval(&mut self) {
    self.good_link_test_interval = None;
  }

  pub fn set_bad_link_test_interval(&mut self, bad_link_test_interval: ::models::ConfigNodePropertyInteger) {
    self.bad_link_test_interval = Some(bad_link_test_interval);
  }

  pub fn with_bad_link_test_interval(mut self, bad_link_test_interval: ::models::ConfigNodePropertyInteger) -> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties {
    self.bad_link_test_interval = Some(bad_link_test_interval);
    self
  }

  pub fn bad_link_test_interval(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.bad_link_test_interval.as_ref()
  }

  pub fn reset_bad_link_test_interval(&mut self) {
    self.bad_link_test_interval = None;
  }

  pub fn set_link_unused_interval(&mut self, link_unused_interval: ::models::ConfigNodePropertyInteger) {
    self.link_unused_interval = Some(link_unused_interval);
  }

  pub fn with_link_unused_interval(mut self, link_unused_interval: ::models::ConfigNodePropertyInteger) -> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties {
    self.link_unused_interval = Some(link_unused_interval);
    self
  }

  pub fn link_unused_interval(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.link_unused_interval.as_ref()
  }

  pub fn reset_link_unused_interval(&mut self) {
    self.link_unused_interval = None;
  }

  pub fn set_connection_timeout(&mut self, connection_timeout: ::models::ConfigNodePropertyInteger) {
    self.connection_timeout = Some(connection_timeout);
  }

  pub fn with_connection_timeout(mut self, connection_timeout: ::models::ConfigNodePropertyInteger) -> ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties {
    self.connection_timeout = Some(connection_timeout);
    self
  }

  pub fn connection_timeout(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.connection_timeout.as_ref()
  }

  pub fn reset_connection_timeout(&mut self) {
    self.connection_timeout = None;
  }

}


