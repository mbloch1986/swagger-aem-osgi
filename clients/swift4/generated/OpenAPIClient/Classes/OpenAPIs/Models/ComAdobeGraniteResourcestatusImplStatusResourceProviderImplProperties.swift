//
// ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteResourcestatusImplStatusResourceProviderImplProperties: Codable {

    public var providerRoot: ConfigNodePropertyString?

    public init(providerRoot: ConfigNodePropertyString?) {
        self.providerRoot = providerRoot
    }

    public enum CodingKeys: String, CodingKey { 
        case providerRoot = "provider.root"
    }


}

