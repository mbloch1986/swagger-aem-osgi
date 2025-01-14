--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_search_suggest_impl_suggestion_index_manager_impl_properties class
local com_day_cq_search_suggest_impl_suggestion_index_manager_impl_properties = {}
local com_day_cq_search_suggest_impl_suggestion_index_manager_impl_properties_mt = {
	__name = "com_day_cq_search_suggest_impl_suggestion_index_manager_impl_properties";
	__index = com_day_cq_search_suggest_impl_suggestion_index_manager_impl_properties;
}

local function cast_com_day_cq_search_suggest_impl_suggestion_index_manager_impl_properties(t)
	return setmetatable(t, com_day_cq_search_suggest_impl_suggestion_index_manager_impl_properties_mt)
end

local function new_com_day_cq_search_suggest_impl_suggestion_index_manager_impl_properties(path_builder_target, suggest_basepath)
	return cast_com_day_cq_search_suggest_impl_suggestion_index_manager_impl_properties({
		["pathBuilder.target"] = path_builder_target;
		["suggest.basepath"] = suggest_basepath;
	})
end

return {
	cast = cast_com_day_cq_search_suggest_impl_suggestion_index_manager_impl_properties;
	new = new_com_day_cq_search_suggest_impl_suggestion_index_manager_impl_properties;
}
