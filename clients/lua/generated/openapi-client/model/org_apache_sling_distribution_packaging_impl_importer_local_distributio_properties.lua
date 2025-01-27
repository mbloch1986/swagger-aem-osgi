--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_sling_distribution_packaging_impl_importer_local_distributio_properties class
local org_apache_sling_distribution_packaging_impl_importer_local_distributio_properties = {}
local org_apache_sling_distribution_packaging_impl_importer_local_distributio_properties_mt = {
	__name = "org_apache_sling_distribution_packaging_impl_importer_local_distributio_properties";
	__index = org_apache_sling_distribution_packaging_impl_importer_local_distributio_properties;
}

local function cast_org_apache_sling_distribution_packaging_impl_importer_local_distributio_properties(t)
	return setmetatable(t, org_apache_sling_distribution_packaging_impl_importer_local_distributio_properties_mt)
end

local function new_org_apache_sling_distribution_packaging_impl_importer_local_distributio_properties(name, package_builder_target)
	return cast_org_apache_sling_distribution_packaging_impl_importer_local_distributio_properties({
		["name"] = name;
		["packageBuilder.target"] = package_builder_target;
	})
end

return {
	cast = cast_org_apache_sling_distribution_packaging_impl_importer_local_distributio_properties;
	new = new_org_apache_sling_distribution_packaging_impl_importer_local_distributio_properties;
}
