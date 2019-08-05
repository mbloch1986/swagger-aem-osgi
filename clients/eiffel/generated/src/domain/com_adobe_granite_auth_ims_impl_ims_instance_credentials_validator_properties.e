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
class COM_ADOBE_GRANITE_AUTH_IMS_IMPL_IMS_INSTANCE_CREDENTIALS_VALIDATOR_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    oauth_provider_id: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_oauth_provider_id (a_name: like oauth_provider_id)
        -- Set 'oauth_provider_id' with 'a_name'.
      do
        oauth_provider_id := a_name
      ensure
        oauth_provider_id_set: oauth_provider_id = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_GRANITE_AUTH_IMS_IMPL_IMS_INSTANCE_CREDENTIALS_VALIDATOR_PROPERTIES%N")
        if attached oauth_provider_id as l_oauth_provider_id then
          Result.append ("%Noauth_provider_id:")
          Result.append (l_oauth_provider_id.out)
          Result.append ("%N")    
        end  
      end
end

