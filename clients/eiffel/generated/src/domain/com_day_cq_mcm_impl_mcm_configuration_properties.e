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
class COM_DAY_CQ_MCM_IMPL_MCM_CONFIGURATION_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    experience_indirection: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    touchpoint_indirection: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_experience_indirection (a_name: like experience_indirection)
        -- Set 'experience_indirection' with 'a_name'.
      do
        experience_indirection := a_name
      ensure
        experience_indirection_set: experience_indirection = a_name		
      end

    set_touchpoint_indirection (a_name: like touchpoint_indirection)
        -- Set 'touchpoint_indirection' with 'a_name'.
      do
        touchpoint_indirection := a_name
      ensure
        touchpoint_indirection_set: touchpoint_indirection = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_MCM_IMPL_MCM_CONFIGURATION_PROPERTIES%N")
        if attached experience_indirection as l_experience_indirection then
          Result.append ("%Nexperience_indirection:")
          Result.append (l_experience_indirection.out)
          Result.append ("%N")    
        end  
        if attached touchpoint_indirection as l_touchpoint_indirection then
          Result.append ("%Ntouchpoint_indirection:")
          Result.append (l_touchpoint_indirection.out)
          Result.append ("%N")    
        end  
      end
end


