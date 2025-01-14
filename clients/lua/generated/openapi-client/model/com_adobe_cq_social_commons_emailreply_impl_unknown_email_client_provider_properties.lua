--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_cq_social_commons_emailreply_impl_unknown_email_client_provider_properties class
local com_adobe_cq_social_commons_emailreply_impl_unknown_email_client_provider_properties = {}
local com_adobe_cq_social_commons_emailreply_impl_unknown_email_client_provider_properties_mt = {
	__name = "com_adobe_cq_social_commons_emailreply_impl_unknown_email_client_provider_properties";
	__index = com_adobe_cq_social_commons_emailreply_impl_unknown_email_client_provider_properties;
}

local function cast_com_adobe_cq_social_commons_emailreply_impl_unknown_email_client_provider_properties(t)
	return setmetatable(t, com_adobe_cq_social_commons_emailreply_impl_unknown_email_client_provider_properties_mt)
end

local function new_com_adobe_cq_social_commons_emailreply_impl_unknown_email_client_provider_properties(reply_email_patterns, priority_order)
	return cast_com_adobe_cq_social_commons_emailreply_impl_unknown_email_client_provider_properties({
		["replyEmailPatterns"] = reply_email_patterns;
		["priorityOrder"] = priority_order;
	})
end

return {
	cast = cast_com_adobe_cq_social_commons_emailreply_impl_unknown_email_client_provider_properties;
	new = new_com_adobe_cq_social_commons_emailreply_impl_unknown_email_client_provider_properties;
}
