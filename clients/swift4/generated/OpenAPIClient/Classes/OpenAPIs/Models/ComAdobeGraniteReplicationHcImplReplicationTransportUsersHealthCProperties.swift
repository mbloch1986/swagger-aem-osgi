//
// ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteReplicationHcImplReplicationTransportUsersHealthCProperties: Codable {

    public var hcTags: ConfigNodePropertyArray?

    public init(hcTags: ConfigNodePropertyArray?) {
        self.hcTags = hcTags
    }

    public enum CodingKeys: String, CodingKey { 
        case hcTags = "hc.tags"
    }


}
