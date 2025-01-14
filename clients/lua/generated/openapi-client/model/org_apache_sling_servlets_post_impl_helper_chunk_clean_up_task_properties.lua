--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_sling_servlets_post_impl_helper_chunk_clean_up_task_properties class
local org_apache_sling_servlets_post_impl_helper_chunk_clean_up_task_properties = {}
local org_apache_sling_servlets_post_impl_helper_chunk_clean_up_task_properties_mt = {
	__name = "org_apache_sling_servlets_post_impl_helper_chunk_clean_up_task_properties";
	__index = org_apache_sling_servlets_post_impl_helper_chunk_clean_up_task_properties;
}

local function cast_org_apache_sling_servlets_post_impl_helper_chunk_clean_up_task_properties(t)
	return setmetatable(t, org_apache_sling_servlets_post_impl_helper_chunk_clean_up_task_properties_mt)
end

local function new_org_apache_sling_servlets_post_impl_helper_chunk_clean_up_task_properties(scheduler_expression, scheduler_concurrent, chunk_cleanup_age)
	return cast_org_apache_sling_servlets_post_impl_helper_chunk_clean_up_task_properties({
		["scheduler.expression"] = scheduler_expression;
		["scheduler.concurrent"] = scheduler_concurrent;
		["chunk.cleanup.age"] = chunk_cleanup_age;
	})
end

return {
	cast = cast_org_apache_sling_servlets_post_impl_helper_chunk_clean_up_task_properties;
	new = new_org_apache_sling_servlets_post_impl_helper_chunk_clean_up_task_properties;
}
