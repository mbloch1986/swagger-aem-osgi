//
// ComDayCqDamCoreImplDamChangeEventListenerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamCoreImplDamChangeEventListenerProperties: Codable {

    public var changeeventlistenerObservedPaths: ConfigNodePropertyArray?

    public init(changeeventlistenerObservedPaths: ConfigNodePropertyArray?) {
        self.changeeventlistenerObservedPaths = changeeventlistenerObservedPaths
    }

    public enum CodingKeys: String, CodingKey { 
        case changeeventlistenerObservedPaths = "changeeventlistener.observed.paths"
    }


}
