//
// ComDayCqNotificationImplNotificationServiceImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqNotificationImplNotificationServiceImplProperties: Codable {

    public var eventFilter: ConfigNodePropertyString?

    public init(eventFilter: ConfigNodePropertyString?) {
        self.eventFilter = eventFilter
    }

    public enum CodingKeys: String, CodingKey { 
        case eventFilter = "event.filter"
    }


}
