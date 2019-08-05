--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- config_node_property_array class
local config_node_property_array = {}
local config_node_property_array_mt = {
	__name = "config_node_property_array";
	__index = config_node_property_array;
}

local function cast_config_node_property_array(t)
	return setmetatable(t, config_node_property_array_mt)
end

local function new_config_node_property_array(name, optional, is_set, type, values, description)
	return cast_config_node_property_array({
		["name"] = name;
		["optional"] = optional;
		["is_set"] = is_set;
		["type"] = type;
		["values"] = values;
		["description"] = description;
	})
end

return {
	cast = cast_config_node_property_array;
	new = new_config_node_property_array;
}