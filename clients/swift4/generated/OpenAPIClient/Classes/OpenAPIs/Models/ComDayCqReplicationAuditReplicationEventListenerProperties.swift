//
// ComDayCqReplicationAuditReplicationEventListenerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqReplicationAuditReplicationEventListenerProperties: Codable {

    public var serviceRanking: ConfigNodePropertyInteger?

    public init(serviceRanking: ConfigNodePropertyInteger?) {
        self.serviceRanking = serviceRanking
    }

    public enum CodingKeys: String, CodingKey { 
        case serviceRanking = "service.ranking"
    }


}

