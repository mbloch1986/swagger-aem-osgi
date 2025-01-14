--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_wcm_core_impl_references_content_content_reference_config_properties class
local com_day_cq_wcm_core_impl_references_content_content_reference_config_properties = {}
local com_day_cq_wcm_core_impl_references_content_content_reference_config_properties_mt = {
	__name = "com_day_cq_wcm_core_impl_references_content_content_reference_config_properties";
	__index = com_day_cq_wcm_core_impl_references_content_content_reference_config_properties;
}

local function cast_com_day_cq_wcm_core_impl_references_content_content_reference_config_properties(t)
	return setmetatable(t, com_day_cq_wcm_core_impl_references_content_content_reference_config_properties_mt)
end

local function new_com_day_cq_wcm_core_impl_references_content_content_reference_config_properties(content_reference_config_resource_types)
	return cast_com_day_cq_wcm_core_impl_references_content_content_reference_config_properties({
		["contentReferenceConfig.resourceTypes"] = content_reference_config_resource_types;
	})
end

return {
	cast = cast_com_day_cq_wcm_core_impl_references_content_content_reference_config_properties;
	new = new_com_day_cq_wcm_core_impl_references_content_content_reference_config_properties;
}
