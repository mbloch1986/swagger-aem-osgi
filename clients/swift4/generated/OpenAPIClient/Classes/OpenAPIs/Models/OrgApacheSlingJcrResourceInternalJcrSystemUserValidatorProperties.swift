//
// OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheSlingJcrResourceInternalJcrSystemUserValidatorProperties: Codable {

    public var allowOnlySystemUser: ConfigNodePropertyBoolean?

    public init(allowOnlySystemUser: ConfigNodePropertyBoolean?) {
        self.allowOnlySystemUser = allowOnlySystemUser
    }

    public enum CodingKeys: String, CodingKey { 
        case allowOnlySystemUser = "allow.only.system.user"
    }


}

