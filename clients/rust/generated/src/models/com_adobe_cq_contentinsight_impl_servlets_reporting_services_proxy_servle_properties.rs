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
pub struct ComAdobeCqContentinsightImplServletsReportingServicesProxyServleProperties {
  #[serde(rename = "reportingservices.proxy.whitelist")]
  reportingservices_proxy_whitelist: Option<::models::ConfigNodePropertyArray>
}

impl ComAdobeCqContentinsightImplServletsReportingServicesProxyServleProperties {
  pub fn new() -> ComAdobeCqContentinsightImplServletsReportingServicesProxyServleProperties {
    ComAdobeCqContentinsightImplServletsReportingServicesProxyServleProperties {
      reportingservices_proxy_whitelist: None
    }
  }

  pub fn set_reportingservices_proxy_whitelist(&mut self, reportingservices_proxy_whitelist: ::models::ConfigNodePropertyArray) {
    self.reportingservices_proxy_whitelist = Some(reportingservices_proxy_whitelist);
  }

  pub fn with_reportingservices_proxy_whitelist(mut self, reportingservices_proxy_whitelist: ::models::ConfigNodePropertyArray) -> ComAdobeCqContentinsightImplServletsReportingServicesProxyServleProperties {
    self.reportingservices_proxy_whitelist = Some(reportingservices_proxy_whitelist);
    self
  }

  pub fn reportingservices_proxy_whitelist(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.reportingservices_proxy_whitelist.as_ref()
  }

  pub fn reset_reportingservices_proxy_whitelist(&mut self) {
    self.reportingservices_proxy_whitelist = None;
  }

}


