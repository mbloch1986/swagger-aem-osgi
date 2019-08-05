--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_properties class
local com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_properties = {}
local com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_properties_mt = {
	__name = "com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_properties";
	__index = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_properties;
}

local function cast_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_properties(t)
	return setmetatable(t, com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_properties_mt)
end

local function new_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_properties(com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_project_path, com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_schedule_frequency, com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_ping_timeout, com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_recipients, com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpserver, com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpport, com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_usetls, com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_username, com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_password)
	return cast_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_properties({
		["com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.projectPath"] = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_project_path;
		["com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.scheduleFrequency"] = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_schedule_frequency;
		["com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.pingTimeout"] = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_ping_timeout;
		["com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.recipients"] = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_recipients;
		["com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpserver"] = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpserver;
		["com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.smtpport"] = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_smtpport;
		["com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.usetls"] = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_usetls;
		["com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.username"] = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_username;
		["com.adobe.cq.screens.monitoring.impl.ScreensMonitoringServiceImpl.password"] = com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_password;
	})
end

return {
	cast = cast_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_properties;
	new = new_com_adobe_cq_screens_monitoring_impl_screens_monitoring_service_impl_properties;
}