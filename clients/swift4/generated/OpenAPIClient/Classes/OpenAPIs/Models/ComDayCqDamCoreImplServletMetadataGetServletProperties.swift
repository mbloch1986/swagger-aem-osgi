//
// ComDayCqDamCoreImplServletMetadataGetServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamCoreImplServletMetadataGetServletProperties: Codable {

    public var slingServletResourceTypes: ConfigNodePropertyString?
    public var slingServletMethods: ConfigNodePropertyString?
    public var slingServletExtensions: ConfigNodePropertyString?
    public var slingServletSelectors: ConfigNodePropertyString?

    public init(slingServletResourceTypes: ConfigNodePropertyString?, slingServletMethods: ConfigNodePropertyString?, slingServletExtensions: ConfigNodePropertyString?, slingServletSelectors: ConfigNodePropertyString?) {
        self.slingServletResourceTypes = slingServletResourceTypes
        self.slingServletMethods = slingServletMethods
        self.slingServletExtensions = slingServletExtensions
        self.slingServletSelectors = slingServletSelectors
    }

    public enum CodingKeys: String, CodingKey { 
        case slingServletResourceTypes = "sling.servlet.resourceTypes"
        case slingServletMethods = "sling.servlet.methods"
        case slingServletExtensions = "sling.servlet.extensions"
        case slingServletSelectors = "sling.servlet.selectors"
    }


}

