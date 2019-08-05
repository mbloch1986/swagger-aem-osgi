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
class ORG_APACHE_SLING_FEATUREFLAGS_FEATURE_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    description: detachable CONFIG_NODE_PROPERTY_STRING 
      
    enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name		
      end

    set_description (a_name: like description)
        -- Set 'description' with 'a_name'.
      do
        description := a_name
      ensure
        description_set: description = a_name		
      end

    set_enabled (a_name: like enabled)
        -- Set 'enabled' with 'a_name'.
      do
        enabled := a_name
      ensure
        enabled_set: enabled = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_SLING_FEATUREFLAGS_FEATURE_PROPERTIES%N")
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")    
        end  
        if attached description as l_description then
          Result.append ("%Ndescription:")
          Result.append (l_description.out)
          Result.append ("%N")    
        end  
        if attached enabled as l_enabled then
          Result.append ("%Nenabled:")
          Result.append (l_enabled.out)
          Result.append ("%N")    
        end  
      end
end

