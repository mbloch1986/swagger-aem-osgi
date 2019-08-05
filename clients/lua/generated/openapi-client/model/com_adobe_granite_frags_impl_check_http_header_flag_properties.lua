--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_granite_frags_impl_check_http_header_flag_properties class
local com_adobe_granite_frags_impl_check_http_header_flag_properties = {}
local com_adobe_granite_frags_impl_check_http_header_flag_properties_mt = {
	__name = "com_adobe_granite_frags_impl_check_http_header_flag_properties";
	__index = com_adobe_granite_frags_impl_check_http_header_flag_properties;
}

local function cast_com_adobe_granite_frags_impl_check_http_header_flag_properties(t)
	return setmetatable(t, com_adobe_granite_frags_impl_check_http_header_flag_properties_mt)
end

local function new_com_adobe_granite_frags_impl_check_http_header_flag_properties(feature_name, feature_description, http_header_name, http_header_valuepattern)
	return cast_com_adobe_granite_frags_impl_check_http_header_flag_properties({
		["feature.name"] = feature_name;
		["feature.description"] = feature_description;
		["http.header.name"] = http_header_name;
		["http.header.valuepattern"] = http_header_valuepattern;
	})
end

return {
	cast = cast_com_adobe_granite_frags_impl_check_http_header_flag_properties;
	new = new_com_adobe_granite_frags_impl_check_http_header_flag_properties;
}