--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_granite_repository_hc_impl_default_logins_health_check_properties class
local com_adobe_granite_repository_hc_impl_default_logins_health_check_properties = {}
local com_adobe_granite_repository_hc_impl_default_logins_health_check_properties_mt = {
	__name = "com_adobe_granite_repository_hc_impl_default_logins_health_check_properties";
	__index = com_adobe_granite_repository_hc_impl_default_logins_health_check_properties;
}

local function cast_com_adobe_granite_repository_hc_impl_default_logins_health_check_properties(t)
	return setmetatable(t, com_adobe_granite_repository_hc_impl_default_logins_health_check_properties_mt)
end

local function new_com_adobe_granite_repository_hc_impl_default_logins_health_check_properties(hc_tags, account_logins, console_logins)
	return cast_com_adobe_granite_repository_hc_impl_default_logins_health_check_properties({
		["hc.tags"] = hc_tags;
		["account.logins"] = account_logins;
		["console.logins"] = console_logins;
	})
end

return {
	cast = cast_com_adobe_granite_repository_hc_impl_default_logins_health_check_properties;
	new = new_com_adobe_granite_repository_hc_impl_default_logins_health_check_properties;
}
