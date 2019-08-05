--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_dam_scene7_impl_scene7_flash_templates_service_impl_properties class
local com_day_cq_dam_scene7_impl_scene7_flash_templates_service_impl_properties = {}
local com_day_cq_dam_scene7_impl_scene7_flash_templates_service_impl_properties_mt = {
	__name = "com_day_cq_dam_scene7_impl_scene7_flash_templates_service_impl_properties";
	__index = com_day_cq_dam_scene7_impl_scene7_flash_templates_service_impl_properties;
}

local function cast_com_day_cq_dam_scene7_impl_scene7_flash_templates_service_impl_properties(t)
	return setmetatable(t, com_day_cq_dam_scene7_impl_scene7_flash_templates_service_impl_properties_mt)
end

local function new_com_day_cq_dam_scene7_impl_scene7_flash_templates_service_impl_properties(scene7_flash_templates_rti, scene7_flash_templates_rsi, scene7_flash_templates_rb, scene7_flash_templates_rurl, scene7_flash_template_url_format_parameter)
	return cast_com_day_cq_dam_scene7_impl_scene7_flash_templates_service_impl_properties({
		["scene7FlashTemplates.rti"] = scene7_flash_templates_rti;
		["scene7FlashTemplates.rsi"] = scene7_flash_templates_rsi;
		["scene7FlashTemplates.rb"] = scene7_flash_templates_rb;
		["scene7FlashTemplates.rurl"] = scene7_flash_templates_rurl;
		["scene7FlashTemplate.urlFormatParameter"] = scene7_flash_template_url_format_parameter;
	})
end

return {
	cast = cast_com_day_cq_dam_scene7_impl_scene7_flash_templates_service_impl_properties;
	new = new_com_day_cq_dam_scene7_impl_scene7_flash_templates_service_impl_properties;
}