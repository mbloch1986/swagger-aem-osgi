//
// ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties: Codable {

    public var cqDamScene7DamchangeeventlistenerEnabled: ConfigNodePropertyBoolean?
    public var cqDamScene7DamchangeeventlistenerObservedPaths: ConfigNodePropertyArray?

    public init(cqDamScene7DamchangeeventlistenerEnabled: ConfigNodePropertyBoolean?, cqDamScene7DamchangeeventlistenerObservedPaths: ConfigNodePropertyArray?) {
        self.cqDamScene7DamchangeeventlistenerEnabled = cqDamScene7DamchangeeventlistenerEnabled
        self.cqDamScene7DamchangeeventlistenerObservedPaths = cqDamScene7DamchangeeventlistenerObservedPaths
    }

    public enum CodingKeys: String, CodingKey { 
        case cqDamScene7DamchangeeventlistenerEnabled = "cq.dam.scene7.damchangeeventlistener.enabled"
        case cqDamScene7DamchangeeventlistenerObservedPaths = "cq.dam.scene7.damchangeeventlistener.observed.paths"
    }


}

