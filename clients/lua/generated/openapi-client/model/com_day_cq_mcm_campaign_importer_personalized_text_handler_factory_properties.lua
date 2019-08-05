--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_mcm_campaign_importer_personalized_text_handler_factory_properties class
local com_day_cq_mcm_campaign_importer_personalized_text_handler_factory_properties = {}
local com_day_cq_mcm_campaign_importer_personalized_text_handler_factory_properties_mt = {
	__name = "com_day_cq_mcm_campaign_importer_personalized_text_handler_factory_properties";
	__index = com_day_cq_mcm_campaign_importer_personalized_text_handler_factory_properties;
}

local function cast_com_day_cq_mcm_campaign_importer_personalized_text_handler_factory_properties(t)
	return setmetatable(t, com_day_cq_mcm_campaign_importer_personalized_text_handler_factory_properties_mt)
end

local function new_com_day_cq_mcm_campaign_importer_personalized_text_handler_factory_properties(service_ranking, tagpattern)
	return cast_com_day_cq_mcm_campaign_importer_personalized_text_handler_factory_properties({
		["service.ranking"] = service_ranking;
		["tagpattern"] = tagpattern;
	})
end

return {
	cast = cast_com_day_cq_mcm_campaign_importer_personalized_text_handler_factory_properties;
	new = new_com_day_cq_mcm_campaign_importer_personalized_text_handler_factory_properties;
}