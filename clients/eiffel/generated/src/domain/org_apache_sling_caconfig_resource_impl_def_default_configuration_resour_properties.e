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
class ORG_APACHE_SLING_CACONFIG_RESOURCE_IMPL_DEF_DEFAULT_CONFIGURATION_RESOUR_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    config_path: detachable CONFIG_NODE_PROPERTY_STRING 
      
    fallback_paths: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    config_collection_inheritance_property_names: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_enabled (a_name: like enabled)
        -- Set 'enabled' with 'a_name'.
      do
        enabled := a_name
      ensure
        enabled_set: enabled = a_name		
      end

    set_config_path (a_name: like config_path)
        -- Set 'config_path' with 'a_name'.
      do
        config_path := a_name
      ensure
        config_path_set: config_path = a_name		
      end

    set_fallback_paths (a_name: like fallback_paths)
        -- Set 'fallback_paths' with 'a_name'.
      do
        fallback_paths := a_name
      ensure
        fallback_paths_set: fallback_paths = a_name		
      end

    set_config_collection_inheritance_property_names (a_name: like config_collection_inheritance_property_names)
        -- Set 'config_collection_inheritance_property_names' with 'a_name'.
      do
        config_collection_inheritance_property_names := a_name
      ensure
        config_collection_inheritance_property_names_set: config_collection_inheritance_property_names = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_SLING_CACONFIG_RESOURCE_IMPL_DEF_DEFAULT_CONFIGURATION_RESOUR_PROPERTIES%N")
        if attached enabled as l_enabled then
          Result.append ("%Nenabled:")
          Result.append (l_enabled.out)
          Result.append ("%N")    
        end  
        if attached config_path as l_config_path then
          Result.append ("%Nconfig_path:")
          Result.append (l_config_path.out)
          Result.append ("%N")    
        end  
        if attached fallback_paths as l_fallback_paths then
          Result.append ("%Nfallback_paths:")
          Result.append (l_fallback_paths.out)
          Result.append ("%N")    
        end  
        if attached config_collection_inheritance_property_names as l_config_collection_inheritance_property_names then
          Result.append ("%Nconfig_collection_inheritance_property_names:")
          Result.append (l_config_collection_inheritance_property_names.out)
          Result.append ("%N")    
        end  
      end
end


