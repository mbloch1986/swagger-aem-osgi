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
pub struct OrgApacheFelixJaasConfigurationFactoryProperties {
  #[serde(rename = "jaas.controlFlag")]
  jaas_control_flag: Option<::models::ConfigNodePropertyDropDown>,
  #[serde(rename = "jaas.ranking")]
  jaas_ranking: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "jaas.realmName")]
  jaas_realm_name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "jaas.classname")]
  jaas_classname: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "jaas.options")]
  jaas_options: Option<::models::ConfigNodePropertyArray>
}

impl OrgApacheFelixJaasConfigurationFactoryProperties {
  pub fn new() -> OrgApacheFelixJaasConfigurationFactoryProperties {
    OrgApacheFelixJaasConfigurationFactoryProperties {
      jaas_control_flag: None,
      jaas_ranking: None,
      jaas_realm_name: None,
      jaas_classname: None,
      jaas_options: None
    }
  }

  pub fn set_jaas_control_flag(&mut self, jaas_control_flag: ::models::ConfigNodePropertyDropDown) {
    self.jaas_control_flag = Some(jaas_control_flag);
  }

  pub fn with_jaas_control_flag(mut self, jaas_control_flag: ::models::ConfigNodePropertyDropDown) -> OrgApacheFelixJaasConfigurationFactoryProperties {
    self.jaas_control_flag = Some(jaas_control_flag);
    self
  }

  pub fn jaas_control_flag(&self) -> Option<&::models::ConfigNodePropertyDropDown> {
    self.jaas_control_flag.as_ref()
  }

  pub fn reset_jaas_control_flag(&mut self) {
    self.jaas_control_flag = None;
  }

  pub fn set_jaas_ranking(&mut self, jaas_ranking: ::models::ConfigNodePropertyInteger) {
    self.jaas_ranking = Some(jaas_ranking);
  }

  pub fn with_jaas_ranking(mut self, jaas_ranking: ::models::ConfigNodePropertyInteger) -> OrgApacheFelixJaasConfigurationFactoryProperties {
    self.jaas_ranking = Some(jaas_ranking);
    self
  }

  pub fn jaas_ranking(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.jaas_ranking.as_ref()
  }

  pub fn reset_jaas_ranking(&mut self) {
    self.jaas_ranking = None;
  }

  pub fn set_jaas_realm_name(&mut self, jaas_realm_name: ::models::ConfigNodePropertyString) {
    self.jaas_realm_name = Some(jaas_realm_name);
  }

  pub fn with_jaas_realm_name(mut self, jaas_realm_name: ::models::ConfigNodePropertyString) -> OrgApacheFelixJaasConfigurationFactoryProperties {
    self.jaas_realm_name = Some(jaas_realm_name);
    self
  }

  pub fn jaas_realm_name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.jaas_realm_name.as_ref()
  }

  pub fn reset_jaas_realm_name(&mut self) {
    self.jaas_realm_name = None;
  }

  pub fn set_jaas_classname(&mut self, jaas_classname: ::models::ConfigNodePropertyString) {
    self.jaas_classname = Some(jaas_classname);
  }

  pub fn with_jaas_classname(mut self, jaas_classname: ::models::ConfigNodePropertyString) -> OrgApacheFelixJaasConfigurationFactoryProperties {
    self.jaas_classname = Some(jaas_classname);
    self
  }

  pub fn jaas_classname(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.jaas_classname.as_ref()
  }

  pub fn reset_jaas_classname(&mut self) {
    self.jaas_classname = None;
  }

  pub fn set_jaas_options(&mut self, jaas_options: ::models::ConfigNodePropertyArray) {
    self.jaas_options = Some(jaas_options);
  }

  pub fn with_jaas_options(mut self, jaas_options: ::models::ConfigNodePropertyArray) -> OrgApacheFelixJaasConfigurationFactoryProperties {
    self.jaas_options = Some(jaas_options);
    self
  }

  pub fn jaas_options(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.jaas_options.as_ref()
  }

  pub fn reset_jaas_options(&mut self) {
    self.jaas_options = None;
  }

}


