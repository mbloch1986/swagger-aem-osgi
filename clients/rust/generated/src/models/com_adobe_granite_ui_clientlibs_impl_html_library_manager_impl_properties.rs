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
pub struct ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
  #[serde(rename = "htmllibmanager.timing")]
  htmllibmanager_timing: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "htmllibmanager.debug.init.js")]
  htmllibmanager_debug_init_js: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "htmllibmanager.minify")]
  htmllibmanager_minify: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "htmllibmanager.debug")]
  htmllibmanager_debug: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "htmllibmanager.gzip")]
  htmllibmanager_gzip: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "htmllibmanager.maxDataUriSize")]
  htmllibmanager_max_data_uri_size: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "htmllibmanager.maxage")]
  htmllibmanager_maxage: Option<::models::ConfigNodePropertyInteger>,
  #[serde(rename = "htmllibmanager.forceCQUrlInfo")]
  htmllibmanager_force_cq_url_info: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "htmllibmanager.defaultthemename")]
  htmllibmanager_defaultthemename: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "htmllibmanager.defaultuserthemename")]
  htmllibmanager_defaultuserthemename: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "htmllibmanager.clientmanager")]
  htmllibmanager_clientmanager: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "htmllibmanager.path.list")]
  htmllibmanager_path_list: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "htmllibmanager.excluded.path.list")]
  htmllibmanager_excluded_path_list: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "htmllibmanager.processor.js")]
  htmllibmanager_processor_js: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "htmllibmanager.processor.css")]
  htmllibmanager_processor_css: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "htmllibmanager.longcache.patterns")]
  htmllibmanager_longcache_patterns: Option<::models::ConfigNodePropertyArray>,
  #[serde(rename = "htmllibmanager.longcache.format")]
  htmllibmanager_longcache_format: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "htmllibmanager.useFileSystemOutputCache")]
  htmllibmanager_use_file_system_output_cache: Option<::models::ConfigNodePropertyBoolean>,
  #[serde(rename = "htmllibmanager.fileSystemOutputCacheLocation")]
  htmllibmanager_file_system_output_cache_location: Option<::models::ConfigNodePropertyString>,
  #[serde(rename = "htmllibmanager.disable.replacement")]
  htmllibmanager_disable_replacement: Option<::models::ConfigNodePropertyArray>
}

