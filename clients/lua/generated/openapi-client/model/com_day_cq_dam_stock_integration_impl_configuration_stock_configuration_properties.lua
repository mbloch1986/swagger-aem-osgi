--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_dam_stock_integration_impl_configuration_stock_configuration_properties class
local com_day_cq_dam_stock_integration_impl_configuration_stock_configuration_properties = {}
local com_day_cq_dam_stock_integration_impl_configuration_stock_configuration_properties_mt = {
	__name = "com_day_cq_dam_stock_integration_impl_configuration_stock_configuration_properties";
	__index = com_day_cq_dam_stock_integration_impl_configuration_stock_configuration_properties;
}

local function cast_com_day_cq_dam_stock_integration_impl_configuration_stock_configuration_properties(t)
	return setmetatable(t, com_day_cq_dam_stock_integration_impl_configuration_stock_configuration_properties_mt)
end

local function new_com_day_cq_dam_stock_integration_impl_configuration_stock_configuration_properties(name, locale, ims_config)
	return cast_com_day_cq_dam_stock_integration_impl_configuration_stock_configuration_properties({
		["name"] = name;
		["locale"] = locale;
		["imsConfig"] = ims_config;
	})
end

return {
	cast = cast_com_day_cq_dam_stock_integration_impl_configuration_stock_configuration_properties;
	new = new_com_day_cq_dam_stock_integration_impl_configuration_stock_configuration_properties;
}
