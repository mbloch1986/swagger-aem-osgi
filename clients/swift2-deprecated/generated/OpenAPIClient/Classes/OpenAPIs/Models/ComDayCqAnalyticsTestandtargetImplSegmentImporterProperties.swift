//
// ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties: JSONEncodable {
    public var cqAnalyticsTestandtargetSegmentimporterEnabled: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["cq.analytics.testandtarget.segmentimporter.enabled"] = self.cqAnalyticsTestandtargetSegmentimporterEnabled?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
