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
class COM_DAY_CQ_WCM_CORE_IMPL_AUTHORING_UI_MODE_SERVICE_IMPL_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    authoring_ui_mode_service_default: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_authoring_ui_mode_service_default (a_name: like authoring_ui_mode_service_default)
        -- Set 'authoring_ui_mode_service_default' with 'a_name'.
      do
        authoring_ui_mode_service_default := a_name
      ensure
        authoring_ui_mode_service_default_set: authoring_ui_mode_service_default = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_WCM_CORE_IMPL_AUTHORING_UI_MODE_SERVICE_IMPL_PROPERTIES%N")
        if attached authoring_ui_mode_service_default as l_authoring_ui_mode_service_default then
          Result.append ("%Nauthoring_ui_mode_service_default:")
          Result.append (l_authoring_ui_mode_service_default.out)
          Result.append ("%N")    
        end  
      end
end

