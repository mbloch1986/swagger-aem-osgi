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
class COM_DAY_CQ_WCM_DESIGNIMPORTER_DESIGN_PACKAGE_IMPORTER_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    extract_filter: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_extract_filter (a_name: like extract_filter)
        -- Set 'extract_filter' with 'a_name'.
      do
        extract_filter := a_name
      ensure
        extract_filter_set: extract_filter = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_WCM_DESIGNIMPORTER_DESIGN_PACKAGE_IMPORTER_PROPERTIES%N")
        if attached extract_filter as l_extract_filter then
          Result.append ("%Nextract_filter:")
          Result.append (l_extract_filter.out)
          Result.append ("%N")    
        end  
      end
end


