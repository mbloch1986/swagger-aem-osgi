//
// ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqDamProcessorNuiImplNuiAssetProcessorProperties: Codable {

    public var nuiEnabled: ConfigNodePropertyBoolean?
    public var nuiServiceUrl: ConfigNodePropertyString?
    public var nuiApiKey: ConfigNodePropertyString?

    public init(nuiEnabled: ConfigNodePropertyBoolean?, nuiServiceUrl: ConfigNodePropertyString?, nuiApiKey: ConfigNodePropertyString?) {
        self.nuiEnabled = nuiEnabled
        self.nuiServiceUrl = nuiServiceUrl
        self.nuiApiKey = nuiApiKey
    }


}

