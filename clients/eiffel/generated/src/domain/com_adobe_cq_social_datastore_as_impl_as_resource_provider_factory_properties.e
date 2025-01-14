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
class COM_ADOBE_CQ_SOCIAL_DATASTORE_AS_IMPL_AS_RESOURCE_PROVIDER_FACTORY_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    version_id: detachable CONFIG_NODE_PROPERTY_STRING 
      
    cache_on: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    concurrency_level: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    cache_start_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    cache_ttl: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    cache_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    time_limit: detachable CONFIG_NODE_PROPERTY_INTEGER 
      

feature -- Change Element  
 
    set_version_id (a_name: like version_id)
        -- Set 'version_id' with 'a_name'.
      do
        version_id := a_name
      ensure
        version_id_set: version_id = a_name		
      end

    set_cache_on (a_name: like cache_on)
        -- Set 'cache_on' with 'a_name'.
      do
        cache_on := a_name
      ensure
        cache_on_set: cache_on = a_name		
      end

    set_concurrency_level (a_name: like concurrency_level)
        -- Set 'concurrency_level' with 'a_name'.
      do
        concurrency_level := a_name
      ensure
        concurrency_level_set: concurrency_level = a_name		
      end

    set_cache_start_size (a_name: like cache_start_size)
        -- Set 'cache_start_size' with 'a_name'.
      do
        cache_start_size := a_name
      ensure
        cache_start_size_set: cache_start_size = a_name		
      end

    set_cache_ttl (a_name: like cache_ttl)
        -- Set 'cache_ttl' with 'a_name'.
      do
        cache_ttl := a_name
      ensure
        cache_ttl_set: cache_ttl = a_name		
      end

    set_cache_size (a_name: like cache_size)
        -- Set 'cache_size' with 'a_name'.
      do
        cache_size := a_name
      ensure
        cache_size_set: cache_size = a_name		
      end

    set_time_limit (a_name: like time_limit)
        -- Set 'time_limit' with 'a_name'.
      do
        time_limit := a_name
      ensure
        time_limit_set: time_limit = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass COM_ADOBE_CQ_SOCIAL_DATASTORE_AS_IMPL_AS_RESOURCE_PROVIDER_FACTORY_PROPERTIES%N")
        if attached version_id as l_version_id then
          Result.append ("%Nversion_id:")
          Result.append (l_version_id.out)
          Result.append ("%N")    
        end  
        if attached cache_on as l_cache_on then
          Result.append ("%Ncache_on:")
          Result.append (l_cache_on.out)
          Result.append ("%N")    
        end  
        if attached concurrency_level as l_concurrency_level then
          Result.append ("%Nconcurrency_level:")
          Result.append (l_concurrency_level.out)
          Result.append ("%N")    
        end  
        if attached cache_start_size as l_cache_start_size then
          Result.append ("%Ncache_start_size:")
          Result.append (l_cache_start_size.out)
          Result.append ("%N")    
        end  
        if attached cache_ttl as l_cache_ttl then
          Result.append ("%Ncache_ttl:")
          Result.append (l_cache_ttl.out)
          Result.append ("%N")    
        end  
        if attached cache_size as l_cache_size then
          Result.append ("%Ncache_size:")
          Result.append (l_cache_size.out)
          Result.append ("%N")    
        end  
        if attached time_limit as l_time_limit then
          Result.append ("%Ntime_limit:")
          Result.append (l_time_limit.out)
          Result.append ("%N")    
        end  
      end
end


