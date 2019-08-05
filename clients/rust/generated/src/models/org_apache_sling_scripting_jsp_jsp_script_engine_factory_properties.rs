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
pub struct OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
  #[serde(rename = "jasper.compilerTargetVM")]
  jasper_compiler_target_vm: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "jasper.compilerSourceVM")]
  jasper_compiler_source_vm: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "jasper.classdebuginfo")]
  jasper_classdebuginfo: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "jasper.enablePooling")]
  jasper_enable_pooling: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "jasper.ieClassId")]
  jasper_ie_class_id: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "jasper.genStringAsCharArray")]
  jasper_gen_string_as_char_array: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "jasper.keepgenerated")]
  jasper_keepgenerated: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "jasper.mappedfile")]
  jasper_mappedfile: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "jasper.trimSpaces")]
  jasper_trim_spaces: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "jasper.displaySourceFragments")]
  jasper_display_source_fragments: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "default.is.session")]
  default_is_session: Option<::models::ConfigNodePropertyBoolean>
}

impl OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
  pub fn new() -> OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
    OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
      jasper_compiler_target_vm: None,
      jasper_compiler_source_vm: None,
      jasper_classdebuginfo: None,
      jasper_enable_pooling: None,
      jasper_ie_class_id: None,
      jasper_gen_string_as_char_array: None,
      jasper_keepgenerated: None,
      jasper_mappedfile: None,
      jasper_trim_spaces: None,
      jasper_display_source_fragments: None,
      default_is_session: None
    }
  }

  pub fn set_jasper_compiler_target_vm(&mut self, jasper_compiler_target_vm: ::models::ConfigNodePropertyString) {
    self.jasper_compiler_target_vm = Some(jasper_compiler_target_vm);
  }

  pub fn with_jasper_compiler_target_vm(mut self, jasper_compiler_target_vm: ::models::ConfigNodePropertyString) -> OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
    self.jasper_compiler_target_vm = Some(jasper_compiler_target_vm);
    self
  }

  pub fn jasper_compiler_target_vm(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.jasper_compiler_target_vm.as_ref()
  }

  pub fn reset_jasper_compiler_target_vm(&mut self) {
    self.jasper_compiler_target_vm = None;
  }

  pub fn set_jasper_compiler_source_vm(&mut self, jasper_compiler_source_vm: ::models::ConfigNodePropertyString) {
    self.jasper_compiler_source_vm = Some(jasper_compiler_source_vm);
  }

  pub fn with_jasper_compiler_source_vm(mut self, jasper_compiler_source_vm: ::models::ConfigNodePropertyString) -> OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
    self.jasper_compiler_source_vm = Some(jasper_compiler_source_vm);
    self
  }

  pub fn jasper_compiler_source_vm(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.jasper_compiler_source_vm.as_ref()
  }

  pub fn reset_jasper_compiler_source_vm(&mut self) {
    self.jasper_compiler_source_vm = None;
  }

  pub fn set_jasper_classdebuginfo(&mut self, jasper_classdebuginfo: ::models::ConfigNodePropertyBoolean) {
    self.jasper_classdebuginfo = Some(jasper_classdebuginfo);
  }

  pub fn with_jasper_classdebuginfo(mut self, jasper_classdebuginfo: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
    self.jasper_classdebuginfo = Some(jasper_classdebuginfo);
    self
  }

  pub fn jasper_classdebuginfo(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.jasper_classdebuginfo.as_ref()
  }

  pub fn reset_jasper_classdebuginfo(&mut self) {
    self.jasper_classdebuginfo = None;
  }

  pub fn set_jasper_enable_pooling(&mut self, jasper_enable_pooling: ::models::ConfigNodePropertyBoolean) {
    self.jasper_enable_pooling = Some(jasper_enable_pooling);
  }

  pub fn with_jasper_enable_pooling(mut self, jasper_enable_pooling: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
    self.jasper_enable_pooling = Some(jasper_enable_pooling);
    self
  }

  pub fn jasper_enable_pooling(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.jasper_enable_pooling.as_ref()
  }

  pub fn reset_jasper_enable_pooling(&mut self) {
    self.jasper_enable_pooling = None;
  }

  pub fn set_jasper_ie_class_id(&mut self, jasper_ie_class_id: ::models::ConfigNodePropertyString) {
    self.jasper_ie_class_id = Some(jasper_ie_class_id);
  }

  pub fn with_jasper_ie_class_id(mut self, jasper_ie_class_id: ::models::ConfigNodePropertyString) -> OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
    self.jasper_ie_class_id = Some(jasper_ie_class_id);
    self
  }

  pub fn jasper_ie_class_id(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.jasper_ie_class_id.as_ref()
  }

  pub fn reset_jasper_ie_class_id(&mut self) {
    self.jasper_ie_class_id = None;
  }

  pub fn set_jasper_gen_string_as_char_array(&mut self, jasper_gen_string_as_char_array: ::models::ConfigNodePropertyBoolean) {
    self.jasper_gen_string_as_char_array = Some(jasper_gen_string_as_char_array);
  }

  pub fn with_jasper_gen_string_as_char_array(mut self, jasper_gen_string_as_char_array: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
    self.jasper_gen_string_as_char_array = Some(jasper_gen_string_as_char_array);
    self
  }

  pub fn jasper_gen_string_as_char_array(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.jasper_gen_string_as_char_array.as_ref()
  }

  pub fn reset_jasper_gen_string_as_char_array(&mut self) {
    self.jasper_gen_string_as_char_array = None;
  }

  pub fn set_jasper_keepgenerated(&mut self, jasper_keepgenerated: ::models::ConfigNodePropertyBoolean) {
    self.jasper_keepgenerated = Some(jasper_keepgenerated);
  }

  pub fn with_jasper_keepgenerated(mut self, jasper_keepgenerated: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
    self.jasper_keepgenerated = Some(jasper_keepgenerated);
    self
  }

  pub fn jasper_keepgenerated(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.jasper_keepgenerated.as_ref()
  }

  pub fn reset_jasper_keepgenerated(&mut self) {
    self.jasper_keepgenerated = None;
  }

  pub fn set_jasper_mappedfile(&mut self, jasper_mappedfile: ::models::ConfigNodePropertyBoolean) {
    self.jasper_mappedfile = Some(jasper_mappedfile);
  }

  pub fn with_jasper_mappedfile(mut self, jasper_mappedfile: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
    self.jasper_mappedfile = Some(jasper_mappedfile);
    self
  }

  pub fn jasper_mappedfile(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.jasper_mappedfile.as_ref()
  }

  pub fn reset_jasper_mappedfile(&mut self) {
    self.jasper_mappedfile = None;
  }

  pub fn set_jasper_trim_spaces(&mut self, jasper_trim_spaces: ::models::ConfigNodePropertyBoolean) {
    self.jasper_trim_spaces = Some(jasper_trim_spaces);
  }

  pub fn with_jasper_trim_spaces(mut self, jasper_trim_spaces: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
    self.jasper_trim_spaces = Some(jasper_trim_spaces);
    self
  }

  pub fn jasper_trim_spaces(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.jasper_trim_spaces.as_ref()
  }

  pub fn reset_jasper_trim_spaces(&mut self) {
    self.jasper_trim_spaces = None;
  }

  pub fn set_jasper_display_source_fragments(&mut self, jasper_display_source_fragments: ::models::ConfigNodePropertyBoolean) {
    self.jasper_display_source_fragments = Some(jasper_display_source_fragments);
  }

  pub fn with_jasper_display_source_fragments(mut self, jasper_display_source_fragments: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
    self.jasper_display_source_fragments = Some(jasper_display_source_fragments);
    self
  }

  pub fn jasper_display_source_fragments(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.jasper_display_source_fragments.as_ref()
  }

  pub fn reset_jasper_display_source_fragments(&mut self) {
    self.jasper_display_source_fragments = None;
  }

  pub fn set_default_is_session(&mut self, default_is_session: ::models::ConfigNodePropertyBoolean) {
    self.default_is_session = Some(default_is_session);
  }

  pub fn with_default_is_session(mut self, default_is_session: ::models::ConfigNodePropertyBoolean) -> OrgApacheSlingScriptingJspJspScriptEngineFactoryProperties {
    self.default_is_session = Some(default_is_session);
    self
  }

  pub fn default_is_session(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.default_is_session.as_ref()
  }

  pub fn reset_default_is_session(&mut self) {
    self.default_is_session = None;
  }

}


