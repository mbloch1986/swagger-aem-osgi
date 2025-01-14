//
// ComAdobeGraniteFragsImplRandomFeatureProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteFragsImplRandomFeatureProperties: Codable {

    public var featureName: ConfigNodePropertyString?
    public var featureDescription: ConfigNodePropertyString?
    public var activePercentage: ConfigNodePropertyString?
    public var cookieName: ConfigNodePropertyString?
    public var cookieMaxAge: ConfigNodePropertyInteger?

    public init(featureName: ConfigNodePropertyString?, featureDescription: ConfigNodePropertyString?, activePercentage: ConfigNodePropertyString?, cookieName: ConfigNodePropertyString?, cookieMaxAge: ConfigNodePropertyInteger?) {
        self.featureName = featureName
        self.featureDescription = featureDescription
        self.activePercentage = activePercentage
        self.cookieName = cookieName
        self.cookieMaxAge = cookieMaxAge
    }

    public enum CodingKeys: String, CodingKey { 
        case featureName = "feature.name"
        case featureDescription = "feature.description"
        case activePercentage = "active.percentage"
        case cookieName = "cookie.name"
        case cookieMaxAge = "cookie.maxAge"
    }


}

