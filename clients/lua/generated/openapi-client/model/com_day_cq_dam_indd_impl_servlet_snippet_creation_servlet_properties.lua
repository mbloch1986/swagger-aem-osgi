--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_dam_indd_impl_servlet_snippet_creation_servlet_properties class
local com_day_cq_dam_indd_impl_servlet_snippet_creation_servlet_properties = {}
local com_day_cq_dam_indd_impl_servlet_snippet_creation_servlet_properties_mt = {
	__name = "com_day_cq_dam_indd_impl_servlet_snippet_creation_servlet_properties";
	__index = com_day_cq_dam_indd_impl_servlet_snippet_creation_servlet_properties;
}

local function cast_com_day_cq_dam_indd_impl_servlet_snippet_creation_servlet_properties(t)
	return setmetatable(t, com_day_cq_dam_indd_impl_servlet_snippet_creation_servlet_properties_mt)
end

local function new_com_day_cq_dam_indd_impl_servlet_snippet_creation_servlet_properties(snippetcreation_maxcollections)
	return cast_com_day_cq_dam_indd_impl_servlet_snippet_creation_servlet_properties({
		["snippetcreation.maxcollections"] = snippetcreation_maxcollections;
	})
end

return {
	cast = cast_com_day_cq_dam_indd_impl_servlet_snippet_creation_servlet_properties;
	new = new_com_day_cq_dam_indd_impl_servlet_snippet_creation_servlet_properties;
}
