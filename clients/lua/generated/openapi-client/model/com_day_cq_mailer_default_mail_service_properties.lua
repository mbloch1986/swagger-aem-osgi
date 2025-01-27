--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- com_day_cq_mailer_default_mail_service_properties class
local com_day_cq_mailer_default_mail_service_properties = {}
local com_day_cq_mailer_default_mail_service_properties_mt = {
	__name = "com_day_cq_mailer_default_mail_service_properties";
	__index = com_day_cq_mailer_default_mail_service_properties;
}

local function cast_com_day_cq_mailer_default_mail_service_properties(t)
	return setmetatable(t, com_day_cq_mailer_default_mail_service_properties_mt)
end

local function new_com_day_cq_mailer_default_mail_service_properties(smtp_host, smtp_port, smtp_user, smtp_password, from_address, smtp_ssl, smtp_starttls, debug_email)
	return cast_com_day_cq_mailer_default_mail_service_properties({
		["smtp.host"] = smtp_host;
		["smtp.port"] = smtp_port;
		["smtp.user"] = smtp_user;
		["smtp.password"] = smtp_password;
		["from.address"] = from_address;
		["smtp.ssl"] = smtp_ssl;
		["smtp.starttls"] = smtp_starttls;
		["debug.email"] = debug_email;
	})
end

return {
	cast = cast_com_day_cq_mailer_default_mail_service_properties;
	new = new_com_day_cq_mailer_default_mail_service_properties;
}
