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
class COM_DAY_CQ_WCM_CORE_IMPL_UTILS_DEFAULT_PAGE_NAME_VALIDATOR_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    non_valid_chars: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_non_valid_chars (a_name: like non_valid_chars)
        -- Set 'non_valid_chars' with 'a_name'.
      do
        non_valid_chars := a_name
      ensure
        non_valid_chars_set: non_valid_chars = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_WCM_CORE_IMPL_UTILS_DEFAULT_PAGE_NAME_VALIDATOR_PROPERTIES%N")
        if attached non_valid_chars as l_non_valid_chars then
          Result.append ("%Nnon_valid_chars:")
          Result.append (l_non_valid_chars.out)
          Result.append ("%N")    
        end  
      end
end


