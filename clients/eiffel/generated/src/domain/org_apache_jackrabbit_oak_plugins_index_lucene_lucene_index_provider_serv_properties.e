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
class ORG_APACHE_JACKRABBIT_OAK_PLUGINS_INDEX_LUCENE_LUCENE_INDEX_PROVIDER_SERV_PROPERTIES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    disabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    var_debug: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    local_index_dir: detachable CONFIG_NODE_PROPERTY_STRING 
      
    enable_open_index_async: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    thread_pool_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    prefetch_index_files: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    extracted_text_cache_size_in_mb: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    extracted_text_cache_expiry_in_secs: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    always_use_pre_extracted_cache: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    boolean_clause_limit: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    enable_hybrid_indexing: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    hybrid_queue_size: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    disable_stored_index_definition: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    deleted_blobs_collection_enabled: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      
    prop_index_cleaner_interval_in_secs: detachable CONFIG_NODE_PROPERTY_INTEGER 
      
    enable_single_blob_index_files: detachable CONFIG_NODE_PROPERTY_BOOLEAN 
      

feature -- Change Element  
 
    set_disabled (a_name: like disabled)
        -- Set 'disabled' with 'a_name'.
      do
        disabled := a_name
      ensure
        disabled_set: disabled = a_name		
      end

    set_var_debug (a_name: like var_debug)
        -- Set 'var_debug' with 'a_name'.
      do
        var_debug := a_name
      ensure
        var_debug_set: var_debug = a_name		
      end

    set_local_index_dir (a_name: like local_index_dir)
        -- Set 'local_index_dir' with 'a_name'.
      do
        local_index_dir := a_name
      ensure
        local_index_dir_set: local_index_dir = a_name		
      end

    set_enable_open_index_async (a_name: like enable_open_index_async)
        -- Set 'enable_open_index_async' with 'a_name'.
      do
        enable_open_index_async := a_name
      ensure
        enable_open_index_async_set: enable_open_index_async = a_name		
      end

    set_thread_pool_size (a_name: like thread_pool_size)
        -- Set 'thread_pool_size' with 'a_name'.
      do
        thread_pool_size := a_name
      ensure
        thread_pool_size_set: thread_pool_size = a_name		
      end

    set_prefetch_index_files (a_name: like prefetch_index_files)
        -- Set 'prefetch_index_files' with 'a_name'.
      do
        prefetch_index_files := a_name
      ensure
        prefetch_index_files_set: prefetch_index_files = a_name		
      end

    set_extracted_text_cache_size_in_mb (a_name: like extracted_text_cache_size_in_mb)
        -- Set 'extracted_text_cache_size_in_mb' with 'a_name'.
      do
        extracted_text_cache_size_in_mb := a_name
      ensure
        extracted_text_cache_size_in_mb_set: extracted_text_cache_size_in_mb = a_name		
      end

    set_extracted_text_cache_expiry_in_secs (a_name: like extracted_text_cache_expiry_in_secs)
        -- Set 'extracted_text_cache_expiry_in_secs' with 'a_name'.
      do
        extracted_text_cache_expiry_in_secs := a_name
      ensure
        extracted_text_cache_expiry_in_secs_set: extracted_text_cache_expiry_in_secs = a_name		
      end

    set_always_use_pre_extracted_cache (a_name: like always_use_pre_extracted_cache)
        -- Set 'always_use_pre_extracted_cache' with 'a_name'.
      do
        always_use_pre_extracted_cache := a_name
      ensure
        always_use_pre_extracted_cache_set: always_use_pre_extracted_cache = a_name		
      end

    set_boolean_clause_limit (a_name: like boolean_clause_limit)
        -- Set 'boolean_clause_limit' with 'a_name'.
      do
        boolean_clause_limit := a_name
      ensure
        boolean_clause_limit_set: boolean_clause_limit = a_name		
      end

    set_enable_hybrid_indexing (a_name: like enable_hybrid_indexing)
        -- Set 'enable_hybrid_indexing' with 'a_name'.
      do
        enable_hybrid_indexing := a_name
      ensure
        enable_hybrid_indexing_set: enable_hybrid_indexing = a_name		
      end

    set_hybrid_queue_size (a_name: like hybrid_queue_size)
        -- Set 'hybrid_queue_size' with 'a_name'.
      do
        hybrid_queue_size := a_name
      ensure
        hybrid_queue_size_set: hybrid_queue_size = a_name		
      end

    set_disable_stored_index_definition (a_name: like disable_stored_index_definition)
        -- Set 'disable_stored_index_definition' with 'a_name'.
      do
        disable_stored_index_definition := a_name
      ensure
        disable_stored_index_definition_set: disable_stored_index_definition = a_name		
      end

    set_deleted_blobs_collection_enabled (a_name: like deleted_blobs_collection_enabled)
        -- Set 'deleted_blobs_collection_enabled' with 'a_name'.
      do
        deleted_blobs_collection_enabled := a_name
      ensure
        deleted_blobs_collection_enabled_set: deleted_blobs_collection_enabled = a_name		
      end

    set_prop_index_cleaner_interval_in_secs (a_name: like prop_index_cleaner_interval_in_secs)
        -- Set 'prop_index_cleaner_interval_in_secs' with 'a_name'.
      do
        prop_index_cleaner_interval_in_secs := a_name
      ensure
        prop_index_cleaner_interval_in_secs_set: prop_index_cleaner_interval_in_secs = a_name		
      end

    set_enable_single_blob_index_files (a_name: like enable_single_blob_index_files)
        -- Set 'enable_single_blob_index_files' with 'a_name'.
      do
        enable_single_blob_index_files := a_name
      ensure
        enable_single_blob_index_files_set: enable_single_blob_index_files = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass ORG_APACHE_JACKRABBIT_OAK_PLUGINS_INDEX_LUCENE_LUCENE_INDEX_PROVIDER_SERV_PROPERTIES%N")
        if attached disabled as l_disabled then
          Result.append ("%Ndisabled:")
          Result.append (l_disabled.out)
          Result.append ("%N")    
        end  
        if attached var_debug as l_var_debug then
          Result.append ("%Nvar_debug:")
          Result.append (l_var_debug.out)
          Result.append ("%N")    
        end  
        if attached local_index_dir as l_local_index_dir then
          Result.append ("%Nlocal_index_dir:")
          Result.append (l_local_index_dir.out)
          Result.append ("%N")    
        end  
        if attached enable_open_index_async as l_enable_open_index_async then
          Result.append ("%Nenable_open_index_async:")
          Result.append (l_enable_open_index_async.out)
          Result.append ("%N")    
        end  
        if attached thread_pool_size as l_thread_pool_size then
          Result.append ("%Nthread_pool_size:")
          Result.append (l_thread_pool_size.out)
          Result.append ("%N")    
        end  
        if attached prefetch_index_files as l_prefetch_index_files then
          Result.append ("%Nprefetch_index_files:")
          Result.append (l_prefetch_index_files.out)
          Result.append ("%N")    
        end  
        if attached extracted_text_cache_size_in_mb as l_extracted_text_cache_size_in_mb then
          Result.append ("%Nextracted_text_cache_size_in_mb:")
          Result.append (l_extracted_text_cache_size_in_mb.out)
          Result.append ("%N")    
        end  
        if attached extracted_text_cache_expiry_in_secs as l_extracted_text_cache_expiry_in_secs then
          Result.append ("%Nextracted_text_cache_expiry_in_secs:")
          Result.append (l_extracted_text_cache_expiry_in_secs.out)
          Result.append ("%N")    
        end  
        if attached always_use_pre_extracted_cache as l_always_use_pre_extracted_cache then
          Result.append ("%Nalways_use_pre_extracted_cache:")
          Result.append (l_always_use_pre_extracted_cache.out)
          Result.append ("%N")    
        end  
        if attached boolean_clause_limit as l_boolean_clause_limit then
          Result.append ("%Nboolean_clause_limit:")
          Result.append (l_boolean_clause_limit.out)
          Result.append ("%N")    
        end  
        if attached enable_hybrid_indexing as l_enable_hybrid_indexing then
          Result.append ("%Nenable_hybrid_indexing:")
          Result.append (l_enable_hybrid_indexing.out)
          Result.append ("%N")    
        end  
        if attached hybrid_queue_size as l_hybrid_queue_size then
          Result.append ("%Nhybrid_queue_size:")
          Result.append (l_hybrid_queue_size.out)
          Result.append ("%N")    
        end  
        if attached disable_stored_index_definition as l_disable_stored_index_definition then
          Result.append ("%Ndisable_stored_index_definition:")
          Result.append (l_disable_stored_index_definition.out)
          Result.append ("%N")    
        end  
        if attached deleted_blobs_collection_enabled as l_deleted_blobs_collection_enabled then
          Result.append ("%Ndeleted_blobs_collection_enabled:")
          Result.append (l_deleted_blobs_collection_enabled.out)
          Result.append ("%N")    
        end  
        if attached prop_index_cleaner_interval_in_secs as l_prop_index_cleaner_interval_in_secs then
          Result.append ("%Nprop_index_cleaner_interval_in_secs:")
          Result.append (l_prop_index_cleaner_interval_in_secs.out)
          Result.append ("%N")    
        end  
        if attached enable_single_blob_index_files as l_enable_single_blob_index_files then
          Result.append ("%Nenable_single_blob_index_files:")
          Result.append (l_enable_single_blob_index_files.out)
          Result.append ("%N")    
        end  
      end
end


