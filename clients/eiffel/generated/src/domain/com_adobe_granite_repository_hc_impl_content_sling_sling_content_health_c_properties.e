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
class COM_ADOBE_GRANITE_REPOSITORY_HC_IMPL_CONTENT_SLING_SLING_CONTENT_HEALTH_C_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    hc_tags: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    exclude_search_path: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_hc_tags (a_name: like hc_tags)
        -- Set 'hc_tags' with 'a_name'.
      do
        hc_tags := a_name
      ensure
        hc_tags_set: hc_tags = a_name		
      end

    set_exclude_search_path (a_name: like exclude_search_path)
        -- Set 'exclude_search_path' with 'a_name'.
      do
        exclude_search_path := a_name
      ensure
        exclude_search_path_set: exclude_search_path = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_GRANITE_REPOSITORY_HC_IMPL_CONTENT_SLING_SLING_CONTENT_HEALTH_C_PROPERTIES%N")
        if attached hc_tags as l_hc_tags then
          Result.append ("%Nhc_tags:")
          Result.append (l_hc_tags.out)
          Result.append ("%N")    
        end  
        if attached exclude_search_path as l_exclude_search_path then
          Result.append ("%Nexclude_search_path:")
          Result.append (l_exclude_search_path.out)
          Result.append ("%N")    
        end  
      end
end