impl ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
  pub fn new() -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
      htmllibmanager_timing: None,
      htmllibmanager_debug_init_js: None,
      htmllibmanager_minify: None,
      htmllibmanager_debug: None,
      htmllibmanager_gzip: None,
      htmllibmanager_max_data_uri_size: None,
      htmllibmanager_maxage: None,
      htmllibmanager_force_cq_url_info: None,
      htmllibmanager_defaultthemename: None,
      htmllibmanager_defaultuserthemename: None,
      htmllibmanager_clientmanager: None,
      htmllibmanager_path_list: None,
      htmllibmanager_excluded_path_list: None,
      htmllibmanager_processor_js: None,
      htmllibmanager_processor_css: None,
      htmllibmanager_longcache_patterns: None,
      htmllibmanager_longcache_format: None,
      htmllibmanager_use_file_system_output_cache: None,
      htmllibmanager_file_system_output_cache_location: None,
      htmllibmanager_disable_replacement: None
    }
  }

  pub fn set_htmllibmanager_timing(&mut self, htmllibmanager_timing: ::models::ConfigNodePropertyBoolean) {
    self.htmllibmanager_timing = Some(htmllibmanager_timing);
  }

  pub fn with_htmllibmanager_timing(mut self, htmllibmanager_timing: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_timing = Some(htmllibmanager_timing);
    self
  }

  pub fn htmllibmanager_timing(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.htmllibmanager_timing.as_ref()
  }

  pub fn reset_htmllibmanager_timing(&mut self) {
    self.htmllibmanager_timing = None;
  }

  pub fn set_htmllibmanager_debug_init_js(&mut self, htmllibmanager_debug_init_js: ::models::ConfigNodePropertyString) {
    self.htmllibmanager_debug_init_js = Some(htmllibmanager_debug_init_js);
  }

  pub fn with_htmllibmanager_debug_init_js(mut self, htmllibmanager_debug_init_js: ::models::ConfigNodePropertyString) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_debug_init_js = Some(htmllibmanager_debug_init_js);
    self
  }

  pub fn htmllibmanager_debug_init_js(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.htmllibmanager_debug_init_js.as_ref()
  }

  pub fn reset_htmllibmanager_debug_init_js(&mut self) {
    self.htmllibmanager_debug_init_js = None;
  }

  pub fn set_htmllibmanager_minify(&mut self, htmllibmanager_minify: ::models::ConfigNodePropertyBoolean) {
    self.htmllibmanager_minify = Some(htmllibmanager_minify);
  }

  pub fn with_htmllibmanager_minify(mut self, htmllibmanager_minify: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_minify = Some(htmllibmanager_minify);
    self
  }

  pub fn htmllibmanager_minify(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.htmllibmanager_minify.as_ref()
  }

  pub fn reset_htmllibmanager_minify(&mut self) {
    self.htmllibmanager_minify = None;
  }

  pub fn set_htmllibmanager_debug(&mut self, htmllibmanager_debug: ::models::ConfigNodePropertyBoolean) {
    self.htmllibmanager_debug = Some(htmllibmanager_debug);
  }

  pub fn with_htmllibmanager_debug(mut self, htmllibmanager_debug: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_debug = Some(htmllibmanager_debug);
    self
  }

  pub fn htmllibmanager_debug(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.htmllibmanager_debug.as_ref()
  }

  pub fn reset_htmllibmanager_debug(&mut self) {
    self.htmllibmanager_debug = None;
  }

  pub fn set_htmllibmanager_gzip(&mut self, htmllibmanager_gzip: ::models::ConfigNodePropertyBoolean) {
    self.htmllibmanager_gzip = Some(htmllibmanager_gzip);
  }

  pub fn with_htmllibmanager_gzip(mut self, htmllibmanager_gzip: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_gzip = Some(htmllibmanager_gzip);
    self
  }

  pub fn htmllibmanager_gzip(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.htmllibmanager_gzip.as_ref()
  }

  pub fn reset_htmllibmanager_gzip(&mut self) {
    self.htmllibmanager_gzip = None;
  }

  pub fn set_htmllibmanager_max_data_uri_size(&mut self, htmllibmanager_max_data_uri_size: ::models::ConfigNodePropertyInteger) {
    self.htmllibmanager_max_data_uri_size = Some(htmllibmanager_max_data_uri_size);
  }

  pub fn with_htmllibmanager_max_data_uri_size(mut self, htmllibmanager_max_data_uri_size: ::models::ConfigNodePropertyInteger) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_max_data_uri_size = Some(htmllibmanager_max_data_uri_size);
    self
  }

  pub fn htmllibmanager_max_data_uri_size(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.htmllibmanager_max_data_uri_size.as_ref()
  }

  pub fn reset_htmllibmanager_max_data_uri_size(&mut self) {
    self.htmllibmanager_max_data_uri_size = None;
  }

  pub fn set_htmllibmanager_maxage(&mut self, htmllibmanager_maxage: ::models::ConfigNodePropertyInteger) {
    self.htmllibmanager_maxage = Some(htmllibmanager_maxage);
  }

  pub fn with_htmllibmanager_maxage(mut self, htmllibmanager_maxage: ::models::ConfigNodePropertyInteger) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_maxage = Some(htmllibmanager_maxage);
    self
  }

  pub fn htmllibmanager_maxage(&self) -> Option<&::models::ConfigNodePropertyInteger> {
    self.htmllibmanager_maxage.as_ref()
  }

  pub fn reset_htmllibmanager_maxage(&mut self) {
    self.htmllibmanager_maxage = None;
  }

  pub fn set_htmllibmanager_force_cq_url_info(&mut self, htmllibmanager_force_cq_url_info: ::models::ConfigNodePropertyBoolean) {
    self.htmllibmanager_force_cq_url_info = Some(htmllibmanager_force_cq_url_info);
  }

  pub fn with_htmllibmanager_force_cq_url_info(mut self, htmllibmanager_force_cq_url_info: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_force_cq_url_info = Some(htmllibmanager_force_cq_url_info);
    self
  }

  pub fn htmllibmanager_force_cq_url_info(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.htmllibmanager_force_cq_url_info.as_ref()
  }

  pub fn reset_htmllibmanager_force_cq_url_info(&mut self) {
    self.htmllibmanager_force_cq_url_info = None;
  }

  pub fn set_htmllibmanager_defaultthemename(&mut self, htmllibmanager_defaultthemename: ::models::ConfigNodePropertyString) {
    self.htmllibmanager_defaultthemename = Some(htmllibmanager_defaultthemename);
  }

  pub fn with_htmllibmanager_defaultthemename(mut self, htmllibmanager_defaultthemename: ::models::ConfigNodePropertyString) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_defaultthemename = Some(htmllibmanager_defaultthemename);
    self
  }

  pub fn htmllibmanager_defaultthemename(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.htmllibmanager_defaultthemename.as_ref()
  }

  pub fn reset_htmllibmanager_defaultthemename(&mut self) {
    self.htmllibmanager_defaultthemename = None;
  }

  pub fn set_htmllibmanager_defaultuserthemename(&mut self, htmllibmanager_defaultuserthemename: ::models::ConfigNodePropertyString) {
    self.htmllibmanager_defaultuserthemename = Some(htmllibmanager_defaultuserthemename);
  }

  pub fn with_htmllibmanager_defaultuserthemename(mut self, htmllibmanager_defaultuserthemename: ::models::ConfigNodePropertyString) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_defaultuserthemename = Some(htmllibmanager_defaultuserthemename);
    self
  }

  pub fn htmllibmanager_defaultuserthemename(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.htmllibmanager_defaultuserthemename.as_ref()
  }

  pub fn reset_htmllibmanager_defaultuserthemename(&mut self) {
    self.htmllibmanager_defaultuserthemename = None;
  }

  pub fn set_htmllibmanager_clientmanager(&mut self, htmllibmanager_clientmanager: ::models::ConfigNodePropertyString) {
    self.htmllibmanager_clientmanager = Some(htmllibmanager_clientmanager);
  }

  pub fn with_htmllibmanager_clientmanager(mut self, htmllibmanager_clientmanager: ::models::ConfigNodePropertyString) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_clientmanager = Some(htmllibmanager_clientmanager);
    self
  }

  pub fn htmllibmanager_clientmanager(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.htmllibmanager_clientmanager.as_ref()
  }

  pub fn reset_htmllibmanager_clientmanager(&mut self) {
    self.htmllibmanager_clientmanager = None;
  }

  pub fn set_htmllibmanager_path_list(&mut self, htmllibmanager_path_list: ::models::ConfigNodePropertyArray) {
    self.htmllibmanager_path_list = Some(htmllibmanager_path_list);
  }

  pub fn with_htmllibmanager_path_list(mut self, htmllibmanager_path_list: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_path_list = Some(htmllibmanager_path_list);
    self
  }

  pub fn htmllibmanager_path_list(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.htmllibmanager_path_list.as_ref()
  }

  pub fn reset_htmllibmanager_path_list(&mut self) {
    self.htmllibmanager_path_list = None;
  }

  pub fn set_htmllibmanager_excluded_path_list(&mut self, htmllibmanager_excluded_path_list: ::models::ConfigNodePropertyArray) {
    self.htmllibmanager_excluded_path_list = Some(htmllibmanager_excluded_path_list);
  }

  pub fn with_htmllibmanager_excluded_path_list(mut self, htmllibmanager_excluded_path_list: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_excluded_path_list = Some(htmllibmanager_excluded_path_list);
    self
  }

  pub fn htmllibmanager_excluded_path_list(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.htmllibmanager_excluded_path_list.as_ref()
  }

  pub fn reset_htmllibmanager_excluded_path_list(&mut self) {
    self.htmllibmanager_excluded_path_list = None;
  }

  pub fn set_htmllibmanager_processor_js(&mut self, htmllibmanager_processor_js: ::models::ConfigNodePropertyArray) {
    self.htmllibmanager_processor_js = Some(htmllibmanager_processor_js);
  }

  pub fn with_htmllibmanager_processor_js(mut self, htmllibmanager_processor_js: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_processor_js = Some(htmllibmanager_processor_js);
    self
  }

  pub fn htmllibmanager_processor_js(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.htmllibmanager_processor_js.as_ref()
  }

  pub fn reset_htmllibmanager_processor_js(&mut self) {
    self.htmllibmanager_processor_js = None;
  }

  pub fn set_htmllibmanager_processor_css(&mut self, htmllibmanager_processor_css: ::models::ConfigNodePropertyArray) {
    self.htmllibmanager_processor_css = Some(htmllibmanager_processor_css);
  }

  pub fn with_htmllibmanager_processor_css(mut self, htmllibmanager_processor_css: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_processor_css = Some(htmllibmanager_processor_css);
    self
  }

  pub fn htmllibmanager_processor_css(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.htmllibmanager_processor_css.as_ref()
  }

  pub fn reset_htmllibmanager_processor_css(&mut self) {
    self.htmllibmanager_processor_css = None;
  }

  pub fn set_htmllibmanager_longcache_patterns(&mut self, htmllibmanager_longcache_patterns: ::models::ConfigNodePropertyArray) {
    self.htmllibmanager_longcache_patterns = Some(htmllibmanager_longcache_patterns);
  }

  pub fn with_htmllibmanager_longcache_patterns(mut self, htmllibmanager_longcache_patterns: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_longcache_patterns = Some(htmllibmanager_longcache_patterns);
    self
  }

  pub fn htmllibmanager_longcache_patterns(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.htmllibmanager_longcache_patterns.as_ref()
  }

  pub fn reset_htmllibmanager_longcache_patterns(&mut self) {
    self.htmllibmanager_longcache_patterns = None;
  }

  pub fn set_htmllibmanager_longcache_format(&mut self, htmllibmanager_longcache_format: ::models::ConfigNodePropertyString) {
    self.htmllibmanager_longcache_format = Some(htmllibmanager_longcache_format);
  }

  pub fn with_htmllibmanager_longcache_format(mut self, htmllibmanager_longcache_format: ::models::ConfigNodePropertyString) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_longcache_format = Some(htmllibmanager_longcache_format);
    self
  }

  pub fn htmllibmanager_longcache_format(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.htmllibmanager_longcache_format.as_ref()
  }

  pub fn reset_htmllibmanager_longcache_format(&mut self) {
    self.htmllibmanager_longcache_format = None;
  }

  pub fn set_htmllibmanager_use_file_system_output_cache(&mut self, htmllibmanager_use_file_system_output_cache: ::models::ConfigNodePropertyBoolean) {
    self.htmllibmanager_use_file_system_output_cache = Some(htmllibmanager_use_file_system_output_cache);
  }

  pub fn with_htmllibmanager_use_file_system_output_cache(mut self, htmllibmanager_use_file_system_output_cache: ::models::ConfigNodePropertyBoolean) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_use_file_system_output_cache = Some(htmllibmanager_use_file_system_output_cache);
    self
  }

  pub fn htmllibmanager_use_file_system_output_cache(&self) -> Option<&::models::ConfigNodePropertyBoolean> {
    self.htmllibmanager_use_file_system_output_cache.as_ref()
  }

  pub fn reset_htmllibmanager_use_file_system_output_cache(&mut self) {
    self.htmllibmanager_use_file_system_output_cache = None;
  }

  pub fn set_htmllibmanager_file_system_output_cache_location(&mut self, htmllibmanager_file_system_output_cache_location: ::models::ConfigNodePropertyString) {
    self.htmllibmanager_file_system_output_cache_location = Some(htmllibmanager_file_system_output_cache_location);
  }

  pub fn with_htmllibmanager_file_system_output_cache_location(mut self, htmllibmanager_file_system_output_cache_location: ::models::ConfigNodePropertyString) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_file_system_output_cache_location = Some(htmllibmanager_file_system_output_cache_location);
    self
  }

  pub fn htmllibmanager_file_system_output_cache_location(&self) -> Option<&::models::ConfigNodePropertyString> {
    self.htmllibmanager_file_system_output_cache_location.as_ref()
  }

  pub fn reset_htmllibmanager_file_system_output_cache_location(&mut self) {
    self.htmllibmanager_file_system_output_cache_location = None;
  }

  pub fn set_htmllibmanager_disable_replacement(&mut self, htmllibmanager_disable_replacement: ::models::ConfigNodePropertyArray) {
    self.htmllibmanager_disable_replacement = Some(htmllibmanager_disable_replacement);
  }

  pub fn with_htmllibmanager_disable_replacement(mut self, htmllibmanager_disable_replacement: ::models::ConfigNodePropertyArray) -> ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties {
    self.htmllibmanager_disable_replacement = Some(htmllibmanager_disable_replacement);
    self
  }

  pub fn htmllibmanager_disable_replacement(&self) -> Option<&::models::ConfigNodePropertyArray> {
    self.htmllibmanager_disable_replacement.as_ref()
  }

  pub fn reset_htmllibmanager_disable_replacement(&mut self) {
    self.htmllibmanager_disable_replacement = None;
  }

}


