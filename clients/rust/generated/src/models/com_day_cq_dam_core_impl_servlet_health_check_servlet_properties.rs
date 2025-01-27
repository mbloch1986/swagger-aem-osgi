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
pub struct ComDayCqDamCoreImplServletHealthCheckServletProperties {
  #[serde(rename = "cq.dam.sync.workflow.id")]
  cq_dam_sync_workflow_id: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "cq.dam.sync.folder.types")]
  cq_dam_sync_folder_types: Option<::models::ConfigNodePropertyArray>
}

impl ComDayCqDamCoreImplServletHealthCheckServletProperties {
  pub fn new() -> ComDayCqDamCoreImplServletHealthCheckServletProperties {
    ComDayCqDamCoreImplServletHealthCheckServletProperties {
      cq_dam_sync_workflow_id: None,
      cq_dam_sync_folder_types: None
    }
  }

  pub fn set_cq_dam_sync_workflow_id(&mut self, cq_dam_sync_workflow_id: ::models::ConfigNodePropertyString) {
    self.cq_dam_sync_workflow_id = Some(cq_dam_sync_workflow_id);
  }

  pub fn with_cq_dam_sync_workflow_id(mut self, cq_dam_sync_workflow_id: ::models::ConfigNodePropertyString) -> ComDayCqDamCoreImplServletHealthCheckServletProperties {
    self.cq_dam_sync_workflow_id = Some(cq_dam_sync_workflow_id);
    self
  }

  pub fn cq_dam_sync_workflow_id(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.cq_dam_sync_workflow_id.as_ref()
  }

  pub fn reset_cq_dam_sync_workflow_id(&mut self) {
    self.cq_dam_sync_workflow_id = None;
  }

  pub fn set_cq_dam_sync_folder_types(&mut self, cq_dam_sync_folder_types: ::models::ConfigNodePropertyArray) {
    self.cq_dam_sync_folder_types = Some(cq_dam_sync_folder_types);
  }

  pub fn with_cq_dam_sync_folder_types(mut self, cq_dam_sync_folder_types: ::models::ConfigNodePropertyArray) -> ComDayCqDamCoreImplServletHealthCheckServletProperties {
    self.cq_dam_sync_folder_types = Some(cq_dam_sync_folder_types);
    self
  }

  pub fn cq_dam_sync_folder_types(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.cq_dam_sync_folder_types.as_ref()
  }

  pub fn reset_cq_dam_sync_folder_types(&mut self) {
    self.cq_dam_sync_folder_types = None;
  }

}



