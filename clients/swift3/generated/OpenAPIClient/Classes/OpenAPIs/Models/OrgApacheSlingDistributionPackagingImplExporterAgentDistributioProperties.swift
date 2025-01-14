//
// OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingDistributionPackagingImplExporterAgentDistributioProperties: JSONEncodable {

    public var name: ConfigNodePropertyString?
    public var queue: ConfigNodePropertyString?
    public var dropInvalidItems: ConfigNodePropertyBoolean?
    public var agentTarget: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["name"] = self.name?.encodeToJSON()
        nillableDictionary["queue"] = self.queue?.encodeToJSON()
        nillableDictionary["drop.invalid.items"] = self.dropInvalidItems?.encodeToJSON()
        nillableDictionary["agent.target"] = self.agentTarget?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

