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
pub struct OrgApacheSlingXssImplXssFilterImplProperties {
  #[serde(rename = "policyPath")]
  policy_path: Option<::models::ConfigNodePropertyString>
}

impl OrgApacheSlingXssImplXssFilterImplProperties {
  pub fn new() -> OrgApacheSlingXssImplXssFilterImplProperties {
    OrgApacheSlingXssImplXssFilterImplProperties {
      policy_path: None
    }
  }

  pub fn set_policy_path(&mut self, policy_path: ::models::ConfigNodePropertyString) {
    self.policy_path = Some(policy_path);
  }

  pub fn with_policy_path(mut self, policy_path: ::models::ConfigNodePropertyString) -> OrgApacheSlingXssImplXssFilterImplProperties {
    self.policy_path = Some(policy_path);
    self
  }

  pub fn policy_path(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.policy_path.as_ref()
  }

  pub fn reset_policy_path(&mut self) {
    self.policy_path = None;
  }

}



