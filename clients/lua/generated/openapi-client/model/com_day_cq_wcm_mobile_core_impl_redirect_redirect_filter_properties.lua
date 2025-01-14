--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_wcm_mobile_core_impl_redirect_redirect_filter_properties class
local com_day_cq_wcm_mobile_core_impl_redirect_redirect_filter_properties = {}
local com_day_cq_wcm_mobile_core_impl_redirect_redirect_filter_properties_mt = {
	__name = "com_day_cq_wcm_mobile_core_impl_redirect_redirect_filter_properties";
	__index = com_day_cq_wcm_mobile_core_impl_redirect_redirect_filter_properties;
}

local function cast_com_day_cq_wcm_mobile_core_impl_redirect_redirect_filter_properties(t)
	return setmetatable(t, com_day_cq_wcm_mobile_core_impl_redirect_redirect_filter_properties_mt)
end

local function new_com_day_cq_wcm_mobile_core_impl_redirect_redirect_filter_properties(redirect_enabled, redirect_stats_enabled, redirect_extensions, redirect_paths)
	return cast_com_day_cq_wcm_mobile_core_impl_redirect_redirect_filter_properties({
		["redirect.enabled"] = redirect_enabled;
		["redirect.stats.enabled"] = redirect_stats_enabled;
		["redirect.extensions"] = redirect_extensions;
		["redirect.paths"] = redirect_paths;
	})
end

return {
	cast = cast_com_day_cq_wcm_mobile_core_impl_redirect_redirect_filter_properties;
	new = new_com_day_cq_wcm_mobile_core_impl_redirect_redirect_filter_properties;
}
