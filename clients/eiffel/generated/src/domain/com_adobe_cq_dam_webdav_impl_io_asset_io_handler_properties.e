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
class COM_ADOBE_CQ_DAM_WEBDAV_IMPL_IO_ASSET_IO_HANDLER_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    service_ranking: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    path_prefix: detachable CONFIG_NODE_PROPERTY_STRING 
      
    create_version: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_service_ranking (a_name: like service_ranking)
        -- Set 'service_ranking' with 'a_name'.
      do
        service_ranking := a_name
      ensure
        service_ranking_set: service_ranking = a_name		
      end

    set_path_prefix (a_name: like path_prefix)
        -- Set 'path_prefix' with 'a_name'.
      do
        path_prefix := a_name
      ensure
        path_prefix_set: path_prefix = a_name		
      end

    set_create_version (a_name: like create_version)
        -- Set 'create_version' with 'a_name'.
      do
        create_version := a_name
      ensure
        create_version_set: create_version = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_DAM_WEBDAV_IMPL_IO_ASSET_IO_HANDLER_PROPERTIES%N")
        if attached service_ranking as l_service_ranking then
          Result.append ("%Nservice_ranking:")
          Result.append (l_service_ranking.out)
          Result.append ("%N")    
        end  
        if attached path_prefix as l_path_prefix then
          Result.append ("%Npath_prefix:")
          Result.append (l_path_prefix.out)
          Result.append ("%N")    
        end  
        if attached create_version as l_create_version then
          Result.append ("%Ncreate_version:")
          Result.append (l_create_version.out)
          Result.append ("%N")    
        end  
      end
end


