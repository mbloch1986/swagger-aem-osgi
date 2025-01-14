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
pub struct OrgApacheSlingEventImplJobsJobConsumerManagerProperties {
  #[serde(rename = "org.apache.sling.installer.configuration.persist")]
  org_apache_sling_installer_configuration_persist: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "job.consumermanager.whitelist")]
  job_consumermanager_whitelist: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "job.consumermanager.blacklist")]
  job_consumermanager_blacklist: Option<::models::ConfigNodePropertyArray>
}

impl OrgApacheSlingEventImplJobsJobConsumerManagerProperties {
  pub fn new() -> OrgApacheSlingEventImplJobsJobConsumerManagerProperties {
    OrgApacheSlingEventImplJobsJobConsumerManagerProperties {
      org_apache_sling_installer_configuration_persist: None,
      job_consumermanager_whitelist: None,
      job_consumermanager_blacklist: None
    }
  }

  pub fn set_org_apache_sling_installer_configuration_persist(&mut self, org_apache_sling_installer_configuration_persist: ::models::ConfigNodePropertyBoolean) {
    self.org_apache_sling_installer_configuration_persist = Some(org_apache_sling_installer_configuration_persist);
  }

  pub fn with_org_apache_sling_installer_configuration_persist(mut self, org_apache_sling_installer_configuration_persist: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingEventImplJobsJobConsumerManagerProperties {
    self.org_apache_sling_installer_configuration_persist = Some(org_apache_sling_installer_configuration_persist);
    self
  }

  pub fn org_apache_sling_installer_configuration_persist(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.org_apache_sling_installer_configuration_persist.as_ref()
  }

  pub fn reset_org_apache_sling_installer_configuration_persist(&mut self) {
    self.org_apache_sling_installer_configuration_persist = None;
  }

  pub fn set_job_consumermanager_whitelist(&mut self, job_consumermanager_whitelist: ::models::ConfigNodePropertyArray) {
    self.job_consumermanager_whitelist = Some(job_consumermanager_whitelist);
  }

  pub fn with_job_consumermanager_whitelist(mut self, job_consumermanager_whitelist: ::models::ConfigNodePropertyArray) -> OrgApacheSlingEventImplJobsJobConsumerManagerProperties {
    self.job_consumermanager_whitelist = Some(job_consumermanager_whitelist);
    self
  }

  pub fn job_consumermanager_whitelist(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.job_consumermanager_whitelist.as_ref()
  }

  pub fn reset_job_consumermanager_whitelist(&mut self) {
    self.job_consumermanager_whitelist = None;
  }

  pub fn set_job_consumermanager_blacklist(&mut self, job_consumermanager_blacklist: ::models::ConfigNodePropertyArray) {
    self.job_consumermanager_blacklist = Some(job_consumermanager_blacklist);
  }

  pub fn with_job_consumermanager_blacklist(mut self, job_consumermanager_blacklist: ::models::ConfigNodePropertyArray) -> OrgApacheSlingEventImplJobsJobConsumerManagerProperties {
    self.job_consumermanager_blacklist = Some(job_consumermanager_blacklist);
    self
  }

  pub fn job_consumermanager_blacklist(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.job_consumermanager_blacklist.as_ref()
  }

  pub fn reset_job_consumermanager_blacklist(&mut self) {
    self.job_consumermanager_blacklist = None;
  }

}



