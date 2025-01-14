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
class COM_ADOBE_CQ_SECURITY_HC_DISPATCHER_IMPL_DISPATCHER_ACCESS_HEALTH_CHECK_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    hc_tags: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    dispatcher_address: detachable CONFIG_NODE_PROPERTY_STRING 
      
    dispatcher_filter_allowed: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    dispatcher_filter_blocked: detachable CONFIG_NODE_PROPERTY_ARRAY 
      

feature -- Change Element  
 
    set_hc_tags (a_name: like hc_tags)
        -- Set 'hc_tags' with 'a_name'.
      do
        hc_tags := a_name
      ensure
        hc_tags_set: hc_tags = a_name		
      end

    set_dispatcher_address (a_name: like dispatcher_address)
        -- Set 'dispatcher_address' with 'a_name'.
      do
        dispatcher_address := a_name
      ensure
        dispatcher_address_set: dispatcher_address = a_name		
      end

    set_dispatcher_filter_allowed (a_name: like dispatcher_filter_allowed)
        -- Set 'dispatcher_filter_allowed' with 'a_name'.
      do
        dispatcher_filter_allowed := a_name
      ensure
        dispatcher_filter_allowed_set: dispatcher_filter_allowed = a_name		
      end

    set_dispatcher_filter_blocked (a_name: like dispatcher_filter_blocked)
        -- Set 'dispatcher_filter_blocked' with 'a_name'.
      do
        dispatcher_filter_blocked := a_name
      ensure
        dispatcher_filter_blocked_set: dispatcher_filter_blocked = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_SECURITY_HC_DISPATCHER_IMPL_DISPATCHER_ACCESS_HEALTH_CHECK_PROPERTIES%N")
        if attached hc_tags as l_hc_tags then
          Result.append ("%Nhc_tags:")
          Result.append (l_hc_tags.out)
          Result.append ("%N")    
        end  
        if attached dispatcher_address as l_dispatcher_address then
          Result.append ("%Ndispatcher_address:")
          Result.append (l_dispatcher_address.out)
          Result.append ("%N")    
        end  
        if attached dispatcher_filter_allowed as l_dispatcher_filter_allowed then
          Result.append ("%Ndispatcher_filter_allowed:")
          Result.append (l_dispatcher_filter_allowed.out)
          Result.append ("%N")    
        end  
        if attached dispatcher_filter_blocked as l_dispatcher_filter_blocked then
          Result.append ("%Ndispatcher_filter_blocked:")
          Result.append (l_dispatcher_filter_blocked.out)
          Result.append ("%N")    
        end  
      end
end


