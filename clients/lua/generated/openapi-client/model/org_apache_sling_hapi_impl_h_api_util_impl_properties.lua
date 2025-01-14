--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_sling_hapi_impl_h_api_util_impl_properties class
local org_apache_sling_hapi_impl_h_api_util_impl_properties = {}
local org_apache_sling_hapi_impl_h_api_util_impl_properties_mt = {
	__name = "org_apache_sling_hapi_impl_h_api_util_impl_properties";
	__index = org_apache_sling_hapi_impl_h_api_util_impl_properties;
}

local function cast_org_apache_sling_hapi_impl_h_api_util_impl_properties(t)
	return setmetatable(t, org_apache_sling_hapi_impl_h_api_util_impl_properties_mt)
end

local function new_org_apache_sling_hapi_impl_h_api_util_impl_properties(org_apache_sling_hapi_tools_resourcetype, org_apache_sling_hapi_tools_collectionresourcetype, org_apache_sling_hapi_tools_searchpaths, org_apache_sling_hapi_tools_externalurl, org_apache_sling_hapi_tools_enabled)
	return cast_org_apache_sling_hapi_impl_h_api_util_impl_properties({
		["org.apache.sling.hapi.tools.resourcetype"] = org_apache_sling_hapi_tools_resourcetype;
		["org.apache.sling.hapi.tools.collectionresourcetype"] = org_apache_sling_hapi_tools_collectionresourcetype;
		["org.apache.sling.hapi.tools.searchpaths"] = org_apache_sling_hapi_tools_searchpaths;
		["org.apache.sling.hapi.tools.externalurl"] = org_apache_sling_hapi_tools_externalurl;
		["org.apache.sling.hapi.tools.enabled"] = org_apache_sling_hapi_tools_enabled;
	})
end

return {
	cast = cast_org_apache_sling_hapi_impl_h_api_util_impl_properties;
	new = new_org_apache_sling_hapi_impl_h_api_util_impl_properties;
}
