//
// ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteDistributionCoreImplReplicationDistributionTransProperties: Codable {

    public var forwardRequests: ConfigNodePropertyBoolean?

    public init(forwardRequests: ConfigNodePropertyBoolean?) {
        self.forwardRequests = forwardRequests
    }

    public enum CodingKeys: String, CodingKey { 
        case forwardRequests = "forward.requests"
    }


}
