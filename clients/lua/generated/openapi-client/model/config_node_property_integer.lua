--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- config_node_property_integer class
local config_node_property_integer = {}
local config_node_property_integer_mt = {
	__name = "config_node_property_integer";
	__index = config_node_property_integer;
}

local function cast_config_node_property_integer(t)
	return setmetatable(t, config_node_property_integer_mt)
end

local function new_config_node_property_integer(name, optional, is_set, type, value, description)
	return cast_config_node_property_integer({
		["name"] = name;
		["optional"] = optional;
		["is_set"] = is_set;
		["type"] = type;
		["value"] = value;
		["description"] = description;
	})
end

return {
	cast = cast_config_node_property_integer;
	new = new_config_node_property_integer;
}
