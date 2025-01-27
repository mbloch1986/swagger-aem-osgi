/*
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * API version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type OrgApacheJackrabbitOakSegmentSegmentNodeStoreServiceProperties struct {
	RepositoryHome ConfigNodePropertyString `json:"repository.home,omitempty"`
	TarmkMode ConfigNodePropertyString `json:"tarmk.mode,omitempty"`
	TarmkSize ConfigNodePropertyInteger `json:"tarmk.size,omitempty"`
	SegmentCacheSize ConfigNodePropertyInteger `json:"segmentCache.size,omitempty"`
	StringCacheSize ConfigNodePropertyInteger `json:"stringCache.size,omitempty"`
	TemplateCacheSize ConfigNodePropertyInteger `json:"templateCache.size,omitempty"`
	StringDeduplicationCacheSize ConfigNodePropertyInteger `json:"stringDeduplicationCache.size,omitempty"`
	TemplateDeduplicationCacheSize ConfigNodePropertyInteger `json:"templateDeduplicationCache.size,omitempty"`
	NodeDeduplicationCacheSize ConfigNodePropertyInteger `json:"nodeDeduplicationCache.size,omitempty"`
	PauseCompaction ConfigNodePropertyBoolean `json:"pauseCompaction,omitempty"`
	CompactionRetryCount ConfigNodePropertyInteger `json:"compaction.retryCount,omitempty"`
	CompactionForceTimeout ConfigNodePropertyInteger `json:"compaction.force.timeout,omitempty"`
	CompactionSizeDeltaEstimation ConfigNodePropertyInteger `json:"compaction.sizeDeltaEstimation,omitempty"`
	CompactionDisableEstimation ConfigNodePropertyBoolean `json:"compaction.disableEstimation,omitempty"`
	CompactionRetainedGenerations ConfigNodePropertyInteger `json:"compaction.retainedGenerations,omitempty"`
	CompactionMemoryThreshold ConfigNodePropertyInteger `json:"compaction.memoryThreshold,omitempty"`
	CompactionProgressLog ConfigNodePropertyInteger `json:"compaction.progressLog,omitempty"`
	Standby ConfigNodePropertyBoolean `json:"standby,omitempty"`
	CustomBlobStore ConfigNodePropertyBoolean `json:"customBlobStore,omitempty"`
	CustomSegmentStore ConfigNodePropertyBoolean `json:"customSegmentStore,omitempty"`
	SplitPersistence ConfigNodePropertyBoolean `json:"splitPersistence,omitempty"`
	RepositoryBackupDir ConfigNodePropertyString `json:"repository.backup.dir,omitempty"`
	BlobGcMaxAgeInSecs ConfigNodePropertyInteger `json:"blobGcMaxAgeInSecs,omitempty"`
	BlobTrackSnapshotIntervalInSecs ConfigNodePropertyInteger `json:"blobTrackSnapshotIntervalInSecs,omitempty"`
}
