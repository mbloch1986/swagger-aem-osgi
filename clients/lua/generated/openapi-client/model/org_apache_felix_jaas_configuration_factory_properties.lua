--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_felix_jaas_configuration_factory_properties class
local org_apache_felix_jaas_configuration_factory_properties = {}
local org_apache_felix_jaas_configuration_factory_properties_mt = {
	__name = "org_apache_felix_jaas_configuration_factory_properties";
	__index = org_apache_felix_jaas_configuration_factory_properties;
}

local function cast_org_apache_felix_jaas_configuration_factory_properties(t)
	return setmetatable(t, org_apache_felix_jaas_configuration_factory_properties_mt)
end

local function new_org_apache_felix_jaas_configuration_factory_properties(jaas_control_flag, jaas_ranking, jaas_realm_name, jaas_classname, jaas_options)
	return cast_org_apache_felix_jaas_configuration_factory_properties({
		["jaas.controlFlag"] = jaas_control_flag;
		["jaas.ranking"] = jaas_ranking;
		["jaas.realmName"] = jaas_realm_name;
		["jaas.classname"] = jaas_classname;
		["jaas.options"] = jaas_options;
	})
end

return {
	cast = cast_org_apache_felix_jaas_configuration_factory_properties;
	new = new_org_apache_felix_jaas_configuration_factory_properties;
}
