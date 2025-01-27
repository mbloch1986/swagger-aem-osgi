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
class COM_ADOBE_CQ_DAM_MAC_SYNC_IMPL_DAM_SYNC_SERVICE_IMPL_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths: detachable CONFIG_NODE_PROPERTY_ARRAY 
      
    com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    com_adobe_cq_dam_mac_sync_damsyncservice_platform: detachable CONFIG_NODE_PROPERTY_DROP_DOWN 
      

feature -- Change Element  
 
    set_com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths (a_name: like com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths)
        -- Set 'com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths' with 'a_name'.
      do
        com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths := a_name
      ensure
        com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths_set: com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths = a_name		
      end

    set_com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions (a_name: like com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions)
        -- Set 'com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions' with 'a_name'.
      do
        com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions := a_name
      ensure
        com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions_set: com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions = a_name		
      end

    set_com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms (a_name: like com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms)
        -- Set 'com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms' with 'a_name'.
      do
        com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms := a_name
      ensure
        com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms_set: com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms = a_name		
      end

    set_com_adobe_cq_dam_mac_sync_damsyncservice_platform (a_name: like com_adobe_cq_dam_mac_sync_damsyncservice_platform)
        -- Set 'com_adobe_cq_dam_mac_sync_damsyncservice_platform' with 'a_name'.
      do
        com_adobe_cq_dam_mac_sync_damsyncservice_platform := a_name
      ensure
        com_adobe_cq_dam_mac_sync_damsyncservice_platform_set: com_adobe_cq_dam_mac_sync_damsyncservice_platform = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_DAM_MAC_SYNC_IMPL_DAM_SYNC_SERVICE_IMPL_PROPERTIES%N")
        if attached com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths as l_com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths then
          Result.append ("%Ncom_adobe_cq_dam_mac_sync_damsyncservice_registered_paths:")
          Result.append (l_com_adobe_cq_dam_mac_sync_damsyncservice_registered_paths.out)
          Result.append ("%N")    
        end  
        if attached com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions as l_com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions then
          Result.append ("%Ncom_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions:")
          Result.append (l_com_adobe_cq_dam_mac_sync_damsyncservice_sync_renditions.out)
          Result.append ("%N")    
        end  
        if attached com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms as l_com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms then
          Result.append ("%Ncom_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms:")
          Result.append (l_com_adobe_cq_dam_mac_sync_damsyncservice_replicate_thread_wait_ms.out)
          Result.append ("%N")    
        end  
        if attached com_adobe_cq_dam_mac_sync_damsyncservice_platform as l_com_adobe_cq_dam_mac_sync_damsyncservice_platform then
          Result.append ("%Ncom_adobe_cq_dam_mac_sync_damsyncservice_platform:")
          Result.append (l_com_adobe_cq_dam_mac_sync_damsyncservice_platform.out)
          Result.append ("%N")    
        end  
      end
end


