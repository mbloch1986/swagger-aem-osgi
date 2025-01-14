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
class COM_ADOBE_GRANITE_COMPATROUTER_IMPL_ROUTING_CONFIG_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    id: detachable CONFIG_NODE_PROPERTY_STRING 
      
    compat_path: detachable CONFIG_NODE_PROPERTY_STRING 
      
    new_path: detachable CONFIG_NODE_PROPERTY_STRING 
      

feature -- Change Element  
 
    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name		
      end

    set_compat_path (a_name: like compat_path)
        -- Set 'compat_path' with 'a_name'.
      do
        compat_path := a_name
      ensure
        compat_path_set: compat_path = a_name		
      end

    set_new_path (a_name: like new_path)
        -- Set 'new_path' with 'a_name'.
      do
        new_path := a_name
      ensure
        new_path_set: new_path = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_GRANITE_COMPATROUTER_IMPL_ROUTING_CONFIG_PROPERTIES%N")
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")    
        end  
        if attached compat_path as l_compat_path then
          Result.append ("%Ncompat_path:")
          Result.append (l_compat_path.out)
          Result.append ("%N")    
        end  
        if attached new_path as l_new_path then
          Result.append ("%Nnew_path:")
          Result.append (l_new_path.out)
          Result.append ("%N")    
        end  
      end
end


