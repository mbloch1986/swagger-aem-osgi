--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_felix_eventadmin_impl_event_admin_properties class
local org_apache_felix_eventadmin_impl_event_admin_properties = {}
local org_apache_felix_eventadmin_impl_event_admin_properties_mt = {
	__name = "org_apache_felix_eventadmin_impl_event_admin_properties";
	__index = org_apache_felix_eventadmin_impl_event_admin_properties;
}

local function cast_org_apache_felix_eventadmin_impl_event_admin_properties(t)
	return setmetatable(t, org_apache_felix_eventadmin_impl_event_admin_properties_mt)
end

local function new_org_apache_felix_eventadmin_impl_event_admin_properties(org_apache_felix_eventadmin_thread_pool_size, org_apache_felix_eventadmin_async_to_sync_thread_ratio, org_apache_felix_eventadmin_timeout, org_apache_felix_eventadmin_require_topic, org_apache_felix_eventadmin_ignore_timeout, org_apache_felix_eventadmin_ignore_topic)
	return cast_org_apache_felix_eventadmin_impl_event_admin_properties({
		["org.apache.felix.eventadmin.ThreadPoolSize"] = org_apache_felix_eventadmin_thread_pool_size;
		["org.apache.felix.eventadmin.AsyncToSyncThreadRatio"] = org_apache_felix_eventadmin_async_to_sync_thread_ratio;
		["org.apache.felix.eventadmin.Timeout"] = org_apache_felix_eventadmin_timeout;
		["org.apache.felix.eventadmin.RequireTopic"] = org_apache_felix_eventadmin_require_topic;
		["org.apache.felix.eventadmin.IgnoreTimeout"] = org_apache_felix_eventadmin_ignore_timeout;
		["org.apache.felix.eventadmin.IgnoreTopic"] = org_apache_felix_eventadmin_ignore_topic;
	})
end

return {
	cast = cast_org_apache_felix_eventadmin_impl_event_admin_properties;
	new = new_org_apache_felix_eventadmin_impl_event_admin_properties;
}