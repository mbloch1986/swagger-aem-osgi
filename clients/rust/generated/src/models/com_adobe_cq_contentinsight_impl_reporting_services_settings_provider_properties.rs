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
pub struct ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties {
  #[serde(rename = "reportingservices.url")]
  reportingservices_url: Option<::models::ConfigNodePropertyString>
}

impl ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties {
  pub fn new() -> ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties {
    ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties {
      reportingservices_url: None
    }
  }

  pub fn set_reportingservices_url(&mut self, reportingservices_url: ::models::ConfigNodePropertyString) {
    self.reportingservices_url = Some(reportingservices_url);
  }

  pub fn with_reportingservices_url(mut self, reportingservices_url: ::models::ConfigNodePropertyString) -> ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties {
    self.reportingservices_url = Some(reportingservices_url);
    self
  }

  pub fn reportingservices_url(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.reportingservices_url.as_ref()
  }

  pub fn reset_reportingservices_url(&mut self) {
    self.reportingservices_url = None;
  }

}



