--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_jackrabbit_oak_security_authorization_authorization_configur_properties class
local org_apache_jackrabbit_oak_security_authorization_authorization_configur_properties = {}
local org_apache_jackrabbit_oak_security_authorization_authorization_configur_properties_mt = {
	__name = "org_apache_jackrabbit_oak_security_authorization_authorization_configur_properties";
	__index = org_apache_jackrabbit_oak_security_authorization_authorization_configur_properties;
}

local function cast_org_apache_jackrabbit_oak_security_authorization_authorization_configur_properties(t)
	return setmetatable(t, org_apache_jackrabbit_oak_security_authorization_authorization_configur_properties_mt)
end

local function new_org_apache_jackrabbit_oak_security_authorization_authorization_configur_properties(permissions_jr2, import_behavior, read_paths, administrative_principals, configuration_ranking)
	return cast_org_apache_jackrabbit_oak_security_authorization_authorization_configur_properties({
		["permissionsJr2"] = permissions_jr2;
		["importBehavior"] = import_behavior;
		["readPaths"] = read_paths;
		["administrativePrincipals"] = administrative_principals;
		["configurationRanking"] = configuration_ranking;
	})
end

return {
	cast = cast_org_apache_jackrabbit_oak_security_authorization_authorization_configur_properties;
	new = new_org_apache_jackrabbit_oak_security_authorization_authorization_configur_properties;
}
