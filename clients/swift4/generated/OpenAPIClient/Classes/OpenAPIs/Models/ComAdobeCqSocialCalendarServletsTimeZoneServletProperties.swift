//
// ComAdobeCqSocialCalendarServletsTimeZoneServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqSocialCalendarServletsTimeZoneServletProperties: Codable {

    public var timezonesExpirytime: ConfigNodePropertyInteger?

    public init(timezonesExpirytime: ConfigNodePropertyInteger?) {
        self.timezonesExpirytime = timezonesExpirytime
    }

    public enum CodingKeys: String, CodingKey { 
        case timezonesExpirytime = "timezones.expirytime"
    }


}

