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
class COM_ADOBE_GRANITE_BUNDLES_HC_IMPL_CODE_CACHE_HEALTH_CHECK_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    hc_tags: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    minimum_code_cache_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_hc_tags (a_name: like hc_tags)
        -- Set 'hc_tags' with 'a_name'.
      do
        hc_tags := a_name
      ensure
        hc_tags_set: hc_tags = a_name		
      end

    set_minimum_code_cache_size (a_name: like minimum_code_cache_size)
        -- Set 'minimum_code_cache_size' with 'a_name'.
      do
        minimum_code_cache_size := a_name
      ensure
        minimum_code_cache_size_set: minimum_code_cache_size = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_GRANITE_BUNDLES_HC_IMPL_CODE_CACHE_HEALTH_CHECK_PROPERTIES%N")
        if attached hc_tags as l_hc_tags then
          Result.append ("%Nhc_tags:")
          Result.append (l_hc_tags.out)
          Result.append ("%N")    
        end  
        if attached minimum_code_cache_size as l_minimum_code_cache_size then
          Result.append ("%Nminimum_code_cache_size:")
          Result.append (l_minimum_code_cache_size.out)
          Result.append ("%N")    
        end  
      end
end

