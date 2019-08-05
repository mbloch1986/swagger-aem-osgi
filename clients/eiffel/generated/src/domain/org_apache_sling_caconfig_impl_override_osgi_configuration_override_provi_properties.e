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
class ORG_APACHE_SLING_CACONFIG_IMPL_OVERRIDE_OSGI_CONFIGURATION_OVERRIDE_PROVI_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    description: detachable CONFIG_NODE_PROPERTY_STRING 
      
    overrides: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    service_ranking: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_description (a_name: like description)
        -- Set 'description' with 'a_name'.
      do
        description := a_name
      ensure
        description_set: description = a_name		
      end

    set_overrides (a_name: like overrides)
        -- Set 'overrides' with 'a_name'.
      do
        overrides := a_name
      ensure
        overrides_set: overrides = a_name		
      end

    set_enabled (a_name: like enabled)
        -- Set 'enabled' with 'a_name'.
      do
        enabled := a_name
      ensure
        enabled_set: enabled = a_name		
      end

    set_service_ranking (a_name: like service_ranking)
        -- Set 'service_ranking' with 'a_name'.
      do
        service_ranking := a_name
      ensure
        service_ranking_set: service_ranking = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_SLING_CACONFIG_IMPL_OVERRIDE_OSGI_CONFIGURATION_OVERRIDE_PROVI_PROPERTIES%N")
        if attached description as l_description then
          Result.append ("%Ndescription:")
          Result.append (l_description.out)
          Result.append ("%N")    
        end  
        if attached overrides as l_overrides then
          Result.append ("%Noverrides:")
          Result.append (l_overrides.out)
          Result.append ("%N")    
        end  
        if attached enabled as l_enabled then
          Result.append ("%Nenabled:")
          Result.append (l_enabled.out)
          Result.append ("%N")    
        end  
        if attached service_ranking as l_service_ranking then
          Result.append ("%Nservice_ranking:")
          Result.append (l_service_ranking.out)
          Result.append ("%N")    
        end  
      end
end

