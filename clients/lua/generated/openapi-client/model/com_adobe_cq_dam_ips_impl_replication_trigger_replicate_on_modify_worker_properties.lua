--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_cq_dam_ips_impl_replication_trigger_replicate_on_modify_worker_properties class
local com_adobe_cq_dam_ips_impl_replication_trigger_replicate_on_modify_worker_properties = {}
local com_adobe_cq_dam_ips_impl_replication_trigger_replicate_on_modify_worker_properties_mt = {
	__name = "com_adobe_cq_dam_ips_impl_replication_trigger_replicate_on_modify_worker_properties";
	__index = com_adobe_cq_dam_ips_impl_replication_trigger_replicate_on_modify_worker_properties;
}

local function cast_com_adobe_cq_dam_ips_impl_replication_trigger_replicate_on_modify_worker_properties(t)
	return setmetatable(t, com_adobe_cq_dam_ips_impl_replication_trigger_replicate_on_modify_worker_properties_mt)
end

local function new_com_adobe_cq_dam_ips_impl_replication_trigger_replicate_on_modify_worker_properties(dmreplicateonmodify_enabled, dmreplicateonmodify_forcesyncdeletes)
	return cast_com_adobe_cq_dam_ips_impl_replication_trigger_replicate_on_modify_worker_properties({
		["dmreplicateonmodify.enabled"] = dmreplicateonmodify_enabled;
		["dmreplicateonmodify.forcesyncdeletes"] = dmreplicateonmodify_forcesyncdeletes;
	})
end

return {
	cast = cast_com_adobe_cq_dam_ips_impl_replication_trigger_replicate_on_modify_worker_properties;
	new = new_com_adobe_cq_dam_ips_impl_replication_trigger_replicate_on_modify_worker_properties;
}
