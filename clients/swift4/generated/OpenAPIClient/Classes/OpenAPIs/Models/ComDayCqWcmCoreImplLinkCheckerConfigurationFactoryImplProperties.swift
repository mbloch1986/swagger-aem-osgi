//
// ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties: Codable {

    public var linkExpiredPrefix: ConfigNodePropertyString?
    public var linkExpiredRemove: ConfigNodePropertyBoolean?
    public var linkExpiredSuffix: ConfigNodePropertyString?
    public var linkInvalidPrefix: ConfigNodePropertyString?
    public var linkInvalidRemove: ConfigNodePropertyBoolean?
    public var linkInvalidSuffix: ConfigNodePropertyString?
    public var linkPredatedPrefix: ConfigNodePropertyString?
    public var linkPredatedRemove: ConfigNodePropertyBoolean?
    public var linkPredatedSuffix: ConfigNodePropertyString?
    public var linkWcmmodes: ConfigNodePropertyArray?

    public init(linkExpiredPrefix: ConfigNodePropertyString?, linkExpiredRemove: ConfigNodePropertyBoolean?, linkExpiredSuffix: ConfigNodePropertyString?, linkInvalidPrefix: ConfigNodePropertyString?, linkInvalidRemove: ConfigNodePropertyBoolean?, linkInvalidSuffix: ConfigNodePropertyString?, linkPredatedPrefix: ConfigNodePropertyString?, linkPredatedRemove: ConfigNodePropertyBoolean?, linkPredatedSuffix: ConfigNodePropertyString?, linkWcmmodes: ConfigNodePropertyArray?) {
        self.linkExpiredPrefix = linkExpiredPrefix
        self.linkExpiredRemove = linkExpiredRemove
        self.linkExpiredSuffix = linkExpiredSuffix
        self.linkInvalidPrefix = linkInvalidPrefix
        self.linkInvalidRemove = linkInvalidRemove
        self.linkInvalidSuffix = linkInvalidSuffix
        self.linkPredatedPrefix = linkPredatedPrefix
        self.linkPredatedRemove = linkPredatedRemove
        self.linkPredatedSuffix = linkPredatedSuffix
        self.linkWcmmodes = linkWcmmodes
    }

    public enum CodingKeys: String, CodingKey { 
        case linkExpiredPrefix = "link.expired.prefix"
        case linkExpiredRemove = "link.expired.remove"
        case linkExpiredSuffix = "link.expired.suffix"
        case linkInvalidPrefix = "link.invalid.prefix"
        case linkInvalidRemove = "link.invalid.remove"
        case linkInvalidSuffix = "link.invalid.suffix"
        case linkPredatedPrefix = "link.predated.prefix"
        case linkPredatedRemove = "link.predated.remove"
        case linkPredatedSuffix = "link.predated.suffix"
        case linkWcmmodes = "link.wcmmodes"
    }


}
