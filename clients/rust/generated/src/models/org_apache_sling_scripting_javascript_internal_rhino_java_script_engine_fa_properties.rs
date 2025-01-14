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
pub struct OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties {
  #[serde(rename = "org.apache.sling.scripting.javascript.rhino.optLevel")]
  org_apache_sling_scripting_javascript_rhino_opt_level: Option<::models::ConfigNodePropertyInteger>
}

impl OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties {
  pub fn new() -> OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties {
    OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties {
      org_apache_sling_scripting_javascript_rhino_opt_level: None
    }
  }

  pub fn set_org_apache_sling_scripting_javascript_rhino_opt_level(&mut self, org_apache_sling_scripting_javascript_rhino_opt_level: ::models::ConfigNodePropertyInteger) {
    self.org_apache_sling_scripting_javascript_rhino_opt_level = Some(org_apache_sling_scripting_javascript_rhino_opt_level);
  }

  pub fn with_org_apache_sling_scripting_javascript_rhino_opt_level(mut self, org_apache_sling_scripting_javascript_rhino_opt_level: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties {
    self.org_apache_sling_scripting_javascript_rhino_opt_level = Some(org_apache_sling_scripting_javascript_rhino_opt_level);
    self
  }

  pub fn org_apache_sling_scripting_javascript_rhino_opt_level(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.org_apache_sling_scripting_javascript_rhino_opt_level.as_ref()
  }

  pub fn reset_org_apache_sling_scripting_javascript_rhino_opt_level(&mut self) {
    self.org_apache_sling_scripting_javascript_rhino_opt_level = None;
  }

}



