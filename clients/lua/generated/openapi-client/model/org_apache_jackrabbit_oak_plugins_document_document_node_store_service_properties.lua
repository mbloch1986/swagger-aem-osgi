--[[
  Adobe Experience Manager OSGI config (AEM) API
 
  Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 
  OpenAPI spec version: 1.0.0-pre.0
  Contact: opensource@shinesolutions.com
  Generated by: https://openapi-generator.tech
]]

-- org_apache_jackrabbit_oak_plugins_document_document_node_store_service_properties class
local org_apache_jackrabbit_oak_plugins_document_document_node_store_service_properties = {}
local org_apache_jackrabbit_oak_plugins_document_document_node_store_service_properties_mt = {
	__name = "org_apache_jackrabbit_oak_plugins_document_document_node_store_service_properties";
	__index = org_apache_jackrabbit_oak_plugins_document_document_node_store_service_properties;
}

local function cast_org_apache_jackrabbit_oak_plugins_document_document_node_store_service_properties(t)
	return setmetatable(t, org_apache_jackrabbit_oak_plugins_document_document_node_store_service_properties_mt)
end

local function new_org_apache_jackrabbit_oak_plugins_document_document_node_store_service_properties(mongouri, db, socket_keep_alive, cache, node_cache_percentage, prev_doc_cache_percentage, children_cache_percentage, diff_cache_percentage, cache_segment_count, cache_stack_move_distance, blob_cache_size, persistent_cache, journal_cache, custom_blob_store, journal_gc_interval, journal_gc_max_age, prefetch_external_changes, role, version_gc_max_age_in_secs, version_gc_expression, version_gc_time_limit_in_secs, blob_gc_max_age_in_secs, blob_track_snapshot_interval_in_secs, repository_home, max_replication_lag_in_secs, document_store_type, bundling_disabled, update_limit, persistent_cache_includes, lease_check_mode)
	return cast_org_apache_jackrabbit_oak_plugins_document_document_node_store_service_properties({
		["mongouri"] = mongouri;
		["db"] = db;
		["socketKeepAlive"] = socket_keep_alive;
		["cache"] = cache;
		["nodeCachePercentage"] = node_cache_percentage;
		["prevDocCachePercentage"] = prev_doc_cache_percentage;
		["childrenCachePercentage"] = children_cache_percentage;
		["diffCachePercentage"] = diff_cache_percentage;
		["cacheSegmentCount"] = cache_segment_count;
		["cacheStackMoveDistance"] = cache_stack_move_distance;
		["blobCacheSize"] = blob_cache_size;
		["persistentCache"] = persistent_cache;
		["journalCache"] = journal_cache;
		["customBlobStore"] = custom_blob_store;
		["journalGCInterval"] = journal_gc_interval;
		["journalGCMaxAge"] = journal_gc_max_age;
		["prefetchExternalChanges"] = prefetch_external_changes;
		["role"] = role;
		["versionGcMaxAgeInSecs"] = version_gc_max_age_in_secs;
		["versionGCExpression"] = version_gc_expression;
		["versionGCTimeLimitInSecs"] = version_gc_time_limit_in_secs;
		["blobGcMaxAgeInSecs"] = blob_gc_max_age_in_secs;
		["blobTrackSnapshotIntervalInSecs"] = blob_track_snapshot_interval_in_secs;
		["repository.home"] = repository_home;
		["maxReplicationLagInSecs"] = max_replication_lag_in_secs;
		["documentStoreType"] = document_store_type;
		["bundlingDisabled"] = bundling_disabled;
		["updateLimit"] = update_limit;
		["persistentCacheIncludes"] = persistent_cache_includes;
		["leaseCheckMode"] = lease_check_mode;
	})
end

return {
	cast = cast_org_apache_jackrabbit_oak_plugins_document_document_node_store_service_properties;
	new = new_org_apache_jackrabbit_oak_plugins_document_document_node_store_service_properties;
}
