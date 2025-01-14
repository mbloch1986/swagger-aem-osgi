//
// ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteReplicationHcImplReplicationQueueHealthCheckProperties: Codable {

    public var numberOfRetriesAllowed: ConfigNodePropertyInteger?
    public var hcTags: ConfigNodePropertyArray?

    public init(numberOfRetriesAllowed: ConfigNodePropertyInteger?, hcTags: ConfigNodePropertyArray?) {
        self.numberOfRetriesAllowed = numberOfRetriesAllowed
        self.hcTags = hcTags
    }

    public enum CodingKeys: String, CodingKey { 
        case numberOfRetriesAllowed = "number.of.retries.allowed"
        case hcTags = "hc.tags"
    }


}

