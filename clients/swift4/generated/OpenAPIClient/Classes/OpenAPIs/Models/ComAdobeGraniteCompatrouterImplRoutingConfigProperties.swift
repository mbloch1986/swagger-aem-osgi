//
// ComAdobeGraniteCompatrouterImplRoutingConfigProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteCompatrouterImplRoutingConfigProperties: Codable {

    public var _id: ConfigNodePropertyString?
    public var compatPath: ConfigNodePropertyString?
    public var newPath: ConfigNodePropertyString?

    public init(_id: ConfigNodePropertyString?, compatPath: ConfigNodePropertyString?, newPath: ConfigNodePropertyString?) {
        self._id = _id
        self.compatPath = compatPath
        self.newPath = newPath
    }

    public enum CodingKeys: String, CodingKey { 
        case _id = "id"
        case compatPath
        case newPath
    }


}

