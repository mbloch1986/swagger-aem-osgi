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
class ORG_APACHE_SLING_COMMONS_THREADS_IMPL_DEFAULT_THREAD_POOL_FACTORY_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    name: detachable CONFIG_NODE_PROPERTY_STRING 
      
    min_pool_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    max_pool_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    queue_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    max_thread_age: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    keep_alive_time: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    block_policy: detachable CONFIG_NODE_PROPERTY_DROP_DOWN 
      
    shutdown_graceful: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    daemon: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    shutdown_wait_time: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    priority: detachable CONFIG_NODE_PROPERTY_DROP_DOWN 
      

feature -- Change Element  
 
    set_name (a_name: like name)
        -- Set 'name' with 'a_name'.
      do
        name := a_name
      ensure
        name_set: name = a_name		
      end

    set_min_pool_size (a_name: like min_pool_size)
        -- Set 'min_pool_size' with 'a_name'.
      do
        min_pool_size := a_name
      ensure
        min_pool_size_set: min_pool_size = a_name		
      end

    set_max_pool_size (a_name: like max_pool_size)
        -- Set 'max_pool_size' with 'a_name'.
      do
        max_pool_size := a_name
      ensure
        max_pool_size_set: max_pool_size = a_name		
      end

    set_queue_size (a_name: like queue_size)
        -- Set 'queue_size' with 'a_name'.
      do
        queue_size := a_name
      ensure
        queue_size_set: queue_size = a_name		
      end

    set_max_thread_age (a_name: like max_thread_age)
        -- Set 'max_thread_age' with 'a_name'.
      do
        max_thread_age := a_name
      ensure
        max_thread_age_set: max_thread_age = a_name		
      end

    set_keep_alive_time (a_name: like keep_alive_time)
        -- Set 'keep_alive_time' with 'a_name'.
      do
        keep_alive_time := a_name
      ensure
        keep_alive_time_set: keep_alive_time = a_name		
      end

    set_block_policy (a_name: like block_policy)
        -- Set 'block_policy' with 'a_name'.
      do
        block_policy := a_name
      ensure
        block_policy_set: block_policy = a_name		
      end

    set_shutdown_graceful (a_name: like shutdown_graceful)
        -- Set 'shutdown_graceful' with 'a_name'.
      do
        shutdown_graceful := a_name
      ensure
        shutdown_graceful_set: shutdown_graceful = a_name		
      end

    set_daemon (a_name: like daemon)
        -- Set 'daemon' with 'a_name'.
      do
        daemon := a_name
      ensure
        daemon_set: daemon = a_name		
      end

    set_shutdown_wait_time (a_name: like shutdown_wait_time)
        -- Set 'shutdown_wait_time' with 'a_name'.
      do
        shutdown_wait_time := a_name
      ensure
        shutdown_wait_time_set: shutdown_wait_time = a_name		
      end

    set_priority (a_name: like priority)
        -- Set 'priority' with 'a_name'.
      do
        priority := a_name
      ensure
        priority_set: priority = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_SLING_COMMONS_THREADS_IMPL_DEFAULT_THREAD_POOL_FACTORY_PROPERTIES%N")
        if attached name as l_name then
          Result.append ("%Nname:")
          Result.append (l_name.out)
          Result.append ("%N")    
        end  
        if attached min_pool_size as l_min_pool_size then
          Result.append ("%Nmin_pool_size:")
          Result.append (l_min_pool_size.out)
          Result.append ("%N")    
        end  
        if attached max_pool_size as l_max_pool_size then
          Result.append ("%Nmax_pool_size:")
          Result.append (l_max_pool_size.out)
          Result.append ("%N")    
        end  
        if attached queue_size as l_queue_size then
          Result.append ("%Nqueue_size:")
          Result.append (l_queue_size.out)
          Result.append ("%N")    
        end  
        if attached max_thread_age as l_max_thread_age then
          Result.append ("%Nmax_thread_age:")
          Result.append (l_max_thread_age.out)
          Result.append ("%N")    
        end  
        if attached keep_alive_time as l_keep_alive_time then
          Result.append ("%Nkeep_alive_time:")
          Result.append (l_keep_alive_time.out)
          Result.append ("%N")    
        end  
        if attached block_policy as l_block_policy then
          Result.append ("%Nblock_policy:")
          Result.append (l_block_policy.out)
          Result.append ("%N")    
        end  
        if attached shutdown_graceful as l_shutdown_graceful then
          Result.append ("%Nshutdown_graceful:")
          Result.append (l_shutdown_graceful.out)
          Result.append ("%N")    
        end  
        if attached daemon as l_daemon then
          Result.append ("%Ndaemon:")
          Result.append (l_daemon.out)
          Result.append ("%N")    
        end  
        if attached shutdown_wait_time as l_shutdown_wait_time then
          Result.append ("%Nshutdown_wait_time:")
          Result.append (l_shutdown_wait_time.out)
          Result.append ("%N")    
        end  
        if attached priority as l_priority then
          Result.append ("%Npriority:")
          Result.append (l_priority.out)
          Result.append ("%N")    
        end  
      end
end


