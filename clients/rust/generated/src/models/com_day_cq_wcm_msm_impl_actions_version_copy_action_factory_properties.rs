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
pub struct ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties {
  #[serde(rename = "cq.wcm.msm.action.excludednodetypes")]
  cq_wcm_msm_action_excludednodetypes: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "cq.wcm.msm.action.excludedparagraphitems")]
  cq_wcm_msm_action_excludedparagraphitems: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "cq.wcm.msm.action.excludedprops")]
  cq_wcm_msm_action_excludedprops: Option<::models::ConfigNodePropertyArray>
}

impl ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties {
  pub fn new() -> ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties {
    ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties {
      cq_wcm_msm_action_excludednodetypes: None,
      cq_wcm_msm_action_excludedparagraphitems: None,
      cq_wcm_msm_action_excludedprops: None
    }
  }

  pub fn set_cq_wcm_msm_action_excludednodetypes(&mut self, cq_wcm_msm_action_excludednodetypes: ::models::ConfigNodePropertyArray) {
    self.cq_wcm_msm_action_excludednodetypes = Some(cq_wcm_msm_action_excludednodetypes);
  }

  pub fn with_cq_wcm_msm_action_excludednodetypes(mut self, cq_wcm_msm_action_excludednodetypes: ::models::ConfigNodePropertyArray) -> ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties {
    self.cq_wcm_msm_action_excludednodetypes = Some(cq_wcm_msm_action_excludednodetypes);
    self
  }

  pub fn cq_wcm_msm_action_excludednodetypes(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.cq_wcm_msm_action_excludednodetypes.as_ref()
  }

  pub fn reset_cq_wcm_msm_action_excludednodetypes(&mut self) {
    self.cq_wcm_msm_action_excludednodetypes = None;
  }

  pub fn set_cq_wcm_msm_action_excludedparagraphitems(&mut self, cq_wcm_msm_action_excludedparagraphitems: ::models::ConfigNodePropertyArray) {
    self.cq_wcm_msm_action_excludedparagraphitems = Some(cq_wcm_msm_action_excludedparagraphitems);
  }

  pub fn with_cq_wcm_msm_action_excludedparagraphitems(mut self, cq_wcm_msm_action_excludedparagraphitems: ::models::ConfigNodePropertyArray) -> ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties {
    self.cq_wcm_msm_action_excludedparagraphitems = Some(cq_wcm_msm_action_excludedparagraphitems);
    self
  }

  pub fn cq_wcm_msm_action_excludedparagraphitems(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.cq_wcm_msm_action_excludedparagraphitems.as_ref()
  }

  pub fn reset_cq_wcm_msm_action_excludedparagraphitems(&mut self) {
    self.cq_wcm_msm_action_excludedparagraphitems = None;
  }

  pub fn set_cq_wcm_msm_action_excludedprops(&mut self, cq_wcm_msm_action_excludedprops: ::models::ConfigNodePropertyArray) {
    self.cq_wcm_msm_action_excludedprops = Some(cq_wcm_msm_action_excludedprops);
  }

  pub fn with_cq_wcm_msm_action_excludedprops(mut self, cq_wcm_msm_action_excludedprops: ::models::ConfigNodePropertyArray) -> ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties {
    self.cq_wcm_msm_action_excludedprops = Some(cq_wcm_msm_action_excludedprops);
    self
  }

  pub fn cq_wcm_msm_action_excludedprops(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.cq_wcm_msm_action_excludedprops.as_ref()
  }

  pub fn reset_cq_wcm_msm_action_excludedprops(&mut self) {
    self.cq_wcm_msm_action_excludedprops = None;
  }

}



