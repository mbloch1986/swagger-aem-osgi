//
// ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqReplicationImplContentDurboBinaryLessContentBuilderProperties: Codable {

    public var binaryThreshold: ConfigNodePropertyInteger?

    public init(binaryThreshold: ConfigNodePropertyInteger?) {
        self.binaryThreshold = binaryThreshold
    }

    public enum CodingKeys: String, CodingKey { 
        case binaryThreshold = "binary.threshold"
    }


}

