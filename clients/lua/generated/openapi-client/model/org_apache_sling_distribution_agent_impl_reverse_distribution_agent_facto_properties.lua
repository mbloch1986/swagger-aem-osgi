--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_sling_distribution_agent_impl_reverse_distribution_agent_facto_properties class
local org_apache_sling_distribution_agent_impl_reverse_distribution_agent_facto_properties = {}
local org_apache_sling_distribution_agent_impl_reverse_distribution_agent_facto_properties_mt = {
	__name = "org_apache_sling_distribution_agent_impl_reverse_distribution_agent_facto_properties";
	__index = org_apache_sling_distribution_agent_impl_reverse_distribution_agent_facto_properties;
}

local function cast_org_apache_sling_distribution_agent_impl_reverse_distribution_agent_facto_properties(t)
	return setmetatable(t, org_apache_sling_distribution_agent_impl_reverse_distribution_agent_facto_properties_mt)
end

local function new_org_apache_sling_distribution_agent_impl_reverse_distribution_agent_facto_properties(name, title, details, enabled, service_name, log_level, queue_processing_enabled, package_exporter_endpoints, pull_items, http_conn_timeout, request_authorization_strategy_target, transport_secret_provider_target, package_builder_target, triggers_target)
	return cast_org_apache_sling_distribution_agent_impl_reverse_distribution_agent_facto_properties({
		["name"] = name;
		["title"] = title;
		["details"] = details;
		["enabled"] = enabled;
		["serviceName"] = service_name;
		["log.level"] = log_level;
		["queue.processing.enabled"] = queue_processing_enabled;
		["packageExporter.endpoints"] = package_exporter_endpoints;
		["pull.items"] = pull_items;
		["http.conn.timeout"] = http_conn_timeout;
		["requestAuthorizationStrategy.target"] = request_authorization_strategy_target;
		["transportSecretProvider.target"] = transport_secret_provider_target;
		["packageBuilder.target"] = package_builder_target;
		["triggers.target"] = triggers_target;
	})
end

return {
	cast = cast_org_apache_sling_distribution_agent_impl_reverse_distribution_agent_facto_properties;
	new = new_org_apache_sling_distribution_agent_impl_reverse_distribution_agent_facto_properties;
}
