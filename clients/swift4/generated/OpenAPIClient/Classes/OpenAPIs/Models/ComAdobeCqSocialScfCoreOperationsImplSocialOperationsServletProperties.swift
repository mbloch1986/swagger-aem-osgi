//
// ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqSocialScfCoreOperationsImplSocialOperationsServletProperties: Codable {

    public var slingServletSelectors: ConfigNodePropertyString?
    public var slingServletExtensions: ConfigNodePropertyString?

    public init(slingServletSelectors: ConfigNodePropertyString?, slingServletExtensions: ConfigNodePropertyString?) {
        self.slingServletSelectors = slingServletSelectors
        self.slingServletExtensions = slingServletExtensions
    }

    public enum CodingKeys: String, CodingKey { 
        case slingServletSelectors = "sling.servlet.selectors"
        case slingServletExtensions = "sling.servlet.extensions"
    }


}
