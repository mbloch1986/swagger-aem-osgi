--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_mcm_landingpage_parser_taghandlers_cta_graphical_click_throug_properties class
local com_day_cq_mcm_landingpage_parser_taghandlers_cta_graphical_click_throug_properties = {}
local com_day_cq_mcm_landingpage_parser_taghandlers_cta_graphical_click_throug_properties_mt = {
	__name = "com_day_cq_mcm_landingpage_parser_taghandlers_cta_graphical_click_throug_properties";
	__index = com_day_cq_mcm_landingpage_parser_taghandlers_cta_graphical_click_throug_properties;
}

local function cast_com_day_cq_mcm_landingpage_parser_taghandlers_cta_graphical_click_throug_properties(t)
	return setmetatable(t, com_day_cq_mcm_landingpage_parser_taghandlers_cta_graphical_click_throug_properties_mt)
end

local function new_com_day_cq_mcm_landingpage_parser_taghandlers_cta_graphical_click_throug_properties(service_ranking, tagpattern, component_resource_type)
	return cast_com_day_cq_mcm_landingpage_parser_taghandlers_cta_graphical_click_throug_properties({
		["service.ranking"] = service_ranking;
		["tagpattern"] = tagpattern;
		["component.resourceType"] = component_resource_type;
	})
end

return {
	cast = cast_com_day_cq_mcm_landingpage_parser_taghandlers_cta_graphical_click_throug_properties;
	new = new_com_day_cq_mcm_landingpage_parser_taghandlers_cta_graphical_click_throug_properties;
}