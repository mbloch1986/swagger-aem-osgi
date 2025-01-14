--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_dam_core_impl_servlet_metadata_get_servlet_properties class
local com_day_cq_dam_core_impl_servlet_metadata_get_servlet_properties = {}
local com_day_cq_dam_core_impl_servlet_metadata_get_servlet_properties_mt = {
	__name = "com_day_cq_dam_core_impl_servlet_metadata_get_servlet_properties";
	__index = com_day_cq_dam_core_impl_servlet_metadata_get_servlet_properties;
}

local function cast_com_day_cq_dam_core_impl_servlet_metadata_get_servlet_properties(t)
	return setmetatable(t, com_day_cq_dam_core_impl_servlet_metadata_get_servlet_properties_mt)
end

local function new_com_day_cq_dam_core_impl_servlet_metadata_get_servlet_properties(sling_servlet_resource_types, sling_servlet_methods, sling_servlet_extensions, sling_servlet_selectors)
	return cast_com_day_cq_dam_core_impl_servlet_metadata_get_servlet_properties({
		["sling.servlet.resourceTypes"] = sling_servlet_resource_types;
		["sling.servlet.methods"] = sling_servlet_methods;
		["sling.servlet.extensions"] = sling_servlet_extensions;
		["sling.servlet.selectors"] = sling_servlet_selectors;
	})
end

return {
	cast = cast_com_day_cq_dam_core_impl_servlet_metadata_get_servlet_properties;
	new = new_com_day_cq_dam_core_impl_servlet_metadata_get_servlet_properties;
}
