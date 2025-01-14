--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_granite_distribution_core_impl_crypto_distribution_transport_se_properties class
local com_adobe_granite_distribution_core_impl_crypto_distribution_transport_se_properties = {}
local com_adobe_granite_distribution_core_impl_crypto_distribution_transport_se_properties_mt = {
	__name = "com_adobe_granite_distribution_core_impl_crypto_distribution_transport_se_properties";
	__index = com_adobe_granite_distribution_core_impl_crypto_distribution_transport_se_properties;
}

local function cast_com_adobe_granite_distribution_core_impl_crypto_distribution_transport_se_properties(t)
	return setmetatable(t, com_adobe_granite_distribution_core_impl_crypto_distribution_transport_se_properties_mt)
end

local function new_com_adobe_granite_distribution_core_impl_crypto_distribution_transport_se_properties(name, username, encrypted_password)
	return cast_com_adobe_granite_distribution_core_impl_crypto_distribution_transport_se_properties({
		["name"] = name;
		["username"] = username;
		["encryptedPassword"] = encrypted_password;
	})
end

return {
	cast = cast_com_adobe_granite_distribution_core_impl_crypto_distribution_transport_se_properties;
	new = new_com_adobe_granite_distribution_core_impl_crypto_distribution_transport_se_properties;
}
