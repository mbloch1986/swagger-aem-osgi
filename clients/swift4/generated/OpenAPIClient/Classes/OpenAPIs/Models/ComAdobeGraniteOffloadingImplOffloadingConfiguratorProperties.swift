//
// ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteOffloadingImplOffloadingConfiguratorProperties: Codable {

    public var offloadingTransporter: ConfigNodePropertyString?
    public var offloadingCleanupPayload: ConfigNodePropertyBoolean?

    public init(offloadingTransporter: ConfigNodePropertyString?, offloadingCleanupPayload: ConfigNodePropertyBoolean?) {
        self.offloadingTransporter = offloadingTransporter
        self.offloadingCleanupPayload = offloadingCleanupPayload
    }

    public enum CodingKeys: String, CodingKey { 
        case offloadingTransporter = "offloading.transporter"
        case offloadingCleanupPayload = "offloading.cleanup.payload"
    }


}

