--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_granite_taskmanagement_impl_service_task_manager_adapter_factor_properties class
local com_adobe_granite_taskmanagement_impl_service_task_manager_adapter_factor_properties = {}
local com_adobe_granite_taskmanagement_impl_service_task_manager_adapter_factor_properties_mt = {
	__name = "com_adobe_granite_taskmanagement_impl_service_task_manager_adapter_factor_properties";
	__index = com_adobe_granite_taskmanagement_impl_service_task_manager_adapter_factor_properties;
}

local function cast_com_adobe_granite_taskmanagement_impl_service_task_manager_adapter_factor_properties(t)
	return setmetatable(t, com_adobe_granite_taskmanagement_impl_service_task_manager_adapter_factor_properties_mt)
end

local function new_com_adobe_granite_taskmanagement_impl_service_task_manager_adapter_factor_properties(adapter_condition, taskmanager_admingroups)
	return cast_com_adobe_granite_taskmanagement_impl_service_task_manager_adapter_factor_properties({
		["adapter.condition"] = adapter_condition;
		["taskmanager.admingroups"] = taskmanager_admingroups;
	})
end

return {
	cast = cast_com_adobe_granite_taskmanagement_impl_service_task_manager_adapter_factor_properties;
	new = new_com_adobe_granite_taskmanagement_impl_service_task_manager_adapter_factor_properties;
}
