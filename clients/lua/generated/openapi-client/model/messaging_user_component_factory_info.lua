--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- messaging_user_component_factory_info class
local messaging_user_component_factory_info = {}
local messaging_user_component_factory_info_mt = {
	__name = "messaging_user_component_factory_info";
	__index = messaging_user_component_factory_info;
}

local function cast_messaging_user_component_factory_info(t)
	return setmetatable(t, messaging_user_component_factory_info_mt)
end

local function new_messaging_user_component_factory_info(pid, title, description, properties)
	return cast_messaging_user_component_factory_info({
		["pid"] = pid;
		["title"] = title;
		["description"] = description;
		["properties"] = properties;
	})
end

return {
	cast = cast_messaging_user_component_factory_info;
	new = new_messaging_user_component_factory_info;
}