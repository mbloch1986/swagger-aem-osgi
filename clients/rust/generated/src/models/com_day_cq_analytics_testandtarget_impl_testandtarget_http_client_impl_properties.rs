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
pub struct ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties {
  #[serde(rename = "cq.analytics.testandtarget.api.url")]
  cq_analytics_testandtarget_api_url: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "cq.analytics.testandtarget.timeout")]
  cq_analytics_testandtarget_timeout: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "cq.analytics.testandtarget.sockettimeout")]
  cq_analytics_testandtarget_sockettimeout: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "cq.analytics.testandtarget.recommendations.url.replace")]
  cq_analytics_testandtarget_recommendations_url_replace: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "cq.analytics.testandtarget.recommendations.url.replacewith")]
  cq_analytics_testandtarget_recommendations_url_replacewith: Option<::models::ConfigNodePropertyString>
}

impl ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties {
  pub fn new() -> ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties {
    ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties {
      cq_analytics_testandtarget_api_url: None,
      cq_analytics_testandtarget_timeout: None,
      cq_analytics_testandtarget_sockettimeout: None,
      cq_analytics_testandtarget_recommendations_url_replace: None,
      cq_analytics_testandtarget_recommendations_url_replacewith: None
    }
  }

  pub fn set_cq_analytics_testandtarget_api_url(&mut self, cq_analytics_testandtarget_api_url: ::models::ConfigNodePropertyString) {
    self.cq_analytics_testandtarget_api_url = Some(cq_analytics_testandtarget_api_url);
  }

  pub fn with_cq_analytics_testandtarget_api_url(mut self, cq_analytics_testandtarget_api_url: ::models::ConfigNodePropertyString) -> ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties {
    self.cq_analytics_testandtarget_api_url = Some(cq_analytics_testandtarget_api_url);
    self
  }

  pub fn cq_analytics_testandtarget_api_url(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.cq_analytics_testandtarget_api_url.as_ref()
  }

  pub fn reset_cq_analytics_testandtarget_api_url(&mut self) {
    self.cq_analytics_testandtarget_api_url = None;
  }

  pub fn set_cq_analytics_testandtarget_timeout(&mut self, cq_analytics_testandtarget_timeout: ::models::ConfigNodePropertyInteger) {
    self.cq_analytics_testandtarget_timeout = Some(cq_analytics_testandtarget_timeout);
  }

  pub fn with_cq_analytics_testandtarget_timeout(mut self, cq_analytics_testandtarget_timeout: ::models::ConfigNodePropertyInteger) -> ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties {
    self.cq_analytics_testandtarget_timeout = Some(cq_analytics_testandtarget_timeout);
    self
  }

  pub fn cq_analytics_testandtarget_timeout(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.cq_analytics_testandtarget_timeout.as_ref()
  }

  pub fn reset_cq_analytics_testandtarget_timeout(&mut self) {
    self.cq_analytics_testandtarget_timeout = None;
  }

  pub fn set_cq_analytics_testandtarget_sockettimeout(&mut self, cq_analytics_testandtarget_sockettimeout: ::models::ConfigNodePropertyInteger) {
    self.cq_analytics_testandtarget_sockettimeout = Some(cq_analytics_testandtarget_sockettimeout);
  }

  pub fn with_cq_analytics_testandtarget_sockettimeout(mut self, cq_analytics_testandtarget_sockettimeout: ::models::ConfigNodePropertyInteger) -> ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties {
    self.cq_analytics_testandtarget_sockettimeout = Some(cq_analytics_testandtarget_sockettimeout);
    self
  }

  pub fn cq_analytics_testandtarget_sockettimeout(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.cq_analytics_testandtarget_sockettimeout.as_ref()
  }

  pub fn reset_cq_analytics_testandtarget_sockettimeout(&mut self) {
    self.cq_analytics_testandtarget_sockettimeout = None;
  }

  pub fn set_cq_analytics_testandtarget_recommendations_url_replace(&mut self, cq_analytics_testandtarget_recommendations_url_replace: ::models::ConfigNodePropertyString) {
    self.cq_analytics_testandtarget_recommendations_url_replace = Some(cq_analytics_testandtarget_recommendations_url_replace);
  }

  pub fn with_cq_analytics_testandtarget_recommendations_url_replace(mut self, cq_analytics_testandtarget_recommendations_url_replace: ::models::ConfigNodePropertyString) -> ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties {
    self.cq_analytics_testandtarget_recommendations_url_replace = Some(cq_analytics_testandtarget_recommendations_url_replace);
    self
  }

  pub fn cq_analytics_testandtarget_recommendations_url_replace(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.cq_analytics_testandtarget_recommendations_url_replace.as_ref()
  }

  pub fn reset_cq_analytics_testandtarget_recommendations_url_replace(&mut self) {
    self.cq_analytics_testandtarget_recommendations_url_replace = None;
  }

  pub fn set_cq_analytics_testandtarget_recommendations_url_replacewith(&mut self, cq_analytics_testandtarget_recommendations_url_replacewith: ::models::ConfigNodePropertyString) {
    self.cq_analytics_testandtarget_recommendations_url_replacewith = Some(cq_analytics_testandtarget_recommendations_url_replacewith);
  }

  pub fn with_cq_analytics_testandtarget_recommendations_url_replacewith(mut self, cq_analytics_testandtarget_recommendations_url_replacewith: ::models::ConfigNodePropertyString) -> ComDayCqAnalyticsTestandtargetImplTestandtargetHttpClientImplProperties {
    self.cq_analytics_testandtarget_recommendations_url_replacewith = Some(cq_analytics_testandtarget_recommendations_url_replacewith);
    self
  }

  pub fn cq_analytics_testandtarget_recommendations_url_replacewith(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.cq_analytics_testandtarget_recommendations_url_replacewith.as_ref()
  }

  pub fn reset_cq_analytics_testandtarget_recommendations_url_replacewith(&mut self) {
    self.cq_analytics_testandtarget_recommendations_url_replacewith = None;
  }

}



