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
pub struct OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties {
  #[serde(rename = "job.consumermanager.disableDistribution")]
  job_consumermanager_disable_distribution: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "startup.delay")]
  startup_delay: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "cleanup.period")]
  cleanup_period: Option<::models::ConfigNodePropertyInteger>
}

impl OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties {
  pub fn new() -> OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties {
    OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties {
      job_consumermanager_disable_distribution: None,
      startup_delay: None,
      cleanup_period: None
    }
  }

  pub fn set_job_consumermanager_disable_distribution(&mut self, job_consumermanager_disable_distribution: ::models::ConfigNodePropertyBoolean) {
    self.job_consumermanager_disable_distribution = Some(job_consumermanager_disable_distribution);
  }

  pub fn with_job_consumermanager_disable_distribution(mut self, job_consumermanager_disable_distribution: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties {
    self.job_consumermanager_disable_distribution = Some(job_consumermanager_disable_distribution);
    self
  }

  pub fn job_consumermanager_disable_distribution(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.job_consumermanager_disable_distribution.as_ref()
  }

  pub fn reset_job_consumermanager_disable_distribution(&mut self) {
    self.job_consumermanager_disable_distribution = None;
  }

  pub fn set_startup_delay(&mut self, startup_delay: ::models::ConfigNodePropertyInteger) {
    self.startup_delay = Some(startup_delay);
  }

  pub fn with_startup_delay(mut self, startup_delay: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties {
    self.startup_delay = Some(startup_delay);
    self
  }

  pub fn startup_delay(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.startup_delay.as_ref()
  }

  pub fn reset_startup_delay(&mut self) {
    self.startup_delay = None;
  }

  pub fn set_cleanup_period(&mut self, cleanup_period: ::models::ConfigNodePropertyInteger) {
    self.cleanup_period = Some(cleanup_period);
  }

  pub fn with_cleanup_period(mut self, cleanup_period: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingEventImplJobsJcrPersistenceHandlerProperties {
    self.cleanup_period = Some(cleanup_period);
    self
  }

  pub fn cleanup_period(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.cleanup_period.as_ref()
  }

  pub fn reset_cleanup_period(&mut self) {
    self.cleanup_period = None;
  }

}


