//
// ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties: Codable {

    public var cqDamScene7ConfigurationeventlistenerEnabled: ConfigNodePropertyBoolean?

    public init(cqDamScene7ConfigurationeventlistenerEnabled: ConfigNodePropertyBoolean?) {
        self.cqDamScene7ConfigurationeventlistenerEnabled = cqDamScene7ConfigurationeventlistenerEnabled
    }

    public enum CodingKeys: String, CodingKey { 
        case cqDamScene7ConfigurationeventlistenerEnabled = "cq.dam.scene7.configurationeventlistener.enabled"
    }


}
