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
class COM_DAY_CQ_WCM_FOUNDATION_IMPL_PAGE_REDIRECT_SERVLET_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    excluded_resource_types: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_excluded_resource_types (a_name: like excluded_resource_types)
        -- Set 'excluded_resource_types' with 'a_name'.
      do
        excluded_resource_types := a_name
      ensure
        excluded_resource_types_set: excluded_resource_types = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_WCM_FOUNDATION_IMPL_PAGE_REDIRECT_SERVLET_PROPERTIES%N")
        if attached excluded_resource_types as l_excluded_resource_types then
          Result.append ("%Nexcluded_resource_types:")
          Result.append (l_excluded_resource_types.out)
          Result.append ("%N")    
        end  
      end
end


