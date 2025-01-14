--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_wcm_scripting_impl_bvp_manager_properties class
local com_day_cq_wcm_scripting_impl_bvp_manager_properties = {}
local com_day_cq_wcm_scripting_impl_bvp_manager_properties_mt = {
	__name = "com_day_cq_wcm_scripting_impl_bvp_manager_properties";
	__index = com_day_cq_wcm_scripting_impl_bvp_manager_properties;
}

local function cast_com_day_cq_wcm_scripting_impl_bvp_manager_properties(t)
	return setmetatable(t, com_day_cq_wcm_scripting_impl_bvp_manager_properties_mt)
end

local function new_com_day_cq_wcm_scripting_impl_bvp_manager_properties(com_day_cq_wcm_scripting_bvp_script_engines)
	return cast_com_day_cq_wcm_scripting_impl_bvp_manager_properties({
		["com.day.cq.wcm.scripting.bvp.script.engines"] = com_day_cq_wcm_scripting_bvp_script_engines;
	})
end

return {
	cast = cast_com_day_cq_wcm_scripting_impl_bvp_manager_properties;
	new = new_com_day_cq_wcm_scripting_impl_bvp_manager_properties;
}
