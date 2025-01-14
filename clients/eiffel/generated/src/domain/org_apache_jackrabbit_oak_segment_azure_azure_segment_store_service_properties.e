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
class ORG_APACHE_JACKRABBIT_OAK_SEGMENT_AZURE_AZURE_SEGMENT_STORE_SERVICE_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    account_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    container_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    access_key: detachable CONFIG_NODE_PROPERTY_STRING 
      
    root_path: detachable CONFIG_NODE_PROPERTY_STRING 
      
    connection_ur_l: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_account_name (a_name: like account_name)
        -- Set 'account_name' with 'a_name'.
      do
        account_name := a_name
      ensure
        account_name_set: account_name = a_name		
      end

    set_container_name (a_name: like container_name)
        -- Set 'container_name' with 'a_name'.
      do
        container_name := a_name
      ensure
        container_name_set: container_name = a_name		
      end

    set_access_key (a_name: like access_key)
        -- Set 'access_key' with 'a_name'.
      do
        access_key := a_name
      ensure
        access_key_set: access_key = a_name		
      end

    set_root_path (a_name: like root_path)
        -- Set 'root_path' with 'a_name'.
      do
        root_path := a_name
      ensure
        root_path_set: root_path = a_name		
      end

    set_connection_ur_l (a_name: like connection_ur_l)
        -- Set 'connection_ur_l' with 'a_name'.
      do
        connection_ur_l := a_name
      ensure
        connection_ur_l_set: connection_ur_l = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_JACKRABBIT_OAK_SEGMENT_AZURE_AZURE_SEGMENT_STORE_SERVICE_PROPERTIES%N")
        if attached account_name as l_account_name then
          Result.append ("%Naccount_name:")
          Result.append (l_account_name.out)
          Result.append ("%N")    
        end  
        if attached container_name as l_container_name then
          Result.append ("%Ncontainer_name:")
          Result.append (l_container_name.out)
          Result.append ("%N")    
        end  
        if attached access_key as l_access_key then
          Result.append ("%Naccess_key:")
          Result.append (l_access_key.out)
          Result.append ("%N")    
        end  
        if attached root_path as l_root_path then
          Result.append ("%Nroot_path:")
          Result.append (l_root_path.out)
          Result.append ("%N")    
        end  
        if attached connection_ur_l as l_connection_ur_l then
          Result.append ("%Nconnection_ur_l:")
          Result.append (l_connection_ur_l.out)
          Result.append ("%N")    
        end  
      end
end


