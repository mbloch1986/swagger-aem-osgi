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
pub struct ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties {
  #[serde(rename = "cq.dam.s7dam.damchangeeventlistener.enabled")]
  cq_dam_s7dam_damchangeeventlistener_enabled: Option<::models::ConfigNodePropertyBoolean>
}

impl ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties {
  pub fn new() -> ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties {
    ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties {
      cq_dam_s7dam_damchangeeventlistener_enabled: None
    }
  }

  pub fn set_cq_dam_s7dam_damchangeeventlistener_enabled(&mut self, cq_dam_s7dam_damchangeeventlistener_enabled: ::models::ConfigNodePropertyBoolean) {
    self.cq_dam_s7dam_damchangeeventlistener_enabled = Some(cq_dam_s7dam_damchangeeventlistener_enabled);
  }

  pub fn with_cq_dam_s7dam_damchangeeventlistener_enabled(mut self, cq_dam_s7dam_damchangeeventlistener_enabled: ::models::ConfigNodePropertyBoolean) -> ComDayCqDamS7damCommonS7damDamChangeEventListenerProperties {
    self.cq_dam_s7dam_damchangeeventlistener_enabled = Some(cq_dam_s7dam_damchangeeventlistener_enabled);
    self
  }

  pub fn cq_dam_s7dam_damchangeeventlistener_enabled(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.cq_dam_s7dam_damchangeeventlistener_enabled.as_ref()
  }

  pub fn reset_cq_dam_s7dam_damchangeeventlistener_enabled(&mut self) {
    self.cq_dam_s7dam_damchangeeventlistener_enabled = None;
  }

}



