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
pub struct ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties {
  #[serde(rename = "threshold")]
  threshold: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "jobTopicName")]
  job_topic_name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "emailEnabled")]
  email_enabled: Option<::models::ConfigNodePropertyBoolean>
}

impl ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties {
  pub fn new() -> ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties {
    ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties {
      threshold: None,
      job_topic_name: None,
      email_enabled: None
    }
  }

  pub fn set_threshold(&mut self, threshold: ::models::ConfigNodePropertyInteger) {
    self.threshold = Some(threshold);
  }

  pub fn with_threshold(mut self, threshold: ::models::ConfigNodePropertyInteger) -> ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties {
    self.threshold = Some(threshold);
    self
  }

  pub fn threshold(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.threshold.as_ref()
  }

  pub fn reset_threshold(&mut self) {
    self.threshold = None;
  }

  pub fn set_job_topic_name(&mut self, job_topic_name: ::models::ConfigNodePropertyString) {
    self.job_topic_name = Some(job_topic_name);
  }

  pub fn with_job_topic_name(mut self, job_topic_name: ::models::ConfigNodePropertyString) -> ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties {
    self.job_topic_name = Some(job_topic_name);
    self
  }

  pub fn job_topic_name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.job_topic_name.as_ref()
  }

  pub fn reset_job_topic_name(&mut self) {
    self.job_topic_name = None;
  }

  pub fn set_email_enabled(&mut self, email_enabled: ::models::ConfigNodePropertyBoolean) {
    self.email_enabled = Some(email_enabled);
  }

  pub fn with_email_enabled(mut self, email_enabled: ::models::ConfigNodePropertyBoolean) -> ComAdobeCqWcmJobsAsyncImplAsyncDeleteConfigProviderServiceProperties {
    self.email_enabled = Some(email_enabled);
    self
  }

  pub fn email_enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.email_enabled.as_ref()
  }

  pub fn reset_email_enabled(&mut self) {
    self.email_enabled = None;
  }

}



