--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_granite_workflow_core_workflow_config_properties class
local com_adobe_granite_workflow_core_workflow_config_properties = {}
local com_adobe_granite_workflow_core_workflow_config_properties_mt = {
	__name = "com_adobe_granite_workflow_core_workflow_config_properties";
	__index = com_adobe_granite_workflow_core_workflow_config_properties;
}

local function cast_com_adobe_granite_workflow_core_workflow_config_properties(t)
	return setmetatable(t, com_adobe_granite_workflow_core_workflow_config_properties_mt)
end

local function new_com_adobe_granite_workflow_core_workflow_config_properties(cq_workflow_config_workflow_packages_root_path, cq_workflow_config_workflow_process_legacy_mode, cq_workflow_config_allow_locking)
	return cast_com_adobe_granite_workflow_core_workflow_config_properties({
		["cq.workflow.config.workflow.packages.root.path"] = cq_workflow_config_workflow_packages_root_path;
		["cq.workflow.config.workflow.process.legacy.mode"] = cq_workflow_config_workflow_process_legacy_mode;
		["cq.workflow.config.allow.locking"] = cq_workflow_config_allow_locking;
	})
end

return {
	cast = cast_com_adobe_granite_workflow_core_workflow_config_properties;
	new = new_com_adobe_granite_workflow_core_workflow_config_properties;
}
