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
class ORG_APACHE_JACKRABBIT_OAK_PLUGINS_OBSERVATION_CHANGE_COLLECTOR_PROVIDER_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    max_items: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    max_path_depth: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_max_items (a_name: like max_items)
        -- Set 'max_items' with 'a_name'.
      do
        max_items := a_name
      ensure
        max_items_set: max_items = a_name		
      end

    set_max_path_depth (a_name: like max_path_depth)
        -- Set 'max_path_depth' with 'a_name'.
      do
        max_path_depth := a_name
      ensure
        max_path_depth_set: max_path_depth = a_name		
      end

    set_enabled (a_name: like enabled)
        -- Set 'enabled' with 'a_name'.
      do
        enabled := a_name
      ensure
        enabled_set: enabled = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_JACKRABBIT_OAK_PLUGINS_OBSERVATION_CHANGE_COLLECTOR_PROVIDER_PROPERTIES%N")
        if attached max_items as l_max_items then
          Result.append ("%Nmax_items:")
          Result.append (l_max_items.out)
          Result.append ("%N")    
        end  
        if attached max_path_depth as l_max_path_depth then
          Result.append ("%Nmax_path_depth:")
          Result.append (l_max_path_depth.out)
          Result.append ("%N")    
        end  
        if attached enabled as l_enabled then
          Result.append ("%Nenabled:")
          Result.append (l_enabled.out)
          Result.append ("%N")    
        end  
      end
end


