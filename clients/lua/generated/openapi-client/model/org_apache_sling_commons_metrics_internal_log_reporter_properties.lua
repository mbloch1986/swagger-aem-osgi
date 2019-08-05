--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_sling_commons_metrics_internal_log_reporter_properties class
local org_apache_sling_commons_metrics_internal_log_reporter_properties = {}
local org_apache_sling_commons_metrics_internal_log_reporter_properties_mt = {
	__name = "org_apache_sling_commons_metrics_internal_log_reporter_properties";
	__index = org_apache_sling_commons_metrics_internal_log_reporter_properties;
}

local function cast_org_apache_sling_commons_metrics_internal_log_reporter_properties(t)
	return setmetatable(t, org_apache_sling_commons_metrics_internal_log_reporter_properties_mt)
end

local function new_org_apache_sling_commons_metrics_internal_log_reporter_properties(period, time_unit, level, logger_name, prefix, pattern, registry_name)
	return cast_org_apache_sling_commons_metrics_internal_log_reporter_properties({
		["period"] = period;
		["timeUnit"] = time_unit;
		["level"] = level;
		["loggerName"] = logger_name;
		["prefix"] = prefix;
		["pattern"] = pattern;
		["registryName"] = registry_name;
	})
end

return {
	cast = cast_org_apache_sling_commons_metrics_internal_log_reporter_properties;
	new = new_org_apache_sling_commons_metrics_internal_log_reporter_properties;
}