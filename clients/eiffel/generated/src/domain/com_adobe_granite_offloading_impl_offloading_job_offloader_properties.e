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
class COM_ADOBE_GRANITE_OFFLOADING_IMPL_OFFLOADING_JOB_OFFLOADER_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    offloading_offloader_enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_offloading_offloader_enabled (a_name: like offloading_offloader_enabled)
        -- Set 'offloading_offloader_enabled' with 'a_name'.
      do
        offloading_offloader_enabled := a_name
      ensure
        offloading_offloader_enabled_set: offloading_offloader_enabled = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_GRANITE_OFFLOADING_IMPL_OFFLOADING_JOB_OFFLOADER_PROPERTIES%N")
        if attached offloading_offloader_enabled as l_offloading_offloader_enabled then
          Result.append ("%Noffloading_offloader_enabled:")
          Result.append (l_offloading_offloader_enabled.out)
          Result.append ("%N")    
        end  
      end
end


