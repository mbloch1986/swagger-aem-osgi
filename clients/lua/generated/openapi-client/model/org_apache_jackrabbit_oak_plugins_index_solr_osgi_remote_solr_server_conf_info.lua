--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_jackrabbit_oak_plugins_index_solr_osgi_remote_solr_server_conf_info class
local org_apache_jackrabbit_oak_plugins_index_solr_osgi_remote_solr_server_conf_info = {}
local org_apache_jackrabbit_oak_plugins_index_solr_osgi_remote_solr_server_conf_info_mt = {
	__name = "org_apache_jackrabbit_oak_plugins_index_solr_osgi_remote_solr_server_conf_info";
	__index = org_apache_jackrabbit_oak_plugins_index_solr_osgi_remote_solr_server_conf_info;
}

local function cast_org_apache_jackrabbit_oak_plugins_index_solr_osgi_remote_solr_server_conf_info(t)
	return setmetatable(t, org_apache_jackrabbit_oak_plugins_index_solr_osgi_remote_solr_server_conf_info_mt)
end

local function new_org_apache_jackrabbit_oak_plugins_index_solr_osgi_remote_solr_server_conf_info(pid, title, description, properties)
	return cast_org_apache_jackrabbit_oak_plugins_index_solr_osgi_remote_solr_server_conf_info({
		["pid"] = pid;
		["title"] = title;
		["description"] = description;
		["properties"] = properties;
	})
end

return {
	cast = cast_org_apache_jackrabbit_oak_plugins_index_solr_osgi_remote_solr_server_conf_info;
	new = new_org_apache_jackrabbit_oak_plugins_index_solr_osgi_remote_solr_server_conf_info;
}
