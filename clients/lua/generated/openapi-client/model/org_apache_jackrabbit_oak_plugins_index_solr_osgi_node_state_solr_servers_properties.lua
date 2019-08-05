--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_jackrabbit_oak_plugins_index_solr_osgi_node_state_solr_servers_properties class
local org_apache_jackrabbit_oak_plugins_index_solr_osgi_node_state_solr_servers_properties = {}
local org_apache_jackrabbit_oak_plugins_index_solr_osgi_node_state_solr_servers_properties_mt = {
	__name = "org_apache_jackrabbit_oak_plugins_index_solr_osgi_node_state_solr_servers_properties";
	__index = org_apache_jackrabbit_oak_plugins_index_solr_osgi_node_state_solr_servers_properties;
}

local function cast_org_apache_jackrabbit_oak_plugins_index_solr_osgi_node_state_solr_servers_properties(t)
	return setmetatable(t, org_apache_jackrabbit_oak_plugins_index_solr_osgi_node_state_solr_servers_properties_mt)
end

local function new_org_apache_jackrabbit_oak_plugins_index_solr_osgi_node_state_solr_servers_properties(enabled)
	return cast_org_apache_jackrabbit_oak_plugins_index_solr_osgi_node_state_solr_servers_properties({
		["enabled"] = enabled;
	})
end

return {
	cast = cast_org_apache_jackrabbit_oak_plugins_index_solr_osgi_node_state_solr_servers_properties;
	new = new_org_apache_jackrabbit_oak_plugins_index_solr_osgi_node_state_solr_servers_properties;
}