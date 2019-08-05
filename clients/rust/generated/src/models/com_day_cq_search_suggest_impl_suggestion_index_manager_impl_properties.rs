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
pub struct ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties {
  #[serde(rename = "pathBuilder.target")]
  path_builder_target: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "suggest.basepath")]
  suggest_basepath: Option<::models::ConfigNodePropertyString>
}

impl ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties {
  pub fn new() -> ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties {
    ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties {
      path_builder_target: None,
      suggest_basepath: None
    }
  }

  pub fn set_path_builder_target(&mut self, path_builder_target: ::models::ConfigNodePropertyString) {
    self.path_builder_target = Some(path_builder_target);
  }

  pub fn with_path_builder_target(mut self, path_builder_target: ::models::ConfigNodePropertyString) -> ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties {
    self.path_builder_target = Some(path_builder_target);
    self
  }

  pub fn path_builder_target(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.path_builder_target.as_ref()
  }

  pub fn reset_path_builder_target(&mut self) {
    self.path_builder_target = None;
  }

  pub fn set_suggest_basepath(&mut self, suggest_basepath: ::models::ConfigNodePropertyString) {
    self.suggest_basepath = Some(suggest_basepath);
  }

  pub fn with_suggest_basepath(mut self, suggest_basepath: ::models::ConfigNodePropertyString) -> ComDayCqSearchSuggestImplSuggestionIndexManagerImplProperties {
    self.suggest_basepath = Some(suggest_basepath);
    self
  }

  pub fn suggest_basepath(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.suggest_basepath.as_ref()
  }

  pub fn reset_suggest_basepath(&mut self) {
    self.suggest_basepath = None;
  }

}


