--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_sling_jcr_webdav_impl_handler_default_handler_service_properties class
local org_apache_sling_jcr_webdav_impl_handler_default_handler_service_properties = {}
local org_apache_sling_jcr_webdav_impl_handler_default_handler_service_properties_mt = {
	__name = "org_apache_sling_jcr_webdav_impl_handler_default_handler_service_properties";
	__index = org_apache_sling_jcr_webdav_impl_handler_default_handler_service_properties;
}

local function cast_org_apache_sling_jcr_webdav_impl_handler_default_handler_service_properties(t)
	return setmetatable(t, org_apache_sling_jcr_webdav_impl_handler_default_handler_service_properties_mt)
end

local function new_org_apache_sling_jcr_webdav_impl_handler_default_handler_service_properties(service_ranking, type_collections, type_noncollections, type_content)
	return cast_org_apache_sling_jcr_webdav_impl_handler_default_handler_service_properties({
		["service.ranking"] = service_ranking;
		["type.collections"] = type_collections;
		["type.noncollections"] = type_noncollections;
		["type.content"] = type_content;
	})
end

return {
	cast = cast_org_apache_sling_jcr_webdav_impl_handler_default_handler_service_properties;
	new = new_org_apache_sling_jcr_webdav_impl_handler_default_handler_service_properties;
}