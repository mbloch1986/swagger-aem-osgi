--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_cq_social_reporting_analytics_services_impl_analytics_report_i_properties class
local com_adobe_cq_social_reporting_analytics_services_impl_analytics_report_i_properties = {}
local com_adobe_cq_social_reporting_analytics_services_impl_analytics_report_i_properties_mt = {
	__name = "com_adobe_cq_social_reporting_analytics_services_impl_analytics_report_i_properties";
	__index = com_adobe_cq_social_reporting_analytics_services_impl_analytics_report_i_properties;
}

local function cast_com_adobe_cq_social_reporting_analytics_services_impl_analytics_report_i_properties(t)
	return setmetatable(t, com_adobe_cq_social_reporting_analytics_services_impl_analytics_report_i_properties_mt)
end

local function new_com_adobe_cq_social_reporting_analytics_services_impl_analytics_report_i_properties(cq_social_reporting_analytics_polling_importer_interval, cq_social_reporting_analytics_polling_importer_page_size)
	return cast_com_adobe_cq_social_reporting_analytics_services_impl_analytics_report_i_properties({
		["cq.social.reporting.analytics.polling.importer.interval"] = cq_social_reporting_analytics_polling_importer_interval;
		["cq.social.reporting.analytics.polling.importer.pageSize"] = cq_social_reporting_analytics_polling_importer_page_size;
	})
end

return {
	cast = cast_com_adobe_cq_social_reporting_analytics_services_impl_analytics_report_i_properties;
	new = new_com_adobe_cq_social_reporting_analytics_services_impl_analytics_report_i_properties;
}
