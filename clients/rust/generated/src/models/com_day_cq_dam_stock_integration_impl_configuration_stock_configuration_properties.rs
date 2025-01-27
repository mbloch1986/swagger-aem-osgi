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
pub struct ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties {
  #[serde(rename = "name")]
  name: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "locale")]
  locale: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "imsConfig")]
  ims_config: Option<::models::ConfigNodePropertyString>
}

impl ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties {
  pub fn new() -> ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties {
    ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties {
      name: None,
      locale: None,
      ims_config: None
    }
  }

  pub fn set_name(&mut self, name: ::models::ConfigNodePropertyString) {
    self.name = Some(name);
  }

  pub fn with_name(mut self, name: ::models::ConfigNodePropertyString) -> ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties {
    self.name = Some(name);
    self
  }

  pub fn name(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.name.as_ref()
  }

  pub fn reset_name(&mut self) {
    self.name = None;
  }

  pub fn set_locale(&mut self, locale: ::models::ConfigNodePropertyString) {
    self.locale = Some(locale);
  }

  pub fn with_locale(mut self, locale: ::models::ConfigNodePropertyString) -> ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties {
    self.locale = Some(locale);
    self
  }

  pub fn locale(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.locale.as_ref()
  }

  pub fn reset_locale(&mut self) {
    self.locale = None;
  }

  pub fn set_ims_config(&mut self, ims_config: ::models::ConfigNodePropertyString) {
    self.ims_config = Some(ims_config);
  }

  pub fn with_ims_config(mut self, ims_config: ::models::ConfigNodePropertyString) -> ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties {
    self.ims_config = Some(ims_config);
    self
  }

  pub fn ims_config(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.ims_config.as_ref()
  }

  pub fn reset_ims_config(&mut self) {
    self.ims_config = None;
  }

}



