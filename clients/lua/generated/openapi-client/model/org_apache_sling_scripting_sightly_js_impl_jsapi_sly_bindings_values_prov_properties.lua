--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_sling_scripting_sightly_js_impl_jsapi_sly_bindings_values_prov_properties class
local org_apache_sling_scripting_sightly_js_impl_jsapi_sly_bindings_values_prov_properties = {}
local org_apache_sling_scripting_sightly_js_impl_jsapi_sly_bindings_values_prov_properties_mt = {
	__name = "org_apache_sling_scripting_sightly_js_impl_jsapi_sly_bindings_values_prov_properties";
	__index = org_apache_sling_scripting_sightly_js_impl_jsapi_sly_bindings_values_prov_properties;
}

local function cast_org_apache_sling_scripting_sightly_js_impl_jsapi_sly_bindings_values_prov_properties(t)
	return setmetatable(t, org_apache_sling_scripting_sightly_js_impl_jsapi_sly_bindings_values_prov_properties_mt)
end

local function new_org_apache_sling_scripting_sightly_js_impl_jsapi_sly_bindings_values_prov_properties(org_apache_sling_scripting_sightly_js_bindings)
	return cast_org_apache_sling_scripting_sightly_js_impl_jsapi_sly_bindings_values_prov_properties({
		["org.apache.sling.scripting.sightly.js.bindings"] = org_apache_sling_scripting_sightly_js_bindings;
	})
end

return {
	cast = cast_org_apache_sling_scripting_sightly_js_impl_jsapi_sly_bindings_values_prov_properties;
	new = new_org_apache_sling_scripting_sightly_js_impl_jsapi_sly_bindings_values_prov_properties;
}
