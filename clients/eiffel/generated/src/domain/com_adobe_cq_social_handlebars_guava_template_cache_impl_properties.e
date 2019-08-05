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
class COM_ADOBE_CQ_SOCIAL_HANDLEBARS_GUAVA_TEMPLATE_CACHE_IMPL_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    parameter_guava_cache_enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    parameter_guava_cache_params: detachable CONFIG_NODE_PROPERTY_STRING 
      
    parameter_guava_cache_reload: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    service_ranking: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_parameter_guava_cache_enabled (a_name: like parameter_guava_cache_enabled)
        -- Set 'parameter_guava_cache_enabled' with 'a_name'.
      do
        parameter_guava_cache_enabled := a_name
      ensure
        parameter_guava_cache_enabled_set: parameter_guava_cache_enabled = a_name		
      end

    set_parameter_guava_cache_params (a_name: like parameter_guava_cache_params)
        -- Set 'parameter_guava_cache_params' with 'a_name'.
      do
        parameter_guava_cache_params := a_name
      ensure
        parameter_guava_cache_params_set: parameter_guava_cache_params = a_name		
      end

    set_parameter_guava_cache_reload (a_name: like parameter_guava_cache_reload)
        -- Set 'parameter_guava_cache_reload' with 'a_name'.
      do
        parameter_guava_cache_reload := a_name
      ensure
        parameter_guava_cache_reload_set: parameter_guava_cache_reload = a_name		
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
        Result.append("%Nclass COM_ADOBE_CQ_SOCIAL_HANDLEBARS_GUAVA_TEMPLATE_CACHE_IMPL_PROPERTIES%N")
        if attached parameter_guava_cache_enabled as l_parameter_guava_cache_enabled then
          Result.append ("%Nparameter_guava_cache_enabled:")
          Result.append (l_parameter_guava_cache_enabled.out)
          Result.append ("%N")    
        end  
        if attached parameter_guava_cache_params as l_parameter_guava_cache_params then
          Result.append ("%Nparameter_guava_cache_params:")
          Result.append (l_parameter_guava_cache_params.out)
          Result.append ("%N")    
        end  
        if attached parameter_guava_cache_reload as l_parameter_guava_cache_reload then
          Result.append ("%Nparameter_guava_cache_reload:")
          Result.append (l_parameter_guava_cache_reload.out)
          Result.append ("%N")    
        end  
        if attached service_ranking as l_service_ranking then
          Result.append ("%Nservice_ranking:")
          Result.append (l_service_ranking.out)
          Result.append ("%N")    
        end  
      end
end

