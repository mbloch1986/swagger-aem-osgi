--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_jackrabbit_oak_plugins_index_lucene_lucene_index_provider_serv_properties class
local org_apache_jackrabbit_oak_plugins_index_lucene_lucene_index_provider_serv_properties = {}
local org_apache_jackrabbit_oak_plugins_index_lucene_lucene_index_provider_serv_properties_mt = {
	__name = "org_apache_jackrabbit_oak_plugins_index_lucene_lucene_index_provider_serv_properties";
	__index = org_apache_jackrabbit_oak_plugins_index_lucene_lucene_index_provider_serv_properties;
}

local function cast_org_apache_jackrabbit_oak_plugins_index_lucene_lucene_index_provider_serv_properties(t)
	return setmetatable(t, org_apache_jackrabbit_oak_plugins_index_lucene_lucene_index_provider_serv_properties_mt)
end

local function new_org_apache_jackrabbit_oak_plugins_index_lucene_lucene_index_provider_serv_properties(disabled, debug, local_index_dir, enable_open_index_async, thread_pool_size, prefetch_index_files, extracted_text_cache_size_in_mb, extracted_text_cache_expiry_in_secs, always_use_pre_extracted_cache, boolean_clause_limit, enable_hybrid_indexing, hybrid_queue_size, disable_stored_index_definition, deleted_blobs_collection_enabled, prop_index_cleaner_interval_in_secs, enable_single_blob_index_files)
	return cast_org_apache_jackrabbit_oak_plugins_index_lucene_lucene_index_provider_serv_properties({
		["disabled"] = disabled;
		["debug"] = debug;
		["localIndexDir"] = local_index_dir;
		["enableOpenIndexAsync"] = enable_open_index_async;
		["threadPoolSize"] = thread_pool_size;
		["prefetchIndexFiles"] = prefetch_index_files;
		["extractedTextCacheSizeInMB"] = extracted_text_cache_size_in_mb;
		["extractedTextCacheExpiryInSecs"] = extracted_text_cache_expiry_in_secs;
		["alwaysUsePreExtractedCache"] = always_use_pre_extracted_cache;
		["booleanClauseLimit"] = boolean_clause_limit;
		["enableHybridIndexing"] = enable_hybrid_indexing;
		["hybridQueueSize"] = hybrid_queue_size;
		["disableStoredIndexDefinition"] = disable_stored_index_definition;
		["deletedBlobsCollectionEnabled"] = deleted_blobs_collection_enabled;
		["propIndexCleanerIntervalInSecs"] = prop_index_cleaner_interval_in_secs;
		["enableSingleBlobIndexFiles"] = enable_single_blob_index_files;
	})
end

return {
	cast = cast_org_apache_jackrabbit_oak_plugins_index_lucene_lucene_index_provider_serv_properties;
	new = new_org_apache_jackrabbit_oak_plugins_index_lucene_lucene_index_provider_serv_properties;
}
