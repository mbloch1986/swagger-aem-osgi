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
class COM_DAY_CQ_AUTH_IMPL_LOGIN_SELECTOR_HANDLER_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    path: detachable CONFIG_NODE_PROPERTY_STRING 
      
    service_ranking: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    auth_loginselector_mappings: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    auth_loginselector_changepw_mappings: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    auth_loginselector_defaultloginpage: detachable CONFIG_NODE_PROPERTY_STRING 
      
    auth_loginselector_defaultchangepwpage: detachable CONFIG_NODE_PROPERTY_STRING 
      
    auth_loginselector_handle: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    auth_loginselector_handle_all_extensions: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_path (a_name: like path)
        -- Set 'path' with 'a_name'.
      do
        path := a_name
      ensure
        path_set: path = a_name		
      end

    set_service_ranking (a_name: like service_ranking)
        -- Set 'service_ranking' with 'a_name'.
      do
        service_ranking := a_name
      ensure
        service_ranking_set: service_ranking = a_name		
      end

    set_auth_loginselector_mappings (a_name: like auth_loginselector_mappings)
        -- Set 'auth_loginselector_mappings' with 'a_name'.
      do
        auth_loginselector_mappings := a_name
      ensure
        auth_loginselector_mappings_set: auth_loginselector_mappings = a_name		
      end

    set_auth_loginselector_changepw_mappings (a_name: like auth_loginselector_changepw_mappings)
        -- Set 'auth_loginselector_changepw_mappings' with 'a_name'.
      do
        auth_loginselector_changepw_mappings := a_name
      ensure
        auth_loginselector_changepw_mappings_set: auth_loginselector_changepw_mappings = a_name		
      end

    set_auth_loginselector_defaultloginpage (a_name: like auth_loginselector_defaultloginpage)
        -- Set 'auth_loginselector_defaultloginpage' with 'a_name'.
      do
        auth_loginselector_defaultloginpage := a_name
      ensure
        auth_loginselector_defaultloginpage_set: auth_loginselector_defaultloginpage = a_name		
      end

    set_auth_loginselector_defaultchangepwpage (a_name: like auth_loginselector_defaultchangepwpage)
        -- Set 'auth_loginselector_defaultchangepwpage' with 'a_name'.
      do
        auth_loginselector_defaultchangepwpage := a_name
      ensure
        auth_loginselector_defaultchangepwpage_set: auth_loginselector_defaultchangepwpage = a_name		
      end

    set_auth_loginselector_handle (a_name: like auth_loginselector_handle)
        -- Set 'auth_loginselector_handle' with 'a_name'.
      do
        auth_loginselector_handle := a_name
      ensure
        auth_loginselector_handle_set: auth_loginselector_handle = a_name		
      end

    set_auth_loginselector_handle_all_extensions (a_name: like auth_loginselector_handle_all_extensions)
        -- Set 'auth_loginselector_handle_all_extensions' with 'a_name'.
      do
        auth_loginselector_handle_all_extensions := a_name
      ensure
        auth_loginselector_handle_all_extensions_set: auth_loginselector_handle_all_extensions = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_AUTH_IMPL_LOGIN_SELECTOR_HANDLER_PROPERTIES%N")
        if attached path as l_path then
          Result.append ("%Npath:")
          Result.append (l_path.out)
          Result.append ("%N")    
        end  
        if attached service_ranking as l_service_ranking then
          Result.append ("%Nservice_ranking:")
          Result.append (l_service_ranking.out)
          Result.append ("%N")    
        end  
        if attached auth_loginselector_mappings as l_auth_loginselector_mappings then
          Result.append ("%Nauth_loginselector_mappings:")
          Result.append (l_auth_loginselector_mappings.out)
          Result.append ("%N")    
        end  
        if attached auth_loginselector_changepw_mappings as l_auth_loginselector_changepw_mappings then
          Result.append ("%Nauth_loginselector_changepw_mappings:")
          Result.append (l_auth_loginselector_changepw_mappings.out)
          Result.append ("%N")    
        end  
        if attached auth_loginselector_defaultloginpage as l_auth_loginselector_defaultloginpage then
          Result.append ("%Nauth_loginselector_defaultloginpage:")
          Result.append (l_auth_loginselector_defaultloginpage.out)
          Result.append ("%N")    
        end  
        if attached auth_loginselector_defaultchangepwpage as l_auth_loginselector_defaultchangepwpage then
          Result.append ("%Nauth_loginselector_defaultchangepwpage:")
          Result.append (l_auth_loginselector_defaultchangepwpage.out)
          Result.append ("%N")    
        end  
        if attached auth_loginselector_handle as l_auth_loginselector_handle then
          Result.append ("%Nauth_loginselector_handle:")
          Result.append (l_auth_loginselector_handle.out)
          Result.append ("%N")    
        end  
        if attached auth_loginselector_handle_all_extensions as l_auth_loginselector_handle_all_extensions then
          Result.append ("%Nauth_loginselector_handle_all_extensions:")
          Result.append (l_auth_loginselector_handle_all_extensions.out)
          Result.append ("%N")    
        end  
      end
end


