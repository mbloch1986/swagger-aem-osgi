--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_fd_fp_config_forms_portal_scheduler_service_properties class
local com_adobe_fd_fp_config_forms_portal_scheduler_service_properties = {}
local com_adobe_fd_fp_config_forms_portal_scheduler_service_properties_mt = {
	__name = "com_adobe_fd_fp_config_forms_portal_scheduler_service_properties";
	__index = com_adobe_fd_fp_config_forms_portal_scheduler_service_properties;
}

local function cast_com_adobe_fd_fp_config_forms_portal_scheduler_service_properties(t)
	return setmetatable(t, com_adobe_fd_fp_config_forms_portal_scheduler_service_properties_mt)
end

local function new_com_adobe_fd_fp_config_forms_portal_scheduler_service_properties(formportal_interval)
	return cast_com_adobe_fd_fp_config_forms_portal_scheduler_service_properties({
		["formportal.interval"] = formportal_interval;
	})
end

return {
	cast = cast_com_adobe_fd_fp_config_forms_portal_scheduler_service_properties;
	new = new_com_adobe_fd_fp_config_forms_portal_scheduler_service_properties;
}