//
// ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqWcmCoreStatsPageViewStatisticsImplProperties: JSONEncodable {

    public var pageviewstatisticsTrackingurl: ConfigNodePropertyString?
    public var pageviewstatisticsTrackingscriptEnabled: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["pageviewstatistics.trackingurl"] = self.pageviewstatisticsTrackingurl?.encodeToJSON()
        nillableDictionary["pageviewstatistics.trackingscript.enabled"] = self.pageviewstatisticsTrackingscriptEnabled?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

