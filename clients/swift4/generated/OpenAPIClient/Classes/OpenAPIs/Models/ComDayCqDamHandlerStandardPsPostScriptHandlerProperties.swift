//
// ComDayCqDamHandlerStandardPsPostScriptHandlerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamHandlerStandardPsPostScriptHandlerProperties: Codable {

    public var rasterAnnotation: ConfigNodePropertyBoolean?

    public init(rasterAnnotation: ConfigNodePropertyBoolean?) {
        self.rasterAnnotation = rasterAnnotation
    }

    public enum CodingKeys: String, CodingKey { 
        case rasterAnnotation = "raster.annotation"
    }


}

