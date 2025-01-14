//
// OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties: JSONEncodable {

    public var name: ConfigNodePropertyString?
    public var type: ConfigNodePropertyDropDown?
    public var formatTarget: ConfigNodePropertyString?
    public var tempFsFolder: ConfigNodePropertyString?
    public var fileThreshold: ConfigNodePropertyInteger?
    public var memoryUnit: ConfigNodePropertyDropDown?
    public var useOffHeapMemory: ConfigNodePropertyBoolean?
    public var digestAlgorithm: ConfigNodePropertyDropDown?
    public var monitoringQueueSize: ConfigNodePropertyInteger?
    public var cleanupDelay: ConfigNodePropertyInteger?
    public var packageFilters: ConfigNodePropertyArray?
    public var propertyFilters: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["name"] = self.name?.encodeToJSON()
        nillableDictionary["type"] = self.type?.encodeToJSON()
        nillableDictionary["format.target"] = self.formatTarget?.encodeToJSON()
        nillableDictionary["tempFsFolder"] = self.tempFsFolder?.encodeToJSON()
        nillableDictionary["fileThreshold"] = self.fileThreshold?.encodeToJSON()
        nillableDictionary["memoryUnit"] = self.memoryUnit?.encodeToJSON()
        nillableDictionary["useOffHeapMemory"] = self.useOffHeapMemory?.encodeToJSON()
        nillableDictionary["digestAlgorithm"] = self.digestAlgorithm?.encodeToJSON()
        nillableDictionary["monitoringQueueSize"] = self.monitoringQueueSize?.encodeToJSON()
        nillableDictionary["cleanupDelay"] = self.cleanupDelay?.encodeToJSON()
        nillableDictionary["package.filters"] = self.packageFilters?.encodeToJSON()
        nillableDictionary["property.filters"] = self.propertyFilters?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

