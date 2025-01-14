--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_cq_upgrades_cleanup_impl_upgrade_content_cleanup_properties class
local com_adobe_cq_upgrades_cleanup_impl_upgrade_content_cleanup_properties = {}
local com_adobe_cq_upgrades_cleanup_impl_upgrade_content_cleanup_properties_mt = {
	__name = "com_adobe_cq_upgrades_cleanup_impl_upgrade_content_cleanup_properties";
	__index = com_adobe_cq_upgrades_cleanup_impl_upgrade_content_cleanup_properties;
}

local function cast_com_adobe_cq_upgrades_cleanup_impl_upgrade_content_cleanup_properties(t)
	return setmetatable(t, com_adobe_cq_upgrades_cleanup_impl_upgrade_content_cleanup_properties_mt)
end

local function new_com_adobe_cq_upgrades_cleanup_impl_upgrade_content_cleanup_properties(delete_path_regexps, delete_sql2_query)
	return cast_com_adobe_cq_upgrades_cleanup_impl_upgrade_content_cleanup_properties({
		["delete.path.regexps"] = delete_path_regexps;
		["delete.sql2.query"] = delete_sql2_query;
	})
end

return {
	cast = cast_com_adobe_cq_upgrades_cleanup_impl_upgrade_content_cleanup_properties;
	new = new_com_adobe_cq_upgrades_cleanup_impl_upgrade_content_cleanup_properties;
}
