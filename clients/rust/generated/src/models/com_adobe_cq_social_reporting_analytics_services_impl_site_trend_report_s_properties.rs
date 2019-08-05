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
pub struct ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties {
  #[serde(rename = "cq.social.console.analytics.sites.mapping")]
  cq_social_console_analytics_sites_mapping: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "priority")]
  priority: Option<::models::ConfigNodePropertyInteger>
}

impl ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties {
  pub fn new() -> ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties {
    ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties {
      cq_social_console_analytics_sites_mapping: None,
      priority: None
    }
  }

  pub fn set_cq_social_console_analytics_sites_mapping(&mut self, cq_social_console_analytics_sites_mapping: ::models::ConfigNodePropertyArray) {
    self.cq_social_console_analytics_sites_mapping = Some(cq_social_console_analytics_sites_mapping);
  }

  pub fn with_cq_social_console_analytics_sites_mapping(mut self, cq_social_console_analytics_sites_mapping: ::models::ConfigNodePropertyArray) -> ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties {
    self.cq_social_console_analytics_sites_mapping = Some(cq_social_console_analytics_sites_mapping);
    self
  }

  pub fn cq_social_console_analytics_sites_mapping(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.cq_social_console_analytics_sites_mapping.as_ref()
  }

  pub fn reset_cq_social_console_analytics_sites_mapping(&mut self) {
    self.cq_social_console_analytics_sites_mapping = None;
  }

  pub fn set_priority(&mut self, priority: ::models::ConfigNodePropertyInteger) {
    self.priority = Some(priority);
  }

  pub fn with_priority(mut self, priority: ::models::ConfigNodePropertyInteger) -> ComAdobeCqSocialReportingAnalyticsServicesImplSiteTrendReportSProperties {
    self.priority = Some(priority);
    self
  }

  pub fn priority(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.priority.as_ref()
  }

  pub fn reset_priority(&mut self) {
    self.priority = None;
  }

}


