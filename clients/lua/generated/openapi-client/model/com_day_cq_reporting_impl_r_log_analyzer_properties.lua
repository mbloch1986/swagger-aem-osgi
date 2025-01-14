--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_reporting_impl_r_log_analyzer_properties class
local com_day_cq_reporting_impl_r_log_analyzer_properties = {}
local com_day_cq_reporting_impl_r_log_analyzer_properties_mt = {
	__name = "com_day_cq_reporting_impl_r_log_analyzer_properties";
	__index = com_day_cq_reporting_impl_r_log_analyzer_properties;
}

local function cast_com_day_cq_reporting_impl_r_log_analyzer_properties(t)
	return setmetatable(t, com_day_cq_reporting_impl_r_log_analyzer_properties_mt)
end

local function new_com_day_cq_reporting_impl_r_log_analyzer_properties(request_log_output)
	return cast_com_day_cq_reporting_impl_r_log_analyzer_properties({
		["request.log.output"] = request_log_output;
	})
end

return {
	cast = cast_com_day_cq_reporting_impl_r_log_analyzer_properties;
	new = new_com_day_cq_reporting_impl_r_log_analyzer_properties;
}
