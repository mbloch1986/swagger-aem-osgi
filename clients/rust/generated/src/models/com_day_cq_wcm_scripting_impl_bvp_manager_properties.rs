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
pub struct ComDayCqWcmScriptingImplBvpManagerProperties {
  #[serde(rename = "com.day.cq.wcm.scripting.bvp.script.engines")]
  com_day_cq_wcm_scripting_bvp_script_engines: Option<::models::ConfigNodePropertyArray>
}

impl ComDayCqWcmScriptingImplBvpManagerProperties {
  pub fn new() -> ComDayCqWcmScriptingImplBvpManagerProperties {
    ComDayCqWcmScriptingImplBvpManagerProperties {
      com_day_cq_wcm_scripting_bvp_script_engines: None
    }
  }

  pub fn set_com_day_cq_wcm_scripting_bvp_script_engines(&mut self, com_day_cq_wcm_scripting_bvp_script_engines: ::models::ConfigNodePropertyArray) {
    self.com_day_cq_wcm_scripting_bvp_script_engines = Some(com_day_cq_wcm_scripting_bvp_script_engines);
  }

  pub fn with_com_day_cq_wcm_scripting_bvp_script_engines(mut self, com_day_cq_wcm_scripting_bvp_script_engines: ::models::ConfigNodePropertyArray) -> ComDayCqWcmScriptingImplBvpManagerProperties {
    self.com_day_cq_wcm_scripting_bvp_script_engines = Some(com_day_cq_wcm_scripting_bvp_script_engines);
    self
  }

  pub fn com_day_cq_wcm_scripting_bvp_script_engines(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.com_day_cq_wcm_scripting_bvp_script_engines.as_ref()
  }

  pub fn reset_com_day_cq_wcm_scripting_bvp_script_engines(&mut self) {
    self.com_day_cq_wcm_scripting_bvp_script_engines = None;
  }

}



