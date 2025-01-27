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
pub struct ComAdobeGraniteLoggingImplLogAnalyserImplProperties {
  #[serde(rename = "messages.queue.size")]
  messages_queue_size: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "logger.config")]
  logger_config: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "messages.size")]
  messages_size: Option<::models::ConfigNodePropertyInteger>
}

impl ComAdobeGraniteLoggingImplLogAnalyserImplProperties {
  pub fn new() -> ComAdobeGraniteLoggingImplLogAnalyserImplProperties {
    ComAdobeGraniteLoggingImplLogAnalyserImplProperties {
      messages_queue_size: None,
      logger_config: None,
      messages_size: None
    }
  }

  pub fn set_messages_queue_size(&mut self, messages_queue_size: ::models::ConfigNodePropertyInteger) {
    self.messages_queue_size = Some(messages_queue_size);
  }

  pub fn with_messages_queue_size(mut self, messages_queue_size: ::models::ConfigNodePropertyInteger) -> ComAdobeGraniteLoggingImplLogAnalyserImplProperties {
    self.messages_queue_size = Some(messages_queue_size);
    self
  }

  pub fn messages_queue_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.messages_queue_size.as_ref()
  }

  pub fn reset_messages_queue_size(&mut self) {
    self.messages_queue_size = None;
  }

  pub fn set_logger_config(&mut self, logger_config: ::models::ConfigNodePropertyArray) {
    self.logger_config = Some(logger_config);
  }

  pub fn with_logger_config(mut self, logger_config: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteLoggingImplLogAnalyserImplProperties {
    self.logger_config = Some(logger_config);
    self
  }

  pub fn logger_config(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.logger_config.as_ref()
  }

  pub fn reset_logger_config(&mut self) {
    self.logger_config = None;
  }

  pub fn set_messages_size(&mut self, messages_size: ::models::ConfigNodePropertyInteger) {
    self.messages_size = Some(messages_size);
  }

  pub fn with_messages_size(mut self, messages_size: ::models::ConfigNodePropertyInteger) -> ComAdobeGraniteLoggingImplLogAnalyserImplProperties {
    self.messages_size = Some(messages_size);
    self
  }

  pub fn messages_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.messages_size.as_ref()
  }

  pub fn reset_messages_size(&mut self) {
    self.messages_size = None;
  }

}



