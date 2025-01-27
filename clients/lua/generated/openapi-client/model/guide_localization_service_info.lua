--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- guide_localization_service_info class
local guide_localization_service_info = {}
local guide_localization_service_info_mt = {
	__name = "guide_localization_service_info";
	__index = guide_localization_service_info;
}

local function cast_guide_localization_service_info(t)
	return setmetatable(t, guide_localization_service_info_mt)
end

local function new_guide_localization_service_info(pid, title, description, properties)
	return cast_guide_localization_service_info({
		["pid"] = pid;
		["title"] = title;
		["description"] = description;
		["properties"] = properties;
	})
end

return {
	cast = cast_guide_localization_service_info;
	new = new_guide_localization_service_info;
}
