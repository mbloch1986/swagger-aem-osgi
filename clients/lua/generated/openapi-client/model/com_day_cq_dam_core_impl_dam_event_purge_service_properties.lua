--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_dam_core_impl_dam_event_purge_service_properties class
local com_day_cq_dam_core_impl_dam_event_purge_service_properties = {}
local com_day_cq_dam_core_impl_dam_event_purge_service_properties_mt = {
	__name = "com_day_cq_dam_core_impl_dam_event_purge_service_properties";
	__index = com_day_cq_dam_core_impl_dam_event_purge_service_properties;
}

local function cast_com_day_cq_dam_core_impl_dam_event_purge_service_properties(t)
	return setmetatable(t, com_day_cq_dam_core_impl_dam_event_purge_service_properties_mt)
end

local function new_com_day_cq_dam_core_impl_dam_event_purge_service_properties(scheduler_expression, max_saved_activities, save_interval, enable_activity_purge, event_types)
	return cast_com_day_cq_dam_core_impl_dam_event_purge_service_properties({
		["scheduler.expression"] = scheduler_expression;
		["maxSavedActivities"] = max_saved_activities;
		["saveInterval"] = save_interval;
		["enableActivityPurge"] = enable_activity_purge;
		["eventTypes"] = event_types;
	})
end

return {
	cast = cast_com_day_cq_dam_core_impl_dam_event_purge_service_properties;
	new = new_com_day_cq_dam_core_impl_dam_event_purge_service_properties;
}
