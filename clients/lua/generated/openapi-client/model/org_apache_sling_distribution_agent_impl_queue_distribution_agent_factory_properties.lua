--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_sling_distribution_agent_impl_queue_distribution_agent_factory_properties class
local org_apache_sling_distribution_agent_impl_queue_distribution_agent_factory_properties = {}
local org_apache_sling_distribution_agent_impl_queue_distribution_agent_factory_properties_mt = {
	__name = "org_apache_sling_distribution_agent_impl_queue_distribution_agent_factory_properties";
	__index = org_apache_sling_distribution_agent_impl_queue_distribution_agent_factory_properties;
}

local function cast_org_apache_sling_distribution_agent_impl_queue_distribution_agent_factory_properties(t)
	return setmetatable(t, org_apache_sling_distribution_agent_impl_queue_distribution_agent_factory_properties_mt)
end

local function new_org_apache_sling_distribution_agent_impl_queue_distribution_agent_factory_properties(name, title, details, enabled, service_name, log_level, allowed_roots, request_authorization_strategy_target, queue_provider_factory_target, package_builder_target, triggers_target, priority_queues)
	return cast_org_apache_sling_distribution_agent_impl_queue_distribution_agent_factory_properties({
		["name"] = name;
		["title"] = title;
		["details"] = details;
		["enabled"] = enabled;
		["serviceName"] = service_name;
		["log.level"] = log_level;
		["allowed.roots"] = allowed_roots;
		["requestAuthorizationStrategy.target"] = request_authorization_strategy_target;
		["queueProviderFactory.target"] = queue_provider_factory_target;
		["packageBuilder.target"] = package_builder_target;
		["triggers.target"] = triggers_target;
		["priorityQueues"] = priority_queues;
	})
end

return {
	cast = cast_org_apache_sling_distribution_agent_impl_queue_distribution_agent_factory_properties;
	new = new_org_apache_sling_distribution_agent_impl_queue_distribution_agent_factory_properties;
}
