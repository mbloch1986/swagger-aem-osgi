//
// OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheFelixWebconsolePluginsEventInternalPluginServletProperties: Codable {

    public var maxSize: ConfigNodePropertyInteger?

    public init(maxSize: ConfigNodePropertyInteger?) {
        self.maxSize = maxSize
    }

    public enum CodingKeys: String, CodingKey { 
        case maxSize = "max.size"
    }


}

