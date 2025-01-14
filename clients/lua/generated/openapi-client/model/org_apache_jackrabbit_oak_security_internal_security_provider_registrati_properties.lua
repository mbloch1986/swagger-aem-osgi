--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_jackrabbit_oak_security_internal_security_provider_registrati_properties class
local org_apache_jackrabbit_oak_security_internal_security_provider_registrati_properties = {}
local org_apache_jackrabbit_oak_security_internal_security_provider_registrati_properties_mt = {
	__name = "org_apache_jackrabbit_oak_security_internal_security_provider_registrati_properties";
	__index = org_apache_jackrabbit_oak_security_internal_security_provider_registrati_properties;
}

local function cast_org_apache_jackrabbit_oak_security_internal_security_provider_registrati_properties(t)
	return setmetatable(t, org_apache_jackrabbit_oak_security_internal_security_provider_registrati_properties_mt)
end

local function new_org_apache_jackrabbit_oak_security_internal_security_provider_registrati_properties(required_service_pids, authorization_composition_type)
	return cast_org_apache_jackrabbit_oak_security_internal_security_provider_registrati_properties({
		["requiredServicePids"] = required_service_pids;
		["authorizationCompositionType"] = authorization_composition_type;
	})
end

return {
	cast = cast_org_apache_jackrabbit_oak_security_internal_security_provider_registrati_properties;
	new = new_org_apache_jackrabbit_oak_security_internal_security_provider_registrati_properties;
}
