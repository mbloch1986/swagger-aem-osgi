--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_rewriter_linkchecker_impl_link_checker_task_properties class
local com_day_cq_rewriter_linkchecker_impl_link_checker_task_properties = {}
local com_day_cq_rewriter_linkchecker_impl_link_checker_task_properties_mt = {
	__name = "com_day_cq_rewriter_linkchecker_impl_link_checker_task_properties";
	__index = com_day_cq_rewriter_linkchecker_impl_link_checker_task_properties;
}

local function cast_com_day_cq_rewriter_linkchecker_impl_link_checker_task_properties(t)
	return setmetatable(t, com_day_cq_rewriter_linkchecker_impl_link_checker_task_properties_mt)
end

local function new_com_day_cq_rewriter_linkchecker_impl_link_checker_task_properties(scheduler_period, scheduler_concurrent, good_link_test_interval, bad_link_test_interval, link_unused_interval, connection_timeout)
	return cast_com_day_cq_rewriter_linkchecker_impl_link_checker_task_properties({
		["scheduler.period"] = scheduler_period;
		["scheduler.concurrent"] = scheduler_concurrent;
		["good_link_test_interval"] = good_link_test_interval;
		["bad_link_test_interval"] = bad_link_test_interval;
		["link_unused_interval"] = link_unused_interval;
		["connection.timeout"] = connection_timeout;
	})
end

return {
	cast = cast_com_day_cq_rewriter_linkchecker_impl_link_checker_task_properties;
	new = new_com_day_cq_rewriter_linkchecker_impl_link_checker_task_properties;
}
