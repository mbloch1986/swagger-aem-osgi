--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_aem_transaction_core_impl_transaction_recorder_properties class
local com_adobe_aem_transaction_core_impl_transaction_recorder_properties = {}
local com_adobe_aem_transaction_core_impl_transaction_recorder_properties_mt = {
	__name = "com_adobe_aem_transaction_core_impl_transaction_recorder_properties";
	__index = com_adobe_aem_transaction_core_impl_transaction_recorder_properties;
}

local function cast_com_adobe_aem_transaction_core_impl_transaction_recorder_properties(t)
	return setmetatable(t, com_adobe_aem_transaction_core_impl_transaction_recorder_properties_mt)
end

local function new_com_adobe_aem_transaction_core_impl_transaction_recorder_properties(is_transaction_recording_enabled)
	return cast_com_adobe_aem_transaction_core_impl_transaction_recorder_properties({
		["isTransactionRecordingEnabled"] = is_transaction_recording_enabled;
	})
end

return {
	cast = cast_com_adobe_aem_transaction_core_impl_transaction_recorder_properties;
	new = new_com_adobe_aem_transaction_core_impl_transaction_recorder_properties;
}
