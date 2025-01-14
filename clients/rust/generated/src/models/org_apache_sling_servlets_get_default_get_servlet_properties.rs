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
pub struct OrgApacheSlingServletsGetDefaultGetServletProperties {
  #[serde(rename = "aliases")]
  aliases: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "index")]
  index: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "index.files")]
  index_files: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "enable.html")]
  enable_html: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "enable.json")]
  enable_json: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "enable.txt")]
  enable_txt: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "enable.xml")]
  enable_xml: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "json.maximumresults")]
  json_maximumresults: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "ecmaSuport")]
  ecma_suport: Option<::models::ConfigNodePropertyBoolean>
}

impl OrgApacheSlingServletsGetDefaultGetServletProperties {
  pub fn new() -> OrgApacheSlingServletsGetDefaultGetServletProperties {
    OrgApacheSlingServletsGetDefaultGetServletProperties {
      aliases: None,
      index: None,
      index_files: None,
      enable_html: None,
      enable_json: None,
      enable_txt: None,
      enable_xml: None,
      json_maximumresults: None,
      ecma_suport: None
    }
  }

  pub fn set_aliases(&mut self, aliases: ::models::ConfigNodePropertyArray) {
    self.aliases = Some(aliases);
  }

  pub fn with_aliases(mut self, aliases: ::models::ConfigNodePropertyArray) -> OrgApacheSlingServletsGetDefaultGetServletProperties {
    self.aliases = Some(aliases);
    self
  }

  pub fn aliases(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.aliases.as_ref()
  }

  pub fn reset_aliases(&mut self) {
    self.aliases = None;
  }

  pub fn set_index(&mut self, index: ::models::ConfigNodePropertyBoolean) {
    self.index = Some(index);
  }

  pub fn with_index(mut self, index: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingServletsGetDefaultGetServletProperties {
    self.index = Some(index);
    self
  }

  pub fn index(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.index.as_ref()
  }

  pub fn reset_index(&mut self) {
    self.index = None;
  }

  pub fn set_index_files(&mut self, index_files: ::models::ConfigNodePropertyArray) {
    self.index_files = Some(index_files);
  }

  pub fn with_index_files(mut self, index_files: ::models::ConfigNodePropertyArray) -> OrgApacheSlingServletsGetDefaultGetServletProperties {
    self.index_files = Some(index_files);
    self
  }

  pub fn index_files(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.index_files.as_ref()
  }

  pub fn reset_index_files(&mut self) {
    self.index_files = None;
  }

  pub fn set_enable_html(&mut self, enable_html: ::models::ConfigNodePropertyBoolean) {
    self.enable_html = Some(enable_html);
  }

  pub fn with_enable_html(mut self, enable_html: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingServletsGetDefaultGetServletProperties {
    self.enable_html = Some(enable_html);
    self
  }

  pub fn enable_html(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.enable_html.as_ref()
  }

  pub fn reset_enable_html(&mut self) {
    self.enable_html = None;
  }

  pub fn set_enable_json(&mut self, enable_json: ::models::ConfigNodePropertyBoolean) {
    self.enable_json = Some(enable_json);
  }

  pub fn with_enable_json(mut self, enable_json: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingServletsGetDefaultGetServletProperties {
    self.enable_json = Some(enable_json);
    self
  }

  pub fn enable_json(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.enable_json.as_ref()
  }

  pub fn reset_enable_json(&mut self) {
    self.enable_json = None;
  }

  pub fn set_enable_txt(&mut self, enable_txt: ::models::ConfigNodePropertyBoolean) {
    self.enable_txt = Some(enable_txt);
  }

  pub fn with_enable_txt(mut self, enable_txt: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingServletsGetDefaultGetServletProperties {
    self.enable_txt = Some(enable_txt);
    self
  }

  pub fn enable_txt(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.enable_txt.as_ref()
  }

  pub fn reset_enable_txt(&mut self) {
    self.enable_txt = None;
  }

  pub fn set_enable_xml(&mut self, enable_xml: ::models::ConfigNodePropertyBoolean) {
    self.enable_xml = Some(enable_xml);
  }

  pub fn with_enable_xml(mut self, enable_xml: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingServletsGetDefaultGetServletProperties {
    self.enable_xml = Some(enable_xml);
    self
  }

  pub fn enable_xml(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.enable_xml.as_ref()
  }

  pub fn reset_enable_xml(&mut self) {
    self.enable_xml = None;
  }

  pub fn set_json_maximumresults(&mut self, json_maximumresults: ::models::ConfigNodePropertyInteger) {
    self.json_maximumresults = Some(json_maximumresults);
  }

  pub fn with_json_maximumresults(mut self, json_maximumresults: ::models::ConfigNodePropertyInteger) -> OrgApacheSlingServletsGetDefaultGetServletProperties {
    self.json_maximumresults = Some(json_maximumresults);
    self
  }

  pub fn json_maximumresults(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.json_maximumresults.as_ref()
  }

  pub fn reset_json_maximumresults(&mut self) {
    self.json_maximumresults = None;
  }

  pub fn set_ecma_suport(&mut self, ecma_suport: ::models::ConfigNodePropertyBoolean) {
    self.ecma_suport = Some(ecma_suport);
  }

  pub fn with_ecma_suport(mut self, ecma_suport: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingServletsGetDefaultGetServletProperties {
    self.ecma_suport = Some(ecma_suport);
    self
  }

  pub fn ecma_suport(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.ecma_suport.as_ref()
  }

  pub fn reset_ecma_suport(&mut self) {
    self.ecma_suport = None;
  }

}



