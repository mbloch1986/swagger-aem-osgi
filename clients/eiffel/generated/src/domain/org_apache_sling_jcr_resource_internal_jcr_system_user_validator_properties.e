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
class ORG_APACHE_SLING_JCR_RESOURCE_INTERNAL_JCR_SYSTEM_USER_VALIDATOR_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    allow_only_system_user: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_allow_only_system_user (a_name: like allow_only_system_user)
        -- Set 'allow_only_system_user' with 'a_name'.
      do
        allow_only_system_user := a_name
      ensure
        allow_only_system_user_set: allow_only_system_user = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_SLING_JCR_RESOURCE_INTERNAL_JCR_SYSTEM_USER_VALIDATOR_PROPERTIES%N")
        if attached allow_only_system_user as l_allow_only_system_user then
          Result.append ("%Nallow_only_system_user:")
          Result.append (l_allow_only_system_user.out)
          Result.append ("%N")    
        end  
      end
end


