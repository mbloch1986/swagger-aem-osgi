//
// ComDayCqDamCoreImplServletGuidLookupFilterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqDamCoreImplServletGuidLookupFilterProperties: JSONEncodable {

    public var cqDamCoreGuidlookupfilterEnabled: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["cq.dam.core.guidlookupfilter.enabled"] = self.cqDamCoreGuidlookupfilterEnabled?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
