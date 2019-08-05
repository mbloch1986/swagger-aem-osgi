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
class COM_DAY_CQ_DAM_CORE_IMPL_JMX_ASSET_INDEX_UPDATE_MONITOR_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    jmx_objectname: detachable CONFIG_NODE_PROPERTY_STRING 
      
    property_measure_enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    property_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    property_max_wait_ms: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    property_max_rate: detachable CONFIG_NODE_PROPERTY_FLOAT 
      
    fulltext_measure_enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    fulltext_name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    fulltext_max_wait_ms: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    fulltext_max_rate: detachable CONFIG_NODE_PROPERTY_FLOAT 
      

feature -- Change Element  
 
    set_jmx_objectname (a_name: like jmx_objectname)
        -- Set 'jmx_objectname' with 'a_name'.
      do
        jmx_objectname := a_name
      ensure
        jmx_objectname_set: jmx_objectname = a_name		
      end

    set_property_measure_enabled (a_name: like property_measure_enabled)
        -- Set 'property_measure_enabled' with 'a_name'.
      do
        property_measure_enabled := a_name
      ensure
        property_measure_enabled_set: property_measure_enabled = a_name		
      end

    set_property_name (a_name: like property_name)
        -- Set 'property_name' with 'a_name'.
      do
        property_name := a_name
      ensure
        property_name_set: property_name = a_name		
      end

    set_property_max_wait_ms (a_name: like property_max_wait_ms)
        -- Set 'property_max_wait_ms' with 'a_name'.
      do
        property_max_wait_ms := a_name
      ensure
        property_max_wait_ms_set: property_max_wait_ms = a_name		
      end

    set_property_max_rate (a_name: like property_max_rate)
        -- Set 'property_max_rate' with 'a_name'.
      do
        property_max_rate := a_name
      ensure
        property_max_rate_set: property_max_rate = a_name		
      end

    set_fulltext_measure_enabled (a_name: like fulltext_measure_enabled)
        -- Set 'fulltext_measure_enabled' with 'a_name'.
      do
        fulltext_measure_enabled := a_name
      ensure
        fulltext_measure_enabled_set: fulltext_measure_enabled = a_name		
      end

    set_fulltext_name (a_name: like fulltext_name)
        -- Set 'fulltext_name' with 'a_name'.
      do
        fulltext_name := a_name
      ensure
        fulltext_name_set: fulltext_name = a_name		
      end

    set_fulltext_max_wait_ms (a_name: like fulltext_max_wait_ms)
        -- Set 'fulltext_max_wait_ms' with 'a_name'.
      do
        fulltext_max_wait_ms := a_name
      ensure
        fulltext_max_wait_ms_set: fulltext_max_wait_ms = a_name		
      end

    set_fulltext_max_rate (a_name: like fulltext_max_rate)
        -- Set 'fulltext_max_rate' with 'a_name'.
      do
        fulltext_max_rate := a_name
      ensure
        fulltext_max_rate_set: fulltext_max_rate = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_DAY_CQ_DAM_CORE_IMPL_JMX_ASSET_INDEX_UPDATE_MONITOR_PROPERTIES%N")
        if attached jmx_objectname as l_jmx_objectname then
          Result.append ("%Njmx_objectname:")
          Result.append (l_jmx_objectname.out)
          Result.append ("%N")    
        end  
        if attached property_measure_enabled as l_property_measure_enabled then
          Result.append ("%Nproperty_measure_enabled:")
          Result.append (l_property_measure_enabled.out)
          Result.append ("%N")    
        end  
        if attached property_name as l_property_name then
          Result.append ("%Nproperty_name:")
          Result.append (l_property_name.out)
          Result.append ("%N")    
        end  
        if attached property_max_wait_ms as l_property_max_wait_ms then
          Result.append ("%Nproperty_max_wait_ms:")
          Result.append (l_property_max_wait_ms.out)
          Result.append ("%N")    
        end  
        if attached property_max_rate as l_property_max_rate then
          Result.append ("%Nproperty_max_rate:")
          Result.append (l_property_max_rate.out)
          Result.append ("%N")    
        end  
        if attached fulltext_measure_enabled as l_fulltext_measure_enabled then
          Result.append ("%Nfulltext_measure_enabled:")
          Result.append (l_fulltext_measure_enabled.out)
          Result.append ("%N")    
        end  
        if attached fulltext_name as l_fulltext_name then
          Result.append ("%Nfulltext_name:")
          Result.append (l_fulltext_name.out)
          Result.append ("%N")    
        end  
        if attached fulltext_max_wait_ms as l_fulltext_max_wait_ms then
          Result.append ("%Nfulltext_max_wait_ms:")
          Result.append (l_fulltext_max_wait_ms.out)
          Result.append ("%N")    
        end  
        if attached fulltext_max_rate as l_fulltext_max_rate then
          Result.append ("%Nfulltext_max_rate:")
          Result.append (l_fulltext_max_rate.out)
          Result.append ("%N")    
        end  
      end
end

