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
class ORG_APACHE_JACKRABBIT_OAK_SPI_SECURITY_AUTHENTICATION_EXTERNAL_IMPL_DE_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    handler_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    user_expiration_time: detachable CONFIG_NODE_PROPERTY_STRING 
      
    user_auto_membership: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    user_property_mapping: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    user_path_prefix: detachable CONFIG_NODE_PROPERTY_STRING 
      
    user_membership_exp_time: detachable CONFIG_NODE_PROPERTY_STRING 
      
    user_membership_nesting_depth: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    user_dynamic_membership: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    user_disable_missing: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    group_expiration_time: detachable CONFIG_NODE_PROPERTY_STRING 
      
    group_auto_membership: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    group_property_mapping: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    group_path_prefix: detachable CONFIG_NODE_PROPERTY_STRING 
      
    enable_rf_c7613_usercase_mapped_profile: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_handler_name (a_name: like handler_name)
        -- Set 'handler_name' with 'a_name'.
      do
        handler_name := a_name
      ensure
        handler_name_set: handler_name = a_name		
      end

    set_user_expiration_time (a_name: like user_expiration_time)
        -- Set 'user_expiration_time' with 'a_name'.
      do
        user_expiration_time := a_name
      ensure
        user_expiration_time_set: user_expiration_time = a_name		
      end

    set_user_auto_membership (a_name: like user_auto_membership)
        -- Set 'user_auto_membership' with 'a_name'.
      do
        user_auto_membership := a_name
      ensure
        user_auto_membership_set: user_auto_membership = a_name		
      end

    set_user_property_mapping (a_name: like user_property_mapping)
        -- Set 'user_property_mapping' with 'a_name'.
      do
        user_property_mapping := a_name
      ensure
        user_property_mapping_set: user_property_mapping = a_name		
      end

    set_user_path_prefix (a_name: like user_path_prefix)
        -- Set 'user_path_prefix' with 'a_name'.
      do
        user_path_prefix := a_name
      ensure
        user_path_prefix_set: user_path_prefix = a_name		
      end

    set_user_membership_exp_time (a_name: like user_membership_exp_time)
        -- Set 'user_membership_exp_time' with 'a_name'.
      do
        user_membership_exp_time := a_name
      ensure
        user_membership_exp_time_set: user_membership_exp_time = a_name		
      end

    set_user_membership_nesting_depth (a_name: like user_membership_nesting_depth)
        -- Set 'user_membership_nesting_depth' with 'a_name'.
      do
        user_membership_nesting_depth := a_name
      ensure
        user_membership_nesting_depth_set: user_membership_nesting_depth = a_name		
      end

    set_user_dynamic_membership (a_name: like user_dynamic_membership)
        -- Set 'user_dynamic_membership' with 'a_name'.
      do
        user_dynamic_membership := a_name
      ensure
        user_dynamic_membership_set: user_dynamic_membership = a_name		
      end

    set_user_disable_missing (a_name: like user_disable_missing)
        -- Set 'user_disable_missing' with 'a_name'.
      do
        user_disable_missing := a_name
      ensure
        user_disable_missing_set: user_disable_missing = a_name		
      end

    set_group_expiration_time (a_name: like group_expiration_time)
        -- Set 'group_expiration_time' with 'a_name'.
      do
        group_expiration_time := a_name
      ensure
        group_expiration_time_set: group_expiration_time = a_name		
      end

    set_group_auto_membership (a_name: like group_auto_membership)
        -- Set 'group_auto_membership' with 'a_name'.
      do
        group_auto_membership := a_name
      ensure
        group_auto_membership_set: group_auto_membership = a_name		
      end

    set_group_property_mapping (a_name: like group_property_mapping)
        -- Set 'group_property_mapping' with 'a_name'.
      do
        group_property_mapping := a_name
      ensure
        group_property_mapping_set: group_property_mapping = a_name		
      end

    set_group_path_prefix (a_name: like group_path_prefix)
        -- Set 'group_path_prefix' with 'a_name'.
      do
        group_path_prefix := a_name
      ensure
        group_path_prefix_set: group_path_prefix = a_name		
      end

    set_enable_rf_c7613_usercase_mapped_profile (a_name: like enable_rf_c7613_usercase_mapped_profile)
        -- Set 'enable_rf_c7613_usercase_mapped_profile' with 'a_name'.
      do
        enable_rf_c7613_usercase_mapped_profile := a_name
      ensure
        enable_rf_c7613_usercase_mapped_profile_set: enable_rf_c7613_usercase_mapped_profile = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_JACKRABBIT_OAK_SPI_SECURITY_AUTHENTICATION_EXTERNAL_IMPL_DE_PROPERTIES%N")
        if attached handler_name as l_handler_name then
          Result.append ("%Nhandler_name:")
          Result.append (l_handler_name.out)
          Result.append ("%N")    
        end  
        if attached user_expiration_time as l_user_expiration_time then
          Result.append ("%Nuser_expiration_time:")
          Result.append (l_user_expiration_time.out)
          Result.append ("%N")    
        end  
        if attached user_auto_membership as l_user_auto_membership then
          Result.append ("%Nuser_auto_membership:")
          Result.append (l_user_auto_membership.out)
          Result.append ("%N")    
        end  
        if attached user_property_mapping as l_user_property_mapping then
          Result.append ("%Nuser_property_mapping:")
          Result.append (l_user_property_mapping.out)
          Result.append ("%N")    
        end  
        if attached user_path_prefix as l_user_path_prefix then
          Result.append ("%Nuser_path_prefix:")
          Result.append (l_user_path_prefix.out)
          Result.append ("%N")    
        end  
        if attached user_membership_exp_time as l_user_membership_exp_time then
          Result.append ("%Nuser_membership_exp_time:")
          Result.append (l_user_membership_exp_time.out)
          Result.append ("%N")    
        end  
        if attached user_membership_nesting_depth as l_user_membership_nesting_depth then
          Result.append ("%Nuser_membership_nesting_depth:")
          Result.append (l_user_membership_nesting_depth.out)
          Result.append ("%N")    
        end  
        if attached user_dynamic_membership as l_user_dynamic_membership then
          Result.append ("%Nuser_dynamic_membership:")
          Result.append (l_user_dynamic_membership.out)
          Result.append ("%N")    
        end  
        if attached user_disable_missing as l_user_disable_missing then
          Result.append ("%Nuser_disable_missing:")
          Result.append (l_user_disable_missing.out)
          Result.append ("%N")    
        end  
        if attached group_expiration_time as l_group_expiration_time then
          Result.append ("%Ngroup_expiration_time:")
          Result.append (l_group_expiration_time.out)
          Result.append ("%N")    
        end  
        if attached group_auto_membership as l_group_auto_membership then
          Result.append ("%Ngroup_auto_membership:")
          Result.append (l_group_auto_membership.out)
          Result.append ("%N")    
        end  
        if attached group_property_mapping as l_group_property_mapping then
          Result.append ("%Ngroup_property_mapping:")
          Result.append (l_group_property_mapping.out)
          Result.append ("%N")    
        end  
        if attached group_path_prefix as l_group_path_prefix then
          Result.append ("%Ngroup_path_prefix:")
          Result.append (l_group_path_prefix.out)
          Result.append ("%N")    
        end  
        if attached enable_rf_c7613_usercase_mapped_profile as l_enable_rf_c7613_usercase_mapped_profile then
          Result.append ("%Nenable_rf_c7613_usercase_mapped_profile:")
          Result.append (l_enable_rf_c7613_usercase_mapped_profile.out)
          Result.append ("%N")    
        end  
      end
end

