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
class COM_ADOBE_GRANITE_SECURITY_USER_USER_PROPERTIES_SERVICE_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    adapter_condition: detachable CONFIG_NODE_PROPERTY_STRING 
      
    granite_userproperties_nodetypes: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    granite_userproperties_resourcetypes: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_adapter_condition (a_name: like adapter_condition)
        -- Set 'adapter_condition' with 'a_name'.
      do
        adapter_condition := a_name
      ensure
        adapter_condition_set: adapter_condition = a_name		
      end

    set_granite_userproperties_nodetypes (a_name: like granite_userproperties_nodetypes)
        -- Set 'granite_userproperties_nodetypes' with 'a_name'.
      do
        granite_userproperties_nodetypes := a_name
      ensure
        granite_userproperties_nodetypes_set: granite_userproperties_nodetypes = a_name		
      end

    set_granite_userproperties_resourcetypes (a_name: like granite_userproperties_resourcetypes)
        -- Set 'granite_userproperties_resourcetypes' with 'a_name'.
      do
        granite_userproperties_resourcetypes := a_name
      ensure
        granite_userproperties_resourcetypes_set: granite_userproperties_resourcetypes = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_GRANITE_SECURITY_USER_USER_PROPERTIES_SERVICE_PROPERTIES%N")
        if attached adapter_condition as l_adapter_condition then
          Result.append ("%Nadapter_condition:")
          Result.append (l_adapter_condition.out)
          Result.append ("%N")    
        end  
        if attached granite_userproperties_nodetypes as l_granite_userproperties_nodetypes then
          Result.append ("%Ngranite_userproperties_nodetypes:")
          Result.append (l_granite_userproperties_nodetypes.out)
          Result.append ("%N")    
        end  
        if attached granite_userproperties_resourcetypes as l_granite_userproperties_resourcetypes then
          Result.append ("%Ngranite_userproperties_resourcetypes:")
          Result.append (l_granite_userproperties_resourcetypes.out)
          Result.append ("%N")    
        end  
      end
end


