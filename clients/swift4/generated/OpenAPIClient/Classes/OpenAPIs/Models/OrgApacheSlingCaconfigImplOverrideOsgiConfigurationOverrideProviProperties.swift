//
// OrgApacheSlingCaconfigImplOverrideOsgiConfigurationOverrideProviProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheSlingCaconfigImplOverrideOsgiConfigurationOverrideProviProperties: Codable {

    public var _description: ConfigNodePropertyString?
    public var overrides: ConfigNodePropertyArray?
    public var enabled: ConfigNodePropertyBoolean?
    public var serviceRanking: ConfigNodePropertyInteger?

    public init(_description: ConfigNodePropertyString?, overrides: ConfigNodePropertyArray?, enabled: ConfigNodePropertyBoolean?, serviceRanking: ConfigNodePropertyInteger?) {
        self._description = _description
        self.overrides = overrides
        self.enabled = enabled
        self.serviceRanking = serviceRanking
    }

    public enum CodingKeys: String, CodingKey { 
        case _description = "description"
        case overrides
        case enabled
        case serviceRanking = "service.ranking"
    }


}

