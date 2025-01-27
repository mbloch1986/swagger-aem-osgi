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
pub struct OrgApacheSlingEngineImplSlingMainServletProperties {
  #[serde(rename = "sling.max.calls")]
  sling_max_calls: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "sling.max.inclusions")]
  sling_max_inclusions: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "sling.trace.allow")]
  sling_trace_allow: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "sling.max.record.requests")]
  sling_max_record_requests: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "sling.store.pattern.requests")]
  sling_store_pattern_requests: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "sling.serverinfo")]
  sling_serverinfo: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "sling.additional.response.headers")]
  sling_additional_response_headers: Option<::models::ConfigNodePropertyArray>
}

impl OrgApacheSlingEngineImplSlingMainServletProperties {
  pub fn new() -> OrgApacheSlingEngineImplSlingMainServletProperties {
    OrgApacheSlingEngineImplSlingMainServletProperties {
      sling_max_calls: None,
      sling_max_inclusions: None,
      sling_trace_allow: None,
      sling_max_record_requests: None,
      sling_store_pattern_requests: None,
      sling_serverinfo: None,
      sling_additional_response_headers: None
    }
  }

  pub fn set_sling_max_calls(&mut self, sling_max_calls: ::models::ConfigNodePropertyInteger) {
    self.sling_max_calls = Some(sling_max_calls);
  }

  pub fn with_sling_max_calls(mut self, sling_max_calls: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingEngineImplSlingMainServletProperties {
    self.sling_max_calls = Some(sling_max_calls);
    self
  }

  pub fn sling_max_calls(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.sling_max_calls.as_ref()
  }

  pub fn reset_sling_max_calls(&mut self) {
    self.sling_max_calls = None;
  }

  pub fn set_sling_max_inclusions(&mut self, sling_max_inclusions: ::models::ConfigNodePropertyInteger) {
    self.sling_max_inclusions = Some(sling_max_inclusions);
  }

  pub fn with_sling_max_inclusions(mut self, sling_max_inclusions: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingEngineImplSlingMainServletProperties {
    self.sling_max_inclusions = Some(sling_max_inclusions);
    self
  }

  pub fn sling_max_inclusions(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.sling_max_inclusions.as_ref()
  }

  pub fn reset_sling_max_inclusions(&mut self) {
    self.sling_max_inclusions = None;
  }

  pub fn set_sling_trace_allow(&mut self, sling_trace_allow: ::models::ConfigNodePropertyBoolean) {
    self.sling_trace_allow = Some(sling_trace_allow);
  }

  pub fn with_sling_trace_allow(mut self, sling_trace_allow: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingEngineImplSlingMainServletProperties {
    self.sling_trace_allow = Some(sling_trace_allow);
    self
  }

  pub fn sling_trace_allow(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.sling_trace_allow.as_ref()
  }

  pub fn reset_sling_trace_allow(&mut self) {
    self.sling_trace_allow = None;
  }

  pub fn set_sling_max_record_requests(&mut self, sling_max_record_requests: ::models::ConfigNodePropertyInteger) {
    self.sling_max_record_requests = Some(sling_max_record_requests);
  }

  pub fn with_sling_max_record_requests(mut self, sling_max_record_requests: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingEngineImplSlingMainServletProperties {
    self.sling_max_record_requests = Some(sling_max_record_requests);
    self
  }

  pub fn sling_max_record_requests(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.sling_max_record_requests.as_ref()
  }

  pub fn reset_sling_max_record_requests(&mut self) {
    self.sling_max_record_requests = None;
  }

  pub fn set_sling_store_pattern_requests(&mut self, sling_store_pattern_requests: ::models::ConfigNodePropertyArray) {
    self.sling_store_pattern_requests = Some(sling_store_pattern_requests);
  }

  pub fn with_sling_store_pattern_requests(mut self, sling_store_pattern_requests: ::models::ConfigNodePropertyArray) -> OrgApacheSlingEngineImplSlingMainServletProperties {
    self.sling_store_pattern_requests = Some(sling_store_pattern_requests);
    self
  }

  pub fn sling_store_pattern_requests(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.sling_store_pattern_requests.as_ref()
  }

  pub fn reset_sling_store_pattern_requests(&mut self) {
    self.sling_store_pattern_requests = None;
  }

  pub fn set_sling_serverinfo(&mut self, sling_serverinfo: ::models::ConfigNodePropertyString) {
    self.sling_serverinfo = Some(sling_serverinfo);
  }

  pub fn with_sling_serverinfo(mut self, sling_serverinfo: ::models::ConfigNodePropertyString) -> OrgApacheSlingEngineImplSlingMainServletProperties {
    self.sling_serverinfo = Some(sling_serverinfo);
    self
  }

  pub fn sling_serverinfo(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.sling_serverinfo.as_ref()
  }

  pub fn reset_sling_serverinfo(&mut self) {
    self.sling_serverinfo = None;
  }

  pub fn set_sling_additional_response_headers(&mut self, sling_additional_response_headers: ::models::ConfigNodePropertyArray) {
    self.sling_additional_response_headers = Some(sling_additional_response_headers);
  }

  pub fn with_sling_additional_response_headers(mut self, sling_additional_response_headers: ::models::ConfigNodePropertyArray) -> OrgApacheSlingEngineImplSlingMainServletProperties {
    self.sling_additional_response_headers = Some(sling_additional_response_headers);
    self
  }

  pub fn sling_additional_response_headers(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.sling_additional_response_headers.as_ref()
  }

  pub fn reset_sling_additional_response_headers(&mut self) {
    self.sling_additional_response_headers = None;
  }

}



