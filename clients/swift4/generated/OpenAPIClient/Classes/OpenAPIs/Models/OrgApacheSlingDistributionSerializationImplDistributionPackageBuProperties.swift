//
// OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheSlingDistributionSerializationImplDistributionPackageBuProperties: Codable {

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

    public init(name: ConfigNodePropertyString?, type: ConfigNodePropertyDropDown?, formatTarget: ConfigNodePropertyString?, tempFsFolder: ConfigNodePropertyString?, fileThreshold: ConfigNodePropertyInteger?, memoryUnit: ConfigNodePropertyDropDown?, useOffHeapMemory: ConfigNodePropertyBoolean?, digestAlgorithm: ConfigNodePropertyDropDown?, monitoringQueueSize: ConfigNodePropertyInteger?, cleanupDelay: ConfigNodePropertyInteger?, packageFilters: ConfigNodePropertyArray?, propertyFilters: ConfigNodePropertyArray?) {
        self.name = name
        self.type = type
        self.formatTarget = formatTarget
        self.tempFsFolder = tempFsFolder
        self.fileThreshold = fileThreshold
        self.memoryUnit = memoryUnit
        self.useOffHeapMemory = useOffHeapMemory
        self.digestAlgorithm = digestAlgorithm
        self.monitoringQueueSize = monitoringQueueSize
        self.cleanupDelay = cleanupDelay
        self.packageFilters = packageFilters
        self.propertyFilters = propertyFilters
    }

    public enum CodingKeys: String, CodingKey { 
        case name
        case type
        case formatTarget = "format.target"
        case tempFsFolder
        case fileThreshold
        case memoryUnit
        case useOffHeapMemory
        case digestAlgorithm
        case monitoringQueueSize
        case cleanupDelay
        case packageFilters = "package.filters"
        case propertyFilters = "property.filters"
    }


}
