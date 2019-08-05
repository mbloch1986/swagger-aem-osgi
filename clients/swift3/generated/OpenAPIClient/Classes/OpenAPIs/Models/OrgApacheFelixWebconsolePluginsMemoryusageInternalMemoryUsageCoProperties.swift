//
// OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheFelixWebconsolePluginsMemoryusageInternalMemoryUsageCoProperties: JSONEncodable {

    public var felixMemoryusageDumpThreshold: ConfigNodePropertyInteger?
    public var felixMemoryusageDumpInterval: ConfigNodePropertyInteger?
    public var felixMemoryusageDumpLocation: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["felix.memoryusage.dump.threshold"] = self.felixMemoryusageDumpThreshold?.encodeToJSON()
        nillableDictionary["felix.memoryusage.dump.interval"] = self.felixMemoryusageDumpInterval?.encodeToJSON()
        nillableDictionary["felix.memoryusage.dump.location"] = self.felixMemoryusageDumpLocation?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
