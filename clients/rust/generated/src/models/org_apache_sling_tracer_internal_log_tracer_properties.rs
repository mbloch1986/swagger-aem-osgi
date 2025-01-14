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
pub struct OrgApacheSlingTracerInternalLogTracerProperties {
  #[serde(rename = "tracerSets")]
  tracer_sets: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "enabled")]
  enabled: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "servletEnabled")]
  servlet_enabled: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "recordingCacheSizeInMB")]
  recording_cache_size_in_mb: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "recordingCacheDurationInSecs")]
  recording_cache_duration_in_secs: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "recordingCompressionEnabled")]
  recording_compression_enabled: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "gzipResponse")]
  gzip_response: Option<::models::ConfigNodePropertyBoolean>
}

impl OrgApacheSlingTracerInternalLogTracerProperties {
  pub fn new() -> OrgApacheSlingTracerInternalLogTracerProperties {
    OrgApacheSlingTracerInternalLogTracerProperties {
      tracer_sets: None,
      enabled: None,
      servlet_enabled: None,
      recording_cache_size_in_mb: None,
      recording_cache_duration_in_secs: None,
      recording_compression_enabled: None,
      gzip_response: None
    }
  }

  pub fn set_tracer_sets(&mut self, tracer_sets: ::models::ConfigNodePropertyArray) {
    self.tracer_sets = Some(tracer_sets);
  }

  pub fn with_tracer_sets(mut self, tracer_sets: ::models::ConfigNodePropertyArray) -> OrgApacheSlingTracerInternalLogTracerProperties {
    self.tracer_sets = Some(tracer_sets);
    self
  }

  pub fn tracer_sets(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.tracer_sets.as_ref()
  }

  pub fn reset_tracer_sets(&mut self) {
    self.tracer_sets = None;
  }

  pub fn set_enabled(&mut self, enabled: ::models::ConfigNodePropertyBoolean) {
    self.enabled = Some(enabled);
  }

  pub fn with_enabled(mut self, enabled: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingTracerInternalLogTracerProperties {
    self.enabled = Some(enabled);
    self
  }

  pub fn enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.enabled.as_ref()
  }

  pub fn reset_enabled(&mut self) {
    self.enabled = None;
  }

  pub fn set_servlet_enabled(&mut self, servlet_enabled: ::models::ConfigNodePropertyBoolean) {
    self.servlet_enabled = Some(servlet_enabled);
  }

  pub fn with_servlet_enabled(mut self, servlet_enabled: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingTracerInternalLogTracerProperties {
    self.servlet_enabled = Some(servlet_enabled);
    self
  }

  pub fn servlet_enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.servlet_enabled.as_ref()
  }

  pub fn reset_servlet_enabled(&mut self) {
    self.servlet_enabled = None;
  }

  pub fn set_recording_cache_size_in_mb(&mut self, recording_cache_size_in_mb: ::models::ConfigNodePropertyInteger) {
    self.recording_cache_size_in_mb = Some(recording_cache_size_in_mb);
  }

  pub fn with_recording_cache_size_in_mb(mut self, recording_cache_size_in_mb: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingTracerInternalLogTracerProperties {
    self.recording_cache_size_in_mb = Some(recording_cache_size_in_mb);
    self
  }

  pub fn recording_cache_size_in_mb(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.recording_cache_size_in_mb.as_ref()
  }

  pub fn reset_recording_cache_size_in_mb(&mut self) {
    self.recording_cache_size_in_mb = None;
  }

  pub fn set_recording_cache_duration_in_secs(&mut self, recording_cache_duration_in_secs: ::models::ConfigNodePropertyInteger) {
    self.recording_cache_duration_in_secs = Some(recording_cache_duration_in_secs);
  }

  pub fn with_recording_cache_duration_in_secs(mut self, recording_cache_duration_in_secs: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingTracerInternalLogTracerProperties {
    self.recording_cache_duration_in_secs = Some(recording_cache_duration_in_secs);
    self
  }

  pub fn recording_cache_duration_in_secs(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.recording_cache_duration_in_secs.as_ref()
  }

  pub fn reset_recording_cache_duration_in_secs(&mut self) {
    self.recording_cache_duration_in_secs = None;
  }

  pub fn set_recording_compression_enabled(&mut self, recording_compression_enabled: ::models::ConfigNodePropertyBoolean) {
    self.recording_compression_enabled = Some(recording_compression_enabled);
  }

  pub fn with_recording_compression_enabled(mut self, recording_compression_enabled: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingTracerInternalLogTracerProperties {
    self.recording_compression_enabled = Some(recording_compression_enabled);
    self
  }

  pub fn recording_compression_enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.recording_compression_enabled.as_ref()
  }

  pub fn reset_recording_compression_enabled(&mut self) {
    self.recording_compression_enabled = None;
  }

  pub fn set_gzip_response(&mut self, gzip_response: ::models::ConfigNodePropertyBoolean) {
    self.gzip_response = Some(gzip_response);
  }

  pub fn with_gzip_response(mut self, gzip_response: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingTracerInternalLogTracerProperties {
    self.gzip_response = Some(gzip_response);
    self
  }

  pub fn gzip_response(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.gzip_response.as_ref()
  }

  pub fn reset_gzip_response(&mut self) {
    self.gzip_response = None;
  }

}



