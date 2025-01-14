--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_dam_core_impl_missing_metadata_notification_job_properties class
local com_day_cq_dam_core_impl_missing_metadata_notification_job_properties = {}
local com_day_cq_dam_core_impl_missing_metadata_notification_job_properties_mt = {
	__name = "com_day_cq_dam_core_impl_missing_metadata_notification_job_properties";
	__index = com_day_cq_dam_core_impl_missing_metadata_notification_job_properties;
}

local function cast_com_day_cq_dam_core_impl_missing_metadata_notification_job_properties(t)
	return setmetatable(t, com_day_cq_dam_core_impl_missing_metadata_notification_job_properties_mt)
end

local function new_com_day_cq_dam_core_impl_missing_metadata_notification_job_properties(cq_dam_missingmetadata_notification_scheduler_istimebased, cq_dam_missingmetadata_notification_scheduler_timebased_rule, cq_dam_missingmetadata_notification_scheduler_period_rule, cq_dam_missingmetadata_notification_recipient)
	return cast_com_day_cq_dam_core_impl_missing_metadata_notification_job_properties({
		["cq.dam.missingmetadata.notification.scheduler.istimebased"] = cq_dam_missingmetadata_notification_scheduler_istimebased;
		["cq.dam.missingmetadata.notification.scheduler.timebased.rule"] = cq_dam_missingmetadata_notification_scheduler_timebased_rule;
		["cq.dam.missingmetadata.notification.scheduler.period.rule"] = cq_dam_missingmetadata_notification_scheduler_period_rule;
		["cq.dam.missingmetadata.notification.recipient"] = cq_dam_missingmetadata_notification_recipient;
	})
end

return {
	cast = cast_com_day_cq_dam_core_impl_missing_metadata_notification_job_properties;
	new = new_com_day_cq_dam_core_impl_missing_metadata_notification_job_properties;
}
