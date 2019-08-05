--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_granite_translation_core_impl_translation_manager_impl_properties class
local com_adobe_granite_translation_core_impl_translation_manager_impl_properties = {}
local com_adobe_granite_translation_core_impl_translation_manager_impl_properties_mt = {
	__name = "com_adobe_granite_translation_core_impl_translation_manager_impl_properties";
	__index = com_adobe_granite_translation_core_impl_translation_manager_impl_properties;
}

local function cast_com_adobe_granite_translation_core_impl_translation_manager_impl_properties(t)
	return setmetatable(t, com_adobe_granite_translation_core_impl_translation_manager_impl_properties_mt)
end

local function new_com_adobe_granite_translation_core_impl_translation_manager_impl_properties(default_connector_name, default_category)
	return cast_com_adobe_granite_translation_core_impl_translation_manager_impl_properties({
		["defaultConnectorName"] = default_connector_name;
		["defaultCategory"] = default_category;
	})
end

return {
	cast = cast_com_adobe_granite_translation_core_impl_translation_manager_impl_properties;
	new = new_com_adobe_granite_translation_core_impl_translation_manager_impl_properties;
}