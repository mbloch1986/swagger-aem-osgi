//
// OrgApacheFelixSystemreadySystemReadyMonitorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheFelixSystemreadySystemReadyMonitorProperties: JSONEncodable {

    public var pollInterval: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["poll.interval"] = self.pollInterval?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

