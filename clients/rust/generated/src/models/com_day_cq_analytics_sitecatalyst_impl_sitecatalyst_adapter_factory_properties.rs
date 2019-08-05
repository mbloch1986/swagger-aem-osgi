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
pub struct ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties {
  #[serde(rename = "cq.analytics.adapterfactory.contextstores")]
  cq_analytics_adapterfactory_contextstores: Option<::models::ConfigNodePropertyArray>
}

impl ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties {
  pub fn new() -> ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties {
    ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties {
      cq_analytics_adapterfactory_contextstores: None
    }
  }

  pub fn set_cq_analytics_adapterfactory_contextstores(&mut self, cq_analytics_adapterfactory_contextstores: ::models::ConfigNodePropertyArray) {
    self.cq_analytics_adapterfactory_contextstores = Some(cq_analytics_adapterfactory_contextstores);
  }

  pub fn with_cq_analytics_adapterfactory_contextstores(mut self, cq_analytics_adapterfactory_contextstores: ::models::ConfigNodePropertyArray) -> ComDayCqAnalyticsSitecatalystImplSitecatalystAdapterFactoryProperties {
    self.cq_analytics_adapterfactory_contextstores = Some(cq_analytics_adapterfactory_contextstores);
    self
  }

  pub fn cq_analytics_adapterfactory_contextstores(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.cq_analytics_adapterfactory_contextstores.as_ref()
  }

  pub fn reset_cq_analytics_adapterfactory_contextstores(&mut self) {
    self.cq_analytics_adapterfactory_contextstores = None;
  }

}


