--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_dam_s7dam_common_analytics_impl_site_catalyst_report_runner_properties class
local com_day_cq_dam_s7dam_common_analytics_impl_site_catalyst_report_runner_properties = {}
local com_day_cq_dam_s7dam_common_analytics_impl_site_catalyst_report_runner_properties_mt = {
	__name = "com_day_cq_dam_s7dam_common_analytics_impl_site_catalyst_report_runner_properties";
	__index = com_day_cq_dam_s7dam_common_analytics_impl_site_catalyst_report_runner_properties;
}

local function cast_com_day_cq_dam_s7dam_common_analytics_impl_site_catalyst_report_runner_properties(t)
	return setmetatable(t, com_day_cq_dam_s7dam_common_analytics_impl_site_catalyst_report_runner_properties_mt)
end

local function new_com_day_cq_dam_s7dam_common_analytics_impl_site_catalyst_report_runner_properties(scheduler_expression, scheduler_concurrent)
	return cast_com_day_cq_dam_s7dam_common_analytics_impl_site_catalyst_report_runner_properties({
		["scheduler.expression"] = scheduler_expression;
		["scheduler.concurrent"] = scheduler_concurrent;
	})
end

return {
	cast = cast_com_day_cq_dam_s7dam_common_analytics_impl_site_catalyst_report_runner_properties;
	new = new_com_day_cq_dam_s7dam_common_analytics_impl_site_catalyst_report_runner_properties;
}
