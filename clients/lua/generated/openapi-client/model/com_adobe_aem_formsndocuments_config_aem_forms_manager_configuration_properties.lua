--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_aem_formsndocuments_config_aem_forms_manager_configuration_properties class
local com_adobe_aem_formsndocuments_config_aem_forms_manager_configuration_properties = {}
local com_adobe_aem_formsndocuments_config_aem_forms_manager_configuration_properties_mt = {
	__name = "com_adobe_aem_formsndocuments_config_aem_forms_manager_configuration_properties";
	__index = com_adobe_aem_formsndocuments_config_aem_forms_manager_configuration_properties;
}

local function cast_com_adobe_aem_formsndocuments_config_aem_forms_manager_configuration_properties(t)
	return setmetatable(t, com_adobe_aem_formsndocuments_config_aem_forms_manager_configuration_properties_mt)
end

local function new_com_adobe_aem_formsndocuments_config_aem_forms_manager_configuration_properties(forms_manager_config_include_ootb_templates, forms_manager_config_include_deprecated_templates)
	return cast_com_adobe_aem_formsndocuments_config_aem_forms_manager_configuration_properties({
		["formsManagerConfig.includeOOTBTemplates"] = forms_manager_config_include_ootb_templates;
		["formsManagerConfig.includeDeprecatedTemplates"] = forms_manager_config_include_deprecated_templates;
	})
end

return {
	cast = cast_com_adobe_aem_formsndocuments_config_aem_forms_manager_configuration_properties;
	new = new_com_adobe_aem_formsndocuments_config_aem_forms_manager_configuration_properties;
}
