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
pub struct ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties {
  #[serde(rename = "cq.wcm.msm.action.excludednodetypes")]
  cq_wcm_msm_action_excludednodetypes: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "cq.wcm.msm.action.excludedparagraphitems")]
  cq_wcm_msm_action_excludedparagraphitems: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "cq.wcm.msm.action.excludedprops")]
  cq_wcm_msm_action_excludedprops: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "cq.wcm.msm.impl.actions.pagemove.prop_referenceUpdate")]
  cq_wcm_msm_impl_actions_pagemove_prop_reference_update: Option<::models::ConfigNodePropertyBoolean>
}

impl ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties {
  pub fn new() -> ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties {
    ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties {
      cq_wcm_msm_action_excludednodetypes: None,
      cq_wcm_msm_action_excludedparagraphitems: None,
      cq_wcm_msm_action_excludedprops: None,
      cq_wcm_msm_impl_actions_pagemove_prop_reference_update: None
    }
  }

  pub fn set_cq_wcm_msm_action_excludednodetypes(&mut self, cq_wcm_msm_action_excludednodetypes: ::models::ConfigNodePropertyArray) {
    self.cq_wcm_msm_action_excludednodetypes = Some(cq_wcm_msm_action_excludednodetypes);
  }

  pub fn with_cq_wcm_msm_action_excludednodetypes(mut self, cq_wcm_msm_action_excludednodetypes: ::models::ConfigNodePropertyArray) -> ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties {
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

  pub fn with_cq_wcm_msm_action_excludedparagraphitems(mut self, cq_wcm_msm_action_excludedparagraphitems: ::models::ConfigNodePropertyArray) -> ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties {
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

  pub fn with_cq_wcm_msm_action_excludedprops(mut self, cq_wcm_msm_action_excludedprops: ::models::ConfigNodePropertyArray) -> ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties {
    self.cq_wcm_msm_action_excludedprops = Some(cq_wcm_msm_action_excludedprops);
    self
  }

  pub fn cq_wcm_msm_action_excludedprops(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.cq_wcm_msm_action_excludedprops.as_ref()
  }

  pub fn reset_cq_wcm_msm_action_excludedprops(&mut self) {
    self.cq_wcm_msm_action_excludedprops = None;
  }

  pub fn set_cq_wcm_msm_impl_actions_pagemove_prop_reference_update(&mut self, cq_wcm_msm_impl_actions_pagemove_prop_reference_update: ::models::ConfigNodePropertyBoolean) {
    self.cq_wcm_msm_impl_actions_pagemove_prop_reference_update = Some(cq_wcm_msm_impl_actions_pagemove_prop_reference_update);
  }

  pub fn with_cq_wcm_msm_impl_actions_pagemove_prop_reference_update(mut self, cq_wcm_msm_impl_actions_pagemove_prop_reference_update: ::models::ConfigNodePropertyBoolean) -> ComDayCqWcmMsmImplActionsPageMoveActionFactoryProperties {
    self.cq_wcm_msm_impl_actions_pagemove_prop_reference_update = Some(cq_wcm_msm_impl_actions_pagemove_prop_reference_update);
    self
  }

  pub fn cq_wcm_msm_impl_actions_pagemove_prop_reference_update(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.cq_wcm_msm_impl_actions_pagemove_prop_reference_update.as_ref()
  }

  pub fn reset_cq_wcm_msm_impl_actions_pagemove_prop_reference_update(&mut self) {
    self.cq_wcm_msm_impl_actions_pagemove_prop_reference_update = None;
  }

}


