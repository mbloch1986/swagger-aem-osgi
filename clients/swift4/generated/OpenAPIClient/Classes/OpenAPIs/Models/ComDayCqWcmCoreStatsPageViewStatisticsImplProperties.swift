//
// ComDayCqWcmCoreStatsPageViewStatisticsImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqWcmCoreStatsPageViewStatisticsImplProperties: Codable {

    public var pageviewstatisticsTrackingurl: ConfigNodePropertyString?
    public var pageviewstatisticsTrackingscriptEnabled: ConfigNodePropertyString?

    public init(pageviewstatisticsTrackingurl: ConfigNodePropertyString?, pageviewstatisticsTrackingscriptEnabled: ConfigNodePropertyString?) {
        self.pageviewstatisticsTrackingurl = pageviewstatisticsTrackingurl
        self.pageviewstatisticsTrackingscriptEnabled = pageviewstatisticsTrackingscriptEnabled
    }

    public enum CodingKeys: String, CodingKey { 
        case pageviewstatisticsTrackingurl = "pageviewstatistics.trackingurl"
        case pageviewstatisticsTrackingscriptEnabled = "pageviewstatistics.trackingscript.enabled"
    }


}

