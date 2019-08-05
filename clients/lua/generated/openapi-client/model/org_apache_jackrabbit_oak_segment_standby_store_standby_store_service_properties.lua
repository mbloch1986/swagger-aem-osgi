--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_jackrabbit_oak_segment_standby_store_standby_store_service_properties class
local org_apache_jackrabbit_oak_segment_standby_store_standby_store_service_properties = {}
local org_apache_jackrabbit_oak_segment_standby_store_standby_store_service_properties_mt = {
	__name = "org_apache_jackrabbit_oak_segment_standby_store_standby_store_service_properties";
	__index = org_apache_jackrabbit_oak_segment_standby_store_standby_store_service_properties;
}

local function cast_org_apache_jackrabbit_oak_segment_standby_store_standby_store_service_properties(t)
	return setmetatable(t, org_apache_jackrabbit_oak_segment_standby_store_standby_store_service_properties_mt)
end

local function new_org_apache_jackrabbit_oak_segment_standby_store_standby_store_service_properties(org_apache_sling_installer_configuration_persist, mode, port, primary_host, interval, primary_allowed_client_ip_ranges, secure, standby_readtimeout, standby_autoclean)
	return cast_org_apache_jackrabbit_oak_segment_standby_store_standby_store_service_properties({
		["org.apache.sling.installer.configuration.persist"] = org_apache_sling_installer_configuration_persist;
		["mode"] = mode;
		["port"] = port;
		["primary.host"] = primary_host;
		["interval"] = interval;
		["primary.allowed-client-ip-ranges"] = primary_allowed_client_ip_ranges;
		["secure"] = secure;
		["standby.readtimeout"] = standby_readtimeout;
		["standby.autoclean"] = standby_autoclean;
	})
end

return {
	cast = cast_org_apache_jackrabbit_oak_segment_standby_store_standby_store_service_properties;
	new = new_org_apache_jackrabbit_oak_segment_standby_store_standby_store_service_properties;
}