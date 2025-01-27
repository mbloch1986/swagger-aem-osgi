--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_sling_jcr_webdav_impl_servlets_simple_web_dav_servlet_properties class
local org_apache_sling_jcr_webdav_impl_servlets_simple_web_dav_servlet_properties = {}
local org_apache_sling_jcr_webdav_impl_servlets_simple_web_dav_servlet_properties_mt = {
	__name = "org_apache_sling_jcr_webdav_impl_servlets_simple_web_dav_servlet_properties";
	__index = org_apache_sling_jcr_webdav_impl_servlets_simple_web_dav_servlet_properties;
}

local function cast_org_apache_sling_jcr_webdav_impl_servlets_simple_web_dav_servlet_properties(t)
	return setmetatable(t, org_apache_sling_jcr_webdav_impl_servlets_simple_web_dav_servlet_properties_mt)
end

local function new_org_apache_sling_jcr_webdav_impl_servlets_simple_web_dav_servlet_properties(dav_root, dav_create_absolute_uri, dav_realm, collection_types, filter_prefixes, filter_types, filter_uris, type_collections, type_noncollections, type_content)
	return cast_org_apache_sling_jcr_webdav_impl_servlets_simple_web_dav_servlet_properties({
		["dav.root"] = dav_root;
		["dav.create-absolute-uri"] = dav_create_absolute_uri;
		["dav.realm"] = dav_realm;
		["collection.types"] = collection_types;
		["filter.prefixes"] = filter_prefixes;
		["filter.types"] = filter_types;
		["filter.uris"] = filter_uris;
		["type.collections"] = type_collections;
		["type.noncollections"] = type_noncollections;
		["type.content"] = type_content;
	})
end

return {
	cast = cast_org_apache_sling_jcr_webdav_impl_servlets_simple_web_dav_servlet_properties;
	new = new_org_apache_sling_jcr_webdav_impl_servlets_simple_web_dav_servlet_properties;
}
