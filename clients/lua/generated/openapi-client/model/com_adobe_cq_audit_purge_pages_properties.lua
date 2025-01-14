--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_adobe_cq_audit_purge_pages_properties class
local com_adobe_cq_audit_purge_pages_properties = {}
local com_adobe_cq_audit_purge_pages_properties_mt = {
	__name = "com_adobe_cq_audit_purge_pages_properties";
	__index = com_adobe_cq_audit_purge_pages_properties;
}

local function cast_com_adobe_cq_audit_purge_pages_properties(t)
	return setmetatable(t, com_adobe_cq_audit_purge_pages_properties_mt)
end

local function new_com_adobe_cq_audit_purge_pages_properties(auditlog_rule_name, auditlog_rule_contentpath, auditlog_rule_minimumage, auditlog_rule_types)
	return cast_com_adobe_cq_audit_purge_pages_properties({
		["auditlog.rule.name"] = auditlog_rule_name;
		["auditlog.rule.contentpath"] = auditlog_rule_contentpath;
		["auditlog.rule.minimumage"] = auditlog_rule_minimumage;
		["auditlog.rule.types"] = auditlog_rule_types;
	})
end

return {
	cast = cast_com_adobe_cq_audit_purge_pages_properties;
	new = new_com_adobe_cq_audit_purge_pages_properties;
}
