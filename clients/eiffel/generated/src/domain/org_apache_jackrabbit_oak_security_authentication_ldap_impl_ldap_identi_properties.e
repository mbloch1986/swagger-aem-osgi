note
 description:"[
		Adobe Experience Manager OSGI config (AEM) API
 		Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
  		OpenAPI spec version: 1.0.0-pre.0
 	    Contact: opensource@shinesolutions.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class ORG_APACHE_JACKRABBIT_OAK_SECURITY_AUTHENTICATION_LDAP_IMPL_LDAP_IDENTI_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    provider_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    host_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    host_port: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    host_ssl: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    host_tls: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    host_no_cert_check: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    bind_dn: detachable CONFIG_NODE_PROPERTY_STRING 
      
    bind_password: detachable CONFIG_NODE_PROPERTY_STRING 
      
    search_timeout: detachable CONFIG_NODE_PROPERTY_STRING 
      
    admin_pool_max_active: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    admin_pool_lookup_on_validate: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    user_pool_max_active: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    user_pool_lookup_on_validate: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    user_base_dn: detachable CONFIG_NODE_PROPERTY_STRING 
      
    user_objectclass: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    user_id_attribute: detachable CONFIG_NODE_PROPERTY_STRING 
      
    user_extra_filter: detachable CONFIG_NODE_PROPERTY_STRING 
      
    user_make_dn_path: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    group_base_dn: detachable CONFIG_NODE_PROPERTY_STRING 
      
    group_objectclass: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    group_name_attribute: detachable CONFIG_NODE_PROPERTY_STRING 
      
    group_extra_filter: detachable CONFIG_NODE_PROPERTY_STRING 
      
    group_make_dn_path: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    group_member_attribute: detachable CONFIG_NODE_PROPERTY_STRING 
      
    use_uid_for_ext_id: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    customattributes: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_provider_name (a_name: like provider_name)
        -- Set 'provider_name' with 'a_name'.
      do
        provider_name := a_name
      ensure
        provider_name_set: provider_name = a_name		
      end

    set_host_name (a_name: like host_name)
        -- Set 'host_name' with 'a_name'.
      do
        host_name := a_name
      ensure
        host_name_set: host_name = a_name		
      end

    set_host_port (a_name: like host_port)
        -- Set 'host_port' with 'a_name'.
      do
        host_port := a_name
      ensure
        host_port_set: host_port = a_name		
      end

    set_host_ssl (a_name: like host_ssl)
        -- Set 'host_ssl' with 'a_name'.
      do
        host_ssl := a_name
      ensure
        host_ssl_set: host_ssl = a_name		
      end

    set_host_tls (a_name: like host_tls)
        -- Set 'host_tls' with 'a_name'.
      do
        host_tls := a_name
      ensure
        host_tls_set: host_tls = a_name		
      end

    set_host_no_cert_check (a_name: like host_no_cert_check)
        -- Set 'host_no_cert_check' with 'a_name'.
      do
        host_no_cert_check := a_name
      ensure
        host_no_cert_check_set: host_no_cert_check = a_name		
      end

    set_bind_dn (a_name: like bind_dn)
        -- Set 'bind_dn' with 'a_name'.
      do
        bind_dn := a_name
      ensure
        bind_dn_set: bind_dn = a_name		
      end

    set_bind_password (a_name: like bind_password)
        -- Set 'bind_password' with 'a_name'.
      do
        bind_password := a_name
      ensure
        bind_password_set: bind_password = a_name		
      end

    set_search_timeout (a_name: like search_timeout)
        -- Set 'search_timeout' with 'a_name'.
      do
        search_timeout := a_name
      ensure
        search_timeout_set: search_timeout = a_name		
      end

    set_admin_pool_max_active (a_name: like admin_pool_max_active)
        -- Set 'admin_pool_max_active' with 'a_name'.
      do
        admin_pool_max_active := a_name
      ensure
        admin_pool_max_active_set: admin_pool_max_active = a_name		
      end

    set_admin_pool_lookup_on_validate (a_name: like admin_pool_lookup_on_validate)
        -- Set 'admin_pool_lookup_on_validate' with 'a_name'.
      do
        admin_pool_lookup_on_validate := a_name
      ensure
        admin_pool_lookup_on_validate_set: admin_pool_lookup_on_validate = a_name		
      end

    set_user_pool_max_active (a_name: like user_pool_max_active)
        -- Set 'user_pool_max_active' with 'a_name'.
      do
        user_pool_max_active := a_name
      ensure
        user_pool_max_active_set: user_pool_max_active = a_name		
      end

    set_user_pool_lookup_on_validate (a_name: like user_pool_lookup_on_validate)
        -- Set 'user_pool_lookup_on_validate' with 'a_name'.
      do
        user_pool_lookup_on_validate := a_name
      ensure
        user_pool_lookup_on_validate_set: user_pool_lookup_on_validate = a_name		
      end

    set_user_base_dn (a_name: like user_base_dn)
        -- Set 'user_base_dn' with 'a_name'.
      do
        user_base_dn := a_name
      ensure
        user_base_dn_set: user_base_dn = a_name		
      end

    set_user_objectclass (a_name: like user_objectclass)
        -- Set 'user_objectclass' with 'a_name'.
      do
        user_objectclass := a_name
      ensure
        user_objectclass_set: user_objectclass = a_name		
      end

    set_user_id_attribute (a_name: like user_id_attribute)
        -- Set 'user_id_attribute' with 'a_name'.
      do
        user_id_attribute := a_name
      ensure
        user_id_attribute_set: user_id_attribute = a_name		
      end

    set_user_extra_filter (a_name: like user_extra_filter)
        -- Set 'user_extra_filter' with 'a_name'.
      do
        user_extra_filter := a_name
      ensure
        user_extra_filter_set: user_extra_filter = a_name		
      end

    set_user_make_dn_path (a_name: like user_make_dn_path)
        -- Set 'user_make_dn_path' with 'a_name'.
      do
        user_make_dn_path := a_name
      ensure
        user_make_dn_path_set: user_make_dn_path = a_name		
      end

    set_group_base_dn (a_name: like group_base_dn)
        -- Set 'group_base_dn' with 'a_name'.
      do
        group_base_dn := a_name
      ensure
        group_base_dn_set: group_base_dn = a_name		
      end

    set_group_objectclass (a_name: like group_objectclass)
        -- Set 'group_objectclass' with 'a_name'.
      do
        group_objectclass := a_name
      ensure
        group_objectclass_set: group_objectclass = a_name		
      end

    set_group_name_attribute (a_name: like group_name_attribute)
        -- Set 'group_name_attribute' with 'a_name'.
      do
        group_name_attribute := a_name
      ensure
        group_name_attribute_set: group_name_attribute = a_name		
      end

    set_group_extra_filter (a_name: like group_extra_filter)
        -- Set 'group_extra_filter' with 'a_name'.
      do
        group_extra_filter := a_name
      ensure
        group_extra_filter_set: group_extra_filter = a_name		
      end

    set_group_make_dn_path (a_name: like group_make_dn_path)
        -- Set 'group_make_dn_path' with 'a_name'.
      do
        group_make_dn_path := a_name
      ensure
        group_make_dn_path_set: group_make_dn_path = a_name		
      end

    set_group_member_attribute (a_name: like group_member_attribute)
        -- Set 'group_member_attribute' with 'a_name'.
      do
        group_member_attribute := a_name
      ensure
        group_member_attribute_set: group_member_attribute = a_name		
      end

    set_use_uid_for_ext_id (a_name: like use_uid_for_ext_id)
        -- Set 'use_uid_for_ext_id' with 'a_name'.
      do
        use_uid_for_ext_id := a_name
      ensure
        use_uid_for_ext_id_set: use_uid_for_ext_id = a_name		
      end

    set_customattributes (a_name: like customattributes)
        -- Set 'customattributes' with 'a_name'.
      do
        customattributes := a_name
      ensure
        customattributes_set: customattributes = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_JACKRABBIT_OAK_SECURITY_AUTHENTICATION_LDAP_IMPL_LDAP_IDENTI_PROPERTIES%N")
        if attached provider_name as l_provider_name then
          Result.append ("%Nprovider_name:")
          Result.append (l_provider_name.out)
          Result.append ("%N")    
        end  
        if attached host_name as l_host_name then
          Result.append ("%Nhost_name:")
          Result.append (l_host_name.out)
          Result.append ("%N")    
        end  
        if attached host_port as l_host_port then
          Result.append ("%Nhost_port:")
          Result.append (l_host_port.out)
          Result.append ("%N")    
        end  
        if attached host_ssl as l_host_ssl then
          Result.append ("%Nhost_ssl:")
          Result.append (l_host_ssl.out)
          Result.append ("%N")    
        end  
        if attached host_tls as l_host_tls then
          Result.append ("%Nhost_tls:")
          Result.append (l_host_tls.out)
          Result.append ("%N")    
        end  
        if attached host_no_cert_check as l_host_no_cert_check then
          Result.append ("%Nhost_no_cert_check:")
          Result.append (l_host_no_cert_check.out)
          Result.append ("%N")    
        end  
        if attached bind_dn as l_bind_dn then
          Result.append ("%Nbind_dn:")
          Result.append (l_bind_dn.out)
          Result.append ("%N")    
        end  
        if attached bind_password as l_bind_password then
          Result.append ("%Nbind_password:")
          Result.append (l_bind_password.out)
          Result.append ("%N")    
        end  
        if attached search_timeout as l_search_timeout then
          Result.append ("%Nsearch_timeout:")
          Result.append (l_search_timeout.out)
          Result.append ("%N")    
        end  
        if attached admin_pool_max_active as l_admin_pool_max_active then
          Result.append ("%Nadmin_pool_max_active:")
          Result.append (l_admin_pool_max_active.out)
          Result.append ("%N")    
        end  
        if attached admin_pool_lookup_on_validate as l_admin_pool_lookup_on_validate then
          Result.append ("%Nadmin_pool_lookup_on_validate:")
          Result.append (l_admin_pool_lookup_on_validate.out)
          Result.append ("%N")    
        end  
        if attached user_pool_max_active as l_user_pool_max_active then
          Result.append ("%Nuser_pool_max_active:")
          Result.append (l_user_pool_max_active.out)
          Result.append ("%N")    
        end  
        if attached user_pool_lookup_on_validate as l_user_pool_lookup_on_validate then
          Result.append ("%Nuser_pool_lookup_on_validate:")
          Result.append (l_user_pool_lookup_on_validate.out)
          Result.append ("%N")    
        end  
        if attached user_base_dn as l_user_base_dn then
          Result.append ("%Nuser_base_dn:")
          Result.append (l_user_base_dn.out)
          Result.append ("%N")    
        end  
        if attached user_objectclass as l_user_objectclass then
          Result.append ("%Nuser_objectclass:")
          Result.append (l_user_objectclass.out)
          Result.append ("%N")    
        end  
        if attached user_id_attribute as l_user_id_attribute then
          Result.append ("%Nuser_id_attribute:")
          Result.append (l_user_id_attribute.out)
          Result.append ("%N")    
        end  
        if attached user_extra_filter as l_user_extra_filter then
          Result.append ("%Nuser_extra_filter:")
          Result.append (l_user_extra_filter.out)
          Result.append ("%N")    
        end  
        if attached user_make_dn_path as l_user_make_dn_path then
          Result.append ("%Nuser_make_dn_path:")
          Result.append (l_user_make_dn_path.out)
          Result.append ("%N")    
        end  
        if attached group_base_dn as l_group_base_dn then
          Result.append ("%Ngroup_base_dn:")
          Result.append (l_group_base_dn.out)
          Result.append ("%N")    
        end  
        if attached group_objectclass as l_group_objectclass then
          Result.append ("%Ngroup_objectclass:")
          Result.append (l_group_objectclass.out)
          Result.append ("%N")    
        end  
        if attached group_name_attribute as l_group_name_attribute then
          Result.append ("%Ngroup_name_attribute:")
          Result.append (l_group_name_attribute.out)
          Result.append ("%N")    
        end  
        if attached group_extra_filter as l_group_extra_filter then
          Result.append ("%Ngroup_extra_filter:")
          Result.append (l_group_extra_filter.out)
          Result.append ("%N")    
        end  
        if attached group_make_dn_path as l_group_make_dn_path then
          Result.append ("%Ngroup_make_dn_path:")
          Result.append (l_group_make_dn_path.out)
          Result.append ("%N")    
        end  
        if attached group_member_attribute as l_group_member_attribute then
          Result.append ("%Ngroup_member_attribute:")
          Result.append (l_group_member_attribute.out)
          Result.append ("%N")    
        end  
        if attached use_uid_for_ext_id as l_use_uid_for_ext_id then
          Result.append ("%Nuse_uid_for_ext_id:")
          Result.append (l_use_uid_for_ext_id.out)
          Result.append ("%N")    
        end  
        if attached customattributes as l_customattributes then
          Result.append ("%Ncustomattributes:")
          Result.append (l_customattributes.out)
          Result.append ("%N")    
        end  
      end
end


