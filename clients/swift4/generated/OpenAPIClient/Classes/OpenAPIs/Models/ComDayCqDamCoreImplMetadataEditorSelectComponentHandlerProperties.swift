//
// ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamCoreImplMetadataEditorSelectComponentHandlerProperties: Codable {

    public var granitedata: ConfigNodePropertyArray?

    public init(granitedata: ConfigNodePropertyArray?) {
        self.granitedata = granitedata
    }

    public enum CodingKeys: String, CodingKey { 
        case granitedata = "granite:data"
    }


}

