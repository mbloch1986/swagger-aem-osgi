//
// ComDayCqMcmImplMCMConfigurationProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqMcmImplMCMConfigurationProperties: Codable {

    public var experienceIndirection: ConfigNodePropertyArray?
    public var touchpointIndirection: ConfigNodePropertyArray?

    public init(experienceIndirection: ConfigNodePropertyArray?, touchpointIndirection: ConfigNodePropertyArray?) {
        self.experienceIndirection = experienceIndirection
        self.touchpointIndirection = touchpointIndirection
    }

    public enum CodingKeys: String, CodingKey { 
        case experienceIndirection = "experience.indirection"
        case touchpointIndirection = "touchpoint.indirection"
    }


}

