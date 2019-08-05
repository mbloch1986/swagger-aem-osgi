//
// OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheJackrabbitOakSegmentSegmentNodeStoreFactoryProperties: JSONEncodable {
    public var repositoryHome: ConfigNodePropertyString?
    public var tarmkMode: ConfigNodePropertyString?
    public var tarmkSize: ConfigNodePropertyInteger?
    public var segmentCacheSize: ConfigNodePropertyInteger?
    public var stringCacheSize: ConfigNodePropertyInteger?
    public var templateCacheSize: ConfigNodePropertyInteger?
    public var stringDeduplicationCacheSize: ConfigNodePropertyInteger?
    public var templateDeduplicationCacheSize: ConfigNodePropertyInteger?
    public var nodeDeduplicationCacheSize: ConfigNodePropertyInteger?
    public var pauseCompaction: ConfigNodePropertyBoolean?
    public var compactionRetryCount: ConfigNodePropertyInteger?
    public var compactionForceTimeout: ConfigNodePropertyInteger?
    public var compactionSizeDeltaEstimation: ConfigNodePropertyInteger?
    public var compactionDisableEstimation: ConfigNodePropertyBoolean?
    public var compactionRetainedGenerations: ConfigNodePropertyInteger?
    public var compactionMemoryThreshold: ConfigNodePropertyInteger?
    public var compactionProgressLog: ConfigNodePropertyInteger?
    public var standby: ConfigNodePropertyBoolean?
    public var customBlobStore: ConfigNodePropertyBoolean?
    public var customSegmentStore: ConfigNodePropertyBoolean?
    public var splitPersistence: ConfigNodePropertyBoolean?
    public var repositoryBackupDir: ConfigNodePropertyString?
    public var blobGcMaxAgeInSecs: ConfigNodePropertyInteger?
    public var blobTrackSnapshotIntervalInSecs: ConfigNodePropertyInteger?
    public var role: ConfigNodePropertyString?
    public var registerDescriptors: ConfigNodePropertyBoolean?
    public var dispatchChanges: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["repository.home"] = self.repositoryHome?.encodeToJSON()
        nillableDictionary["tarmk.mode"] = self.tarmkMode?.encodeToJSON()
        nillableDictionary["tarmk.size"] = self.tarmkSize?.encodeToJSON()
        nillableDictionary["segmentCache.size"] = self.segmentCacheSize?.encodeToJSON()
        nillableDictionary["stringCache.size"] = self.stringCacheSize?.encodeToJSON()
        nillableDictionary["templateCache.size"] = self.templateCacheSize?.encodeToJSON()
        nillableDictionary["stringDeduplicationCache.size"] = self.stringDeduplicationCacheSize?.encodeToJSON()
        nillableDictionary["templateDeduplicationCache.size"] = self.templateDeduplicationCacheSize?.encodeToJSON()
        nillableDictionary["nodeDeduplicationCache.size"] = self.nodeDeduplicationCacheSize?.encodeToJSON()
        nillableDictionary["pauseCompaction"] = self.pauseCompaction?.encodeToJSON()
        nillableDictionary["compaction.retryCount"] = self.compactionRetryCount?.encodeToJSON()
        nillableDictionary["compaction.force.timeout"] = self.compactionForceTimeout?.encodeToJSON()
        nillableDictionary["compaction.sizeDeltaEstimation"] = self.compactionSizeDeltaEstimation?.encodeToJSON()
        nillableDictionary["compaction.disableEstimation"] = self.compactionDisableEstimation?.encodeToJSON()
        nillableDictionary["compaction.retainedGenerations"] = self.compactionRetainedGenerations?.encodeToJSON()
        nillableDictionary["compaction.memoryThreshold"] = self.compactionMemoryThreshold?.encodeToJSON()
        nillableDictionary["compaction.progressLog"] = self.compactionProgressLog?.encodeToJSON()
        nillableDictionary["standby"] = self.standby?.encodeToJSON()
        nillableDictionary["customBlobStore"] = self.customBlobStore?.encodeToJSON()
        nillableDictionary["customSegmentStore"] = self.customSegmentStore?.encodeToJSON()
        nillableDictionary["splitPersistence"] = self.splitPersistence?.encodeToJSON()
        nillableDictionary["repository.backup.dir"] = self.repositoryBackupDir?.encodeToJSON()
        nillableDictionary["blobGcMaxAgeInSecs"] = self.blobGcMaxAgeInSecs?.encodeToJSON()
        nillableDictionary["blobTrackSnapshotIntervalInSecs"] = self.blobTrackSnapshotIntervalInSecs?.encodeToJSON()
        nillableDictionary["role"] = self.role?.encodeToJSON()
        nillableDictionary["registerDescriptors"] = self.registerDescriptors?.encodeToJSON()
        nillableDictionary["dispatchChanges"] = self.dispatchChanges?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}