//
// ComDayCqReplicationImplReverseReplicatorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqReplicationImplReverseReplicatorProperties: Codable {

    public var schedulerPeriod: ConfigNodePropertyInteger?

    public init(schedulerPeriod: ConfigNodePropertyInteger?) {
        self.schedulerPeriod = schedulerPeriod
    }

    public enum CodingKeys: String, CodingKey { 
        case schedulerPeriod = "scheduler.period"
    }


}

