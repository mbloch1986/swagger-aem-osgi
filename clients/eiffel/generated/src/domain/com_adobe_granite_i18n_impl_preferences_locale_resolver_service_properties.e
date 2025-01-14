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
class COM_ADOBE_GRANITE_I18N_IMPL_PREFERENCES_LOCALE_RESOLVER_SERVICE_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    security_preferences_name: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_security_preferences_name (a_name: like security_preferences_name)
        -- Set 'security_preferences_name' with 'a_name'.
      do
        security_preferences_name := a_name
      ensure
        security_preferences_name_set: security_preferences_name = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_GRANITE_I18N_IMPL_PREFERENCES_LOCALE_RESOLVER_SERVICE_PROPERTIES%N")
        if attached security_preferences_name as l_security_preferences_name then
          Result.append ("%Nsecurity_preferences_name:")
          Result.append (l_security_preferences_name.out)
          Result.append ("%N")    
        end  
      end
end


