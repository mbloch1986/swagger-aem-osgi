--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_wcm_core_impl_variants_page_variants_provider_impl_properties class
local com_day_cq_wcm_core_impl_variants_page_variants_provider_impl_properties = {}
local com_day_cq_wcm_core_impl_variants_page_variants_provider_impl_properties_mt = {
	__name = "com_day_cq_wcm_core_impl_variants_page_variants_provider_impl_properties";
	__index = com_day_cq_wcm_core_impl_variants_page_variants_provider_impl_properties;
}

local function cast_com_day_cq_wcm_core_impl_variants_page_variants_provider_impl_properties(t)
	return setmetatable(t, com_day_cq_wcm_core_impl_variants_page_variants_provider_impl_properties_mt)
end

local function new_com_day_cq_wcm_core_impl_variants_page_variants_provider_impl_properties(default_externalizer_domain)
	return cast_com_day_cq_wcm_core_impl_variants_page_variants_provider_impl_properties({
		["default.externalizer.domain"] = default_externalizer_domain;
	})
end

return {
	cast = cast_com_day_cq_wcm_core_impl_variants_page_variants_provider_impl_properties;
	new = new_com_day_cq_wcm_core_impl_variants_page_variants_provider_impl_properties;
}
