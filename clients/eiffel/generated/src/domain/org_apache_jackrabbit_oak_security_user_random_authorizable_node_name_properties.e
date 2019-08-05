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
class ORG_APACHE_JACKRABBIT_OAK_SECURITY_USER_RANDOM_AUTHORIZABLE_NODE_NAME_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    length: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_length (a_name: like length)
        -- Set 'length' with 'a_name'.
      do
        length := a_name
      ensure
        length_set: length = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_JACKRABBIT_OAK_SECURITY_USER_RANDOM_AUTHORIZABLE_NODE_NAME_PROPERTIES%N")
        if attached length as l_length then
          Result.append ("%Nlength:")
          Result.append (l_length.out)
          Result.append ("%N")    
        end  
      end
end

