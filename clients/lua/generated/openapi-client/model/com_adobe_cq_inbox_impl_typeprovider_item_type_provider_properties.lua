--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_cq_inbox_impl_typeprovider_item_type_provider_properties class
local com_adobe_cq_inbox_impl_typeprovider_item_type_provider_properties = {}
local com_adobe_cq_inbox_impl_typeprovider_item_type_provider_properties_mt = {
	__name = "com_adobe_cq_inbox_impl_typeprovider_item_type_provider_properties";
	__index = com_adobe_cq_inbox_impl_typeprovider_item_type_provider_properties;
}

local function cast_com_adobe_cq_inbox_impl_typeprovider_item_type_provider_properties(t)
	return setmetatable(t, com_adobe_cq_inbox_impl_typeprovider_item_type_provider_properties_mt)
end

local function new_com_adobe_cq_inbox_impl_typeprovider_item_type_provider_properties(inbox_impl_typeprovider_registrypaths, inbox_impl_typeprovider_legacypaths, inbox_impl_typeprovider_defaulturl_failureitem, inbox_impl_typeprovider_defaulturl_workitem, inbox_impl_typeprovider_defaulturl_task)
	return cast_com_adobe_cq_inbox_impl_typeprovider_item_type_provider_properties({
		["inbox.impl.typeprovider.registrypaths"] = inbox_impl_typeprovider_registrypaths;
		["inbox.impl.typeprovider.legacypaths"] = inbox_impl_typeprovider_legacypaths;
		["inbox.impl.typeprovider.defaulturl.failureitem"] = inbox_impl_typeprovider_defaulturl_failureitem;
		["inbox.impl.typeprovider.defaulturl.workitem"] = inbox_impl_typeprovider_defaulturl_workitem;
		["inbox.impl.typeprovider.defaulturl.task"] = inbox_impl_typeprovider_defaulturl_task;
	})
end

return {
	cast = cast_com_adobe_cq_inbox_impl_typeprovider_item_type_provider_properties;
	new = new_com_adobe_cq_inbox_impl_typeprovider_item_type_provider_properties;
}
