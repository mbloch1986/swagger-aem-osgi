--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- adaptive_form_and_interactive_communication_web_channel_configuration_info class
local adaptive_form_and_interactive_communication_web_channel_configuration_info = {}
local adaptive_form_and_interactive_communication_web_channel_configuration_info_mt = {
	__name = "adaptive_form_and_interactive_communication_web_channel_configuration_info";
	__index = adaptive_form_and_interactive_communication_web_channel_configuration_info;
}

local function cast_adaptive_form_and_interactive_communication_web_channel_configuration_info(t)
	return setmetatable(t, adaptive_form_and_interactive_communication_web_channel_configuration_info_mt)
end

local function new_adaptive_form_and_interactive_communication_web_channel_configuration_info(pid, title, description, properties)
	return cast_adaptive_form_and_interactive_communication_web_channel_configuration_info({
		["pid"] = pid;
		["title"] = title;
		["description"] = description;
		["properties"] = properties;
	})
end

return {
	cast = cast_adaptive_form_and_interactive_communication_web_channel_configuration_info;
	new = new_adaptive_form_and_interactive_communication_web_channel_configuration_info;
}
