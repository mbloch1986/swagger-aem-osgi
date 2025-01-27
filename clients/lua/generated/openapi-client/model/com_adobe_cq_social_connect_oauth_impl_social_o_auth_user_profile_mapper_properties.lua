--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_cq_social_connect_oauth_impl_social_o_auth_user_profile_mapper_properties class
local com_adobe_cq_social_connect_oauth_impl_social_o_auth_user_profile_mapper_properties = {}
local com_adobe_cq_social_connect_oauth_impl_social_o_auth_user_profile_mapper_properties_mt = {
	__name = "com_adobe_cq_social_connect_oauth_impl_social_o_auth_user_profile_mapper_properties";
	__index = com_adobe_cq_social_connect_oauth_impl_social_o_auth_user_profile_mapper_properties;
}

local function cast_com_adobe_cq_social_connect_oauth_impl_social_o_auth_user_profile_mapper_properties(t)
	return setmetatable(t, com_adobe_cq_social_connect_oauth_impl_social_o_auth_user_profile_mapper_properties_mt)
end

local function new_com_adobe_cq_social_connect_oauth_impl_social_o_auth_user_profile_mapper_properties(facebook, twitter, provider_config_user_folder)
	return cast_com_adobe_cq_social_connect_oauth_impl_social_o_auth_user_profile_mapper_properties({
		["facebook"] = facebook;
		["twitter"] = twitter;
		["provider.config.user.folder"] = provider_config_user_folder;
	})
end

return {
	cast = cast_com_adobe_cq_social_connect_oauth_impl_social_o_auth_user_profile_mapper_properties;
	new = new_com_adobe_cq_social_connect_oauth_impl_social_o_auth_user_profile_mapper_properties;
}
