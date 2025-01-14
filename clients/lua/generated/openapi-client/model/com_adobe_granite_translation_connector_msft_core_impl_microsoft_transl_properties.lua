--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_granite_translation_connector_msft_core_impl_microsoft_transl_properties class
local com_adobe_granite_translation_connector_msft_core_impl_microsoft_transl_properties = {}
local com_adobe_granite_translation_connector_msft_core_impl_microsoft_transl_properties_mt = {
	__name = "com_adobe_granite_translation_connector_msft_core_impl_microsoft_transl_properties";
	__index = com_adobe_granite_translation_connector_msft_core_impl_microsoft_transl_properties;
}

local function cast_com_adobe_granite_translation_connector_msft_core_impl_microsoft_transl_properties(t)
	return setmetatable(t, com_adobe_granite_translation_connector_msft_core_impl_microsoft_transl_properties_mt)
end

local function new_com_adobe_granite_translation_connector_msft_core_impl_microsoft_transl_properties(translation_factory, default_connector_label, default_connector_attribution, default_connector_workspace_id, default_connector_subscription_key, language_map_location, category_map_location, retry_attempts, timeout_count)
	return cast_com_adobe_granite_translation_connector_msft_core_impl_microsoft_transl_properties({
		["translationFactory"] = translation_factory;
		["defaultConnectorLabel"] = default_connector_label;
		["defaultConnectorAttribution"] = default_connector_attribution;
		["defaultConnectorWorkspaceId"] = default_connector_workspace_id;
		["defaultConnectorSubscriptionKey"] = default_connector_subscription_key;
		["languageMapLocation"] = language_map_location;
		["categoryMapLocation"] = category_map_location;
		["retryAttempts"] = retry_attempts;
		["timeoutCount"] = timeout_count;
	})
end

return {
	cast = cast_com_adobe_granite_translation_connector_msft_core_impl_microsoft_transl_properties;
	new = new_com_adobe_granite_translation_connector_msft_core_impl_microsoft_transl_properties;
}
