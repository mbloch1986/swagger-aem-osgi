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
class ANALYTICS_COMPONENT_QUERY_CACHE_SERVICE_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    cq_analytics_component_query_cache_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_cq_analytics_component_query_cache_size (a_name: like cq_analytics_component_query_cache_size)
        -- Set 'cq_analytics_component_query_cache_size' with 'a_name'.
      do
        cq_analytics_component_query_cache_size := a_name
      ensure
        cq_analytics_component_query_cache_size_set: cq_analytics_component_query_cache_size = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ANALYTICS_COMPONENT_QUERY_CACHE_SERVICE_PROPERTIES%N")
        if attached cq_analytics_component_query_cache_size as l_cq_analytics_component_query_cache_size then
          Result.append ("%Ncq_analytics_component_query_cache_size:")
          Result.append (l_cq_analytics_component_query_cache_size.out)
          Result.append ("%N")    
        end  
      end
end

