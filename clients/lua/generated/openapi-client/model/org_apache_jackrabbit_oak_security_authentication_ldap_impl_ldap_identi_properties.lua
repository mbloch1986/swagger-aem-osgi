--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_jackrabbit_oak_security_authentication_ldap_impl_ldap_identi_properties class
local org_apache_jackrabbit_oak_security_authentication_ldap_impl_ldap_identi_properties = {}
local org_apache_jackrabbit_oak_security_authentication_ldap_impl_ldap_identi_properties_mt = {
	__name = "org_apache_jackrabbit_oak_security_authentication_ldap_impl_ldap_identi_properties";
	__index = org_apache_jackrabbit_oak_security_authentication_ldap_impl_ldap_identi_properties;
}

local function cast_org_apache_jackrabbit_oak_security_authentication_ldap_impl_ldap_identi_properties(t)
	return setmetatable(t, org_apache_jackrabbit_oak_security_authentication_ldap_impl_ldap_identi_properties_mt)
end

local function new_org_apache_jackrabbit_oak_security_authentication_ldap_impl_ldap_identi_properties(provider_name, host_name, host_port, host_ssl, host_tls, host_no_cert_check, bind_dn, bind_password, search_timeout, admin_pool_max_active, admin_pool_lookup_on_validate, user_pool_max_active, user_pool_lookup_on_validate, user_base_dn, user_objectclass, user_id_attribute, user_extra_filter, user_make_dn_path, group_base_dn, group_objectclass, group_name_attribute, group_extra_filter, group_make_dn_path, group_member_attribute, use_uid_for_ext_id, customattributes)
	return cast_org_apache_jackrabbit_oak_security_authentication_ldap_impl_ldap_identi_properties({
		["provider.name"] = provider_name;
		["host.name"] = host_name;
		["host.port"] = host_port;
		["host.ssl"] = host_ssl;
		["host.tls"] = host_tls;
		["host.noCertCheck"] = host_no_cert_check;
		["bind.dn"] = bind_dn;
		["bind.password"] = bind_password;
		["searchTimeout"] = search_timeout;
		["adminPool.maxActive"] = admin_pool_max_active;
		["adminPool.lookupOnValidate"] = admin_pool_lookup_on_validate;
		["userPool.maxActive"] = user_pool_max_active;
		["userPool.lookupOnValidate"] = user_pool_lookup_on_validate;
		["user.baseDN"] = user_base_dn;
		["user.objectclass"] = user_objectclass;
		["user.idAttribute"] = user_id_attribute;
		["user.extraFilter"] = user_extra_filter;
		["user.makeDnPath"] = user_make_dn_path;
		["group.baseDN"] = group_base_dn;
		["group.objectclass"] = group_objectclass;
		["group.nameAttribute"] = group_name_attribute;
		["group.extraFilter"] = group_extra_filter;
		["group.makeDnPath"] = group_make_dn_path;
		["group.memberAttribute"] = group_member_attribute;
		["useUidForExtId"] = use_uid_for_ext_id;
		["customattributes"] = customattributes;
	})
end

return {
	cast = cast_org_apache_jackrabbit_oak_security_authentication_ldap_impl_ldap_identi_properties;
	new = new_org_apache_jackrabbit_oak_security_authentication_ldap_impl_ldap_identi_properties;
}