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
class COM_ADOBE_CQ_SOCIAL_SYNC_IMPL_USER_SYNC_LISTENER_IMPL_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    nodetypes: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    ignorableprops: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    ignorablenodes: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    distfolders: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_nodetypes (a_name: like nodetypes)
        -- Set 'nodetypes' with 'a_name'.
      do
        nodetypes := a_name
      ensure
        nodetypes_set: nodetypes = a_name		
      end

    set_ignorableprops (a_name: like ignorableprops)
        -- Set 'ignorableprops' with 'a_name'.
      do
        ignorableprops := a_name
      ensure
        ignorableprops_set: ignorableprops = a_name		
      end

    set_ignorablenodes (a_name: like ignorablenodes)
        -- Set 'ignorablenodes' with 'a_name'.
      do
        ignorablenodes := a_name
      ensure
        ignorablenodes_set: ignorablenodes = a_name		
      end

    set_enabled (a_name: like enabled)
        -- Set 'enabled' with 'a_name'.
      do
        enabled := a_name
      ensure
        enabled_set: enabled = a_name		
      end

    set_distfolders (a_name: like distfolders)
        -- Set 'distfolders' with 'a_name'.
      do
        distfolders := a_name
      ensure
        distfolders_set: distfolders = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_SOCIAL_SYNC_IMPL_USER_SYNC_LISTENER_IMPL_PROPERTIES%N")
        if attached nodetypes as l_nodetypes then
          Result.append ("%Nnodetypes:")
          Result.append (l_nodetypes.out)
          Result.append ("%N")    
        end  
        if attached ignorableprops as l_ignorableprops then
          Result.append ("%Nignorableprops:")
          Result.append (l_ignorableprops.out)
          Result.append ("%N")    
        end  
        if attached ignorablenodes as l_ignorablenodes then
          Result.append ("%Nignorablenodes:")
          Result.append (l_ignorablenodes.out)
          Result.append ("%N")    
        end  
        if attached enabled as l_enabled then
          Result.append ("%Nenabled:")
          Result.append (l_enabled.out)
          Result.append ("%N")    
        end  
        if attached distfolders as l_distfolders then
          Result.append ("%Ndistfolders:")
          Result.append (l_distfolders.out)
          Result.append ("%N")    
        end  
      end
end


