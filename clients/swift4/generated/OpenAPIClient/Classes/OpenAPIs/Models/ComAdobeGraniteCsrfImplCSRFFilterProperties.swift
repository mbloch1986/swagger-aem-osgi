//
// ComAdobeGraniteCsrfImplCSRFFilterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteCsrfImplCSRFFilterProperties: Codable {

    public var filterMethods: ConfigNodePropertyArray?
    public var filterEnableSafeUserAgents: ConfigNodePropertyBoolean?
    public var filterSafeUserAgents: ConfigNodePropertyArray?
    public var filterExcludedPaths: ConfigNodePropertyArray?

    public init(filterMethods: ConfigNodePropertyArray?, filterEnableSafeUserAgents: ConfigNodePropertyBoolean?, filterSafeUserAgents: ConfigNodePropertyArray?, filterExcludedPaths: ConfigNodePropertyArray?) {
        self.filterMethods = filterMethods
        self.filterEnableSafeUserAgents = filterEnableSafeUserAgents
        self.filterSafeUserAgents = filterSafeUserAgents
        self.filterExcludedPaths = filterExcludedPaths
    }

    public enum CodingKeys: String, CodingKey { 
        case filterMethods = "filter.methods"
        case filterEnableSafeUserAgents = "filter.enable.safe.user.agents"
        case filterSafeUserAgents = "filter.safe.user.agents"
        case filterExcludedPaths = "filter.excluded.paths"
    }


}

