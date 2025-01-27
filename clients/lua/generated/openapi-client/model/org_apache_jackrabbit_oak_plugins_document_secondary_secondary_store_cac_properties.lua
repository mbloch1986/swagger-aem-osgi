--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_jackrabbit_oak_plugins_document_secondary_secondary_store_cac_properties class
local org_apache_jackrabbit_oak_plugins_document_secondary_secondary_store_cac_properties = {}
local org_apache_jackrabbit_oak_plugins_document_secondary_secondary_store_cac_properties_mt = {
	__name = "org_apache_jackrabbit_oak_plugins_document_secondary_secondary_store_cac_properties";
	__index = org_apache_jackrabbit_oak_plugins_document_secondary_secondary_store_cac_properties;
}

local function cast_org_apache_jackrabbit_oak_plugins_document_secondary_secondary_store_cac_properties(t)
	return setmetatable(t, org_apache_jackrabbit_oak_plugins_document_secondary_secondary_store_cac_properties_mt)
end

local function new_org_apache_jackrabbit_oak_plugins_document_secondary_secondary_store_cac_properties(included_paths, enable_async_observer, observer_queue_size)
	return cast_org_apache_jackrabbit_oak_plugins_document_secondary_secondary_store_cac_properties({
		["includedPaths"] = included_paths;
		["enableAsyncObserver"] = enable_async_observer;
		["observerQueueSize"] = observer_queue_size;
	})
end

return {
	cast = cast_org_apache_jackrabbit_oak_plugins_document_secondary_secondary_store_cac_properties;
	new = new_org_apache_jackrabbit_oak_plugins_document_secondary_secondary_store_cac_properties;
}
