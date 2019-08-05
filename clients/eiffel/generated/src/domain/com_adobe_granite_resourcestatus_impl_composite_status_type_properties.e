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
class COM_ADOBE_GRANITE_RESOURCESTATUS_IMPL_COMPOSITE_STATUS_TYPE_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    types: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name		
      end

    set_types (a_name: like types)
        -- Set 'types' with 'a_name'.
      do
        types := a_name
      ensure
        types_set: types = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_GRANITE_RESOURCESTATUS_IMPL_COMPOSITE_STATUS_TYPE_PROPERTIES%N")
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")    
        end  
        if attached types as l_types then
          Result.append ("%Ntypes:")
          Result.append (l_types.out)
          Result.append ("%N")    
        end  
      end
end

