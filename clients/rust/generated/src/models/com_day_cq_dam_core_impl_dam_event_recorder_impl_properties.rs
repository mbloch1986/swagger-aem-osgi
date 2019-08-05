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
pub struct ComDayCqDamCoreImplDamEventRecorderImplProperties {
  #[serde(rename = "event.filter")]
  event_filter: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "event.queue.length")]
  event_queue_length: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "eventrecorder.enabled")]
  eventrecorder_enabled: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "eventrecorder.blacklist")]
  eventrecorder_blacklist: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "eventrecorder.eventtypes")]
  eventrecorder_eventtypes: Option<::models::ConfigNodePropertyDropDown>
}

impl ComDayCqDamCoreImplDamEventRecorderImplProperties {
  pub fn new() -> ComDayCqDamCoreImplDamEventRecorderImplProperties {
    ComDayCqDamCoreImplDamEventRecorderImplProperties {
      event_filter: None,
      event_queue_length: None,
      eventrecorder_enabled: None,
      eventrecorder_blacklist: None,
      eventrecorder_eventtypes: None
    }
  }

  pub fn set_event_filter(&mut self, event_filter: ::models::ConfigNodePropertyString) {
    self.event_filter = Some(event_filter);
  }

  pub fn with_event_filter(mut self, event_filter: ::models::ConfigNodePropertyString) -> ComDayCqDamCoreImplDamEventRecorderImplProperties {
    self.event_filter = Some(event_filter);
    self
  }

  pub fn event_filter(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.event_filter.as_ref()
  }

  pub fn reset_event_filter(&mut self) {
    self.event_filter = None;
  }

  pub fn set_event_queue_length(&mut self, event_queue_length: ::models::ConfigNodePropertyInteger) {
    self.event_queue_length = Some(event_queue_length);
  }

  pub fn with_event_queue_length(mut self, event_queue_length: ::models::ConfigNodePropertyInteger) -> ComDayCqDamCoreImplDamEventRecorderImplProperties {
    self.event_queue_length = Some(event_queue_length);
    self
  }

  pub fn event_queue_length(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.event_queue_length.as_ref()
  }

  pub fn reset_event_queue_length(&mut self) {
    self.event_queue_length = None;
  }

  pub fn set_eventrecorder_enabled(&mut self, eventrecorder_enabled: ::models::ConfigNodePropertyBoolean) {
    self.eventrecorder_enabled = Some(eventrecorder_enabled);
  }

  pub fn with_eventrecorder_enabled(mut self, eventrecorder_enabled: ::models::ConfigNodePropertyBoolean) -> ComDayCqDamCoreImplDamEventRecorderImplProperties {
    self.eventrecorder_enabled = Some(eventrecorder_enabled);
    self
  }

  pub fn eventrecorder_enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.eventrecorder_enabled.as_ref()
  }

  pub fn reset_eventrecorder_enabled(&mut self) {
    self.eventrecorder_enabled = None;
  }

  pub fn set_eventrecorder_blacklist(&mut self, eventrecorder_blacklist: ::models::ConfigNodePropertyArray) {
    self.eventrecorder_blacklist = Some(eventrecorder_blacklist);
  }

  pub fn with_eventrecorder_blacklist(mut self, eventrecorder_blacklist: ::models::ConfigNodePropertyArray) -> ComDayCqDamCoreImplDamEventRecorderImplProperties {
    self.eventrecorder_blacklist = Some(eventrecorder_blacklist);
    self
  }

  pub fn eventrecorder_blacklist(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.eventrecorder_blacklist.as_ref()
  }

  pub fn reset_eventrecorder_blacklist(&mut self) {
    self.eventrecorder_blacklist = None;
  }

  pub fn set_eventrecorder_eventtypes(&mut self, eventrecorder_eventtypes: ::models::ConfigNodePropertyDropDown) {
    self.eventrecorder_eventtypes = Some(eventrecorder_eventtypes);
  }

  pub fn with_eventrecorder_eventtypes(mut self, eventrecorder_eventtypes: ::models::ConfigNodePropertyDropDown) -> ComDayCqDamCoreImplDamEventRecorderImplProperties {
    self.eventrecorder_eventtypes = Some(eventrecorder_eventtypes);
    self
  }

  pub fn eventrecorder_eventtypes(&self) -> Option<&::models::ConfigNodePropertyDropDown> {
    self.eventrecorder_eventtypes.as_ref()
  }

  pub fn reset_eventrecorder_eventtypes(&mut self) {
    self.eventrecorder_eventtypes = None;
  }

}


