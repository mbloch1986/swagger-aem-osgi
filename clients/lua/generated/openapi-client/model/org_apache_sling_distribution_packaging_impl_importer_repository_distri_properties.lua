--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_sling_distribution_packaging_impl_importer_repository_distri_properties class
local org_apache_sling_distribution_packaging_impl_importer_repository_distri_properties = {}
local org_apache_sling_distribution_packaging_impl_importer_repository_distri_properties_mt = {
	__name = "org_apache_sling_distribution_packaging_impl_importer_repository_distri_properties";
	__index = org_apache_sling_distribution_packaging_impl_importer_repository_distri_properties;
}

local function cast_org_apache_sling_distribution_packaging_impl_importer_repository_distri_properties(t)
	return setmetatable(t, org_apache_sling_distribution_packaging_impl_importer_repository_distri_properties_mt)
end

local function new_org_apache_sling_distribution_packaging_impl_importer_repository_distri_properties(name, service_name, path, privilege_name)
	return cast_org_apache_sling_distribution_packaging_impl_importer_repository_distri_properties({
		["name"] = name;
		["service.name"] = service_name;
		["path"] = path;
		["privilege.name"] = privilege_name;
	})
end

return {
	cast = cast_org_apache_sling_distribution_packaging_impl_importer_repository_distri_properties;
	new = new_org_apache_sling_distribution_packaging_impl_importer_repository_distri_properties;
}