//
// OrgApacheFelixSystemreadyImplServicesCheckProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheFelixSystemreadyImplServicesCheckProperties: Codable {

    public var servicesList: ConfigNodePropertyArray?
    public var type: ConfigNodePropertyDropDown?

    public init(servicesList: ConfigNodePropertyArray?, type: ConfigNodePropertyDropDown?) {
        self.servicesList = servicesList
        self.type = type
    }

    public enum CodingKeys: String, CodingKey { 
        case servicesList = "services.list"
        case type
    }


}

