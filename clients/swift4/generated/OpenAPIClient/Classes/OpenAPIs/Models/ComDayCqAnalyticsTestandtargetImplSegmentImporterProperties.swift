//
// ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties: Codable {

    public var cqAnalyticsTestandtargetSegmentimporterEnabled: ConfigNodePropertyBoolean?

    public init(cqAnalyticsTestandtargetSegmentimporterEnabled: ConfigNodePropertyBoolean?) {
        self.cqAnalyticsTestandtargetSegmentimporterEnabled = cqAnalyticsTestandtargetSegmentimporterEnabled
    }

    public enum CodingKeys: String, CodingKey { 
        case cqAnalyticsTestandtargetSegmentimporterEnabled = "cq.analytics.testandtarget.segmentimporter.enabled"
    }


}

