--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_dam_core_impl_dam_event_recorder_impl_properties class
local com_day_cq_dam_core_impl_dam_event_recorder_impl_properties = {}
local com_day_cq_dam_core_impl_dam_event_recorder_impl_properties_mt = {
	__name = "com_day_cq_dam_core_impl_dam_event_recorder_impl_properties";
	__index = com_day_cq_dam_core_impl_dam_event_recorder_impl_properties;
}

local function cast_com_day_cq_dam_core_impl_dam_event_recorder_impl_properties(t)
	return setmetatable(t, com_day_cq_dam_core_impl_dam_event_recorder_impl_properties_mt)
end

local function new_com_day_cq_dam_core_impl_dam_event_recorder_impl_properties(event_filter, event_queue_length, eventrecorder_enabled, eventrecorder_blacklist, eventrecorder_eventtypes)
	return cast_com_day_cq_dam_core_impl_dam_event_recorder_impl_properties({
		["event.filter"] = event_filter;
		["event.queue.length"] = event_queue_length;
		["eventrecorder.enabled"] = eventrecorder_enabled;
		["eventrecorder.blacklist"] = eventrecorder_blacklist;
		["eventrecorder.eventtypes"] = eventrecorder_eventtypes;
	})
end

return {
	cast = cast_com_day_cq_dam_core_impl_dam_event_recorder_impl_properties;
	new = new_com_day_cq_dam_core_impl_dam_event_recorder_impl_properties;
}
