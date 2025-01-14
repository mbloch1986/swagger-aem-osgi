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
class COM_DAY_CQ_DAM_CORE_IMPL_PROCESS_TEXT_EXTRACTION_PROCESS_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    mime_types: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    max_extract: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_mime_types (a_name: like mime_types)
        -- Set 'mime_types' with 'a_name'.
      do
        mime_types := a_name
      ensure
        mime_types_set: mime_types = a_name		
      end

    set_max_extract (a_name: like max_extract)
        -- Set 'max_extract' with 'a_name'.
      do
        max_extract := a_name
      ensure
        max_extract_set: max_extract = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_CORE_IMPL_PROCESS_TEXT_EXTRACTION_PROCESS_PROPERTIES%N")
        if attached mime_types as l_mime_types then
          Result.append ("%Nmime_types:")
          Result.append (l_mime_types.out)
          Result.append ("%N")    
        end  
        if attached max_extract as l_max_extract then
          Result.append ("%Nmax_extract:")
          Result.append (l_max_extract.out)
          Result.append ("%N")    
        end  
      end
end


