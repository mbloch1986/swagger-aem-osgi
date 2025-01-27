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
pub struct ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties {
  #[serde(rename = "streamPath")]
  stream_path: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "streamName")]
  stream_name: Option<::models::ConfigNodePropertyString>
}

impl ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties {
  pub fn new() -> ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties {
    ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties {
      stream_path: None,
      stream_name: None
    }
  }

  pub fn set_stream_path(&mut self, stream_path: ::models::ConfigNodePropertyString) {
    self.stream_path = Some(stream_path);
  }

  pub fn with_stream_path(mut self, stream_path: ::models::ConfigNodePropertyString) -> ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties {
    self.stream_path = Some(stream_path);
    self
  }

  pub fn stream_path(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.stream_path.as_ref()
  }

  pub fn reset_stream_path(&mut self) {
    self.stream_path = None;
  }

  pub fn set_stream_name(&mut self, stream_name: ::models::ConfigNodePropertyString) {
    self.stream_name = Some(stream_name);
  }

  pub fn with_stream_name(mut self, stream_name: ::models::ConfigNodePropertyString) -> ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties {
    self.stream_name = Some(stream_name);
    self
  }

  pub fn stream_name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.stream_name.as_ref()
  }

  pub fn reset_stream_name(&mut self) {
    self.stream_name = None;
  }

}



