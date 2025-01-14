--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_confi_properties class
local org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_confi_properties = {}
local org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_confi_properties_mt = {
	__name = "org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_confi_properties";
	__index = org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_confi_properties;
}

local function cast_org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_confi_properties(t)
	return setmetatable(t, org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_confi_properties_mt)
end

local function new_org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_confi_properties(cug_supported_paths, cug_enabled, configuration_ranking)
	return cast_org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_confi_properties({
		["cugSupportedPaths"] = cug_supported_paths;
		["cugEnabled"] = cug_enabled;
		["configurationRanking"] = configuration_ranking;
	})
end

return {
	cast = cast_org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_confi_properties;
	new = new_org_apache_jackrabbit_oak_spi_security_authorization_cug_impl_cug_confi_properties;
}
