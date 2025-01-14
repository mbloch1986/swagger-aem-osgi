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
class COM_DAY_CQ_WCM_CORE_IMPL_EVENT_PAGE_EVENT_AUDIT_LISTENER_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    configured: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_configured (a_name: like configured)
        -- Set 'configured' with 'a_name'.
      do
        configured := a_name
      ensure
        configured_set: configured = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_WCM_CORE_IMPL_EVENT_PAGE_EVENT_AUDIT_LISTENER_PROPERTIES%N")
        if attached configured as l_configured then
          Result.append ("%Nconfigured:")
          Result.append (l_configured.out)
          Result.append ("%N")    
        end  
      end
end


